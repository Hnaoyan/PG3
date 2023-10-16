#include <stdio.h>

/// <summary>
/// 再帰的な賃金計算
/// </summary>
/// <param name="money"></param>
/// <returns></returns>
int Recursive(int wage,int hour) {
	int RemainingTime = hour - 1;
	int recWage = wage * 2 - 50;
	if (RemainingTime <= 1) {
		return (recWage);
	}
	return (Recursive(recWage, RemainingTime));
}

/// <summary>
/// 一般的な賃金計算
/// </summary>
/// <param name="wage"></param>
/// <returns></returns>
int HourlyWage(int wage,int hour) {
	return wage * hour;
}

int main() {
	// 一般的な賃金体系の時給
	const int kPrevailingWage = 1072;
	// 再帰的な賃金体系の初期値
	int hourWage = 100;
	// 働く時間
	int timeValue = 9;
	int result;
	printf("働く時間を入力してください...\n");
	scanf_s("%d時間", &timeValue);
	// 再帰的な賃金計算の結果
	result = Recursive(hourWage, timeValue);
	printf("再帰的な賃金計算 : %d\n", result);

	// 一般的な賃金計算の結果
	result = HourlyWage(kPrevailingWage, timeValue);
	printf("一般的な賃金計算 : %d\n", result);

	return 0;
}