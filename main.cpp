#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void RollDice(int* answer) {

	int dice = rand() % 6 + 1;

	int surplus = dice % 2;
	if (surplus == 0) {
		printf("丁 : %d\n", dice);
		if (*answer == 0) {
			printf("あたり・・・！\n");
		}
		else {
			printf("はずれ・・・！\n");
		}
	}
	else if (surplus == 1) {
		printf("半 : %d\n", dice);
		if (*answer == 1) {
			printf("あたり・・・！\n");
		}
		else {
			printf("はずれ・・・！\n");
		}
	}
}

std::function<void(int)> SetTimeOut(PFunc p,int second) /*= [&](PFunc p, int second, int param) */{
	// コールバックを呼び出す
	Sleep(second * 1000);

	return [p](int answer) {p(&answer); };
};

int main() {
	// 乱数初期化
	srand(time(nullptr));

	// 関数ポインタの設定
	PFunc p;
	p = RollDice;

	// 入力処理
	int answer = 0;
	printf("丁：０ 半：１\n");
	scanf_s("%d", &answer); 
	printf("結果は...\n");

	auto fx = SetTimeOut(p, 3);

	fx(answer);

	return 0;
}