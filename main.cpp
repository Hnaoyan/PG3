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

std::function<void(PFunc, int, int)> SetTimeOut = [](PFunc p, int second, int param) {
	// �R�[���o�b�N���Ăяo��
	Sleep(second * 1000);

	p(&param);
};

int main() {
	// ����������
	srand(time(nullptr));

	// �֐��|�C���^�̐ݒ�
	PFunc p;
	p = RollDice;
	// �t�@���N�V�����̐ݒ�
	//std::function<void(PFunc, int, int)> allFunction = [](PFunc p, int i, int param) {return SetTimeOut(p, i, param); };

	// ���͏���
	int answer = 0;
	printf("���F�O ���F�P\n");
	answer = [=]() {return scanf_s("%d", &answer); }();
	printf("���ʂ�...\n");

	SetTimeOut(p, 3, answer);

	//allFunction(p, 3, answer);

	return 0;
}