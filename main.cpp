#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void Dice(int* answer) {

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

void SetTimeOut(PFunc p, int second) {
	int answer = 0;
	printf("���F�O ���F�P\n");
	scanf_s("%d", &answer);
	printf("���ʂ�...\n");
	// �R�[���o�b�N���Ăяo��
	Sleep(second * 1000);

	p(&answer);
}

int main() {
	// ����������
	srand(time(nullptr));

	std::function<int(int)> fx = [](int i) {return i + 2; };

	PFunc p;
	p = Dice;
	SetTimeOut(p,3);

	return 0;
}