#include <stdio.h>

/// <summary>
/// �ċA�I�Ȓ����̌v�Z
/// </summary>
/// <param name="money"></param>
/// <returns></returns>
int Recursive(int wage,int hour) {
	// ����
	int RemainingTime = hour - 1;
	int prevWage = 0;
	int recWage = 0;
	// ����
	if (hour > 0) {
		// �ꎞ�ԑO�̒���
		prevWage = wage;
		// ���ݎ��Ԃ̒���
		recWage = wage * 2 - 50;
		// �ċA
		return (prevWage + Recursive(recWage, RemainingTime));
	}
	// �I��
	return recWage;
}

/// <summary>
/// ��ʓI�Ȓ����v�Z
/// </summary>
/// <param name="wage"></param>
/// <returns></returns>
int HourlyWage(int wage,int hour) {
	return wage * hour;
}

int main() {
	// ��ʓI�Ȓ����̌n�̎���
	const int kPrevailingWage = 1072;
	// �ċA�I�Ȓ����̌n�̏����l
	int hourWage = 100;
	// ��������
	int timeValue = 9;
	int result;
	printf("�������Ԃ���͂��Ă�������...\n");
	scanf_s("%d����", &timeValue);
	// �ċA�I�Ȓ����v�Z�̌���
	result = Recursive(hourWage, timeValue);
	printf("�ċA�I�Ȓ����v�Z : %d\n", result);

	// ��ʓI�Ȓ����v�Z�̌���
	result = HourlyWage(kPrevailingWage, timeValue);
	printf("��ʓI�Ȓ����v�Z : %d\n", result);

	return 0;
}