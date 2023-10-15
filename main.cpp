#include <stdio.h>

/// <summary>
/// 比較して小さい値を返す関数
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
template <typename T>
T Min(T a, T b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

/// <summary>
/// char型のオーバーライド
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
template <>
char Min<char>(char a, char b) {
	// char型の場合に出力する文
	printf_s("数字以外は代入できません");
	// 空文字を返す
	return '\0';
}

int main() {
	// int型
	printf("%d\n", Min<int>(10, 20));
	// float型
	printf("%f\n", Min<float>(10.0f, 20.0f));
	// double型
	printf("%lf\n", Min<double>(10.0, 20.0));
	// char型
	Min(char('10'), char('20'));
	return 0;
}