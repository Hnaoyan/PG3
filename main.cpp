#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void SetTimeOut(PFunc p, int second) {
	printf("���F�O ���F�P\n");
	scanf("%d");
	// �R�[���o�b�N���Ăяo��
	Sleep(second * 1000);

	p(&second);
}

int main() {
	// ����������
	srand(time(nullptr));

	PFunc p;

	return 0;
}