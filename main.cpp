#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void SetTimeOut(PFunc p, int second) {
	printf("丁：０ 半：１\n");
	scanf("%d");
	// コールバックを呼び出す
	Sleep(second * 1000);

	p(&second);
}

int main() {
	// 乱数初期化
	srand(time(nullptr));

	PFunc p;

	return 0;
}