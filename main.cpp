#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void Dice(int* answer) {

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

void SetTimeOut(PFunc p, int second, int param) {
	// コールバックを呼び出す
	Sleep(second * 1000);

	p(&param);
}

int main() {
	// 乱数初期化
	srand(time(nullptr));

	// 関数ポインタの設定
	PFunc p;
	p = Dice;

	// 入力処理
	int answer = 0;
	printf("丁：０ 半：１\n");
	scanf_s("%d", &answer);
	printf("結果は...\n");

	std::function<void(PFunc, int, int)> allFunction = [](PFunc p, int i, int param) {return SetTimeOut(p, i, param); };
	allFunction(p, 3, answer);

	return 0;
}