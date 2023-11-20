#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void RollDice(int* answer) {

	int dice = rand() % 6 + 1;

	int surplus = dice % 2;
	if (surplus == 0) {
		printf("�� : %d\n", dice);
		if (*answer == 0) {
			printf("������E�E�E�I\n");
		}
		else {
			printf("�͂���E�E�E�I\n");
		}
	}
	else if (surplus == 1) {
		printf("�� : %d\n", dice);
		if (*answer == 1) {
			printf("������E�E�E�I\n");
		}
		else {
			printf("�͂���E�E�E�I\n");
		}
	}
}

void SetTimeOut(std::function<void()> CallBackFunc, int second) {
	Sleep(second * 1000);

	CallBackFunc();
}

int main() {
	// ����������
	srand(time(nullptr));

	// �֐��|�C���^�̐ݒ�
	PFunc p;
	p = RollDice;

	// ���͏���
	int answer = 0;
	printf("���F�O ���F�P\n");
	scanf_s("%d", &answer); 
	printf("���ʂ�...\n");

	std::function<void()> func = [&]() {
		p(&answer);
	};

	SetTimeOut(func, 3);

	return 0;
}