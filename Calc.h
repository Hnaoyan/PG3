#pragma once

//template<typename Type>
template<typename T1,typename T2>

class Calc
{
public:
	T1 a;
	T2 b;

	// コンストラクタ
	Calc(T1 a, T2 b): a(a), b(b) {};

public: // メンバ関数
	/// <summary>
	/// 比較した変数の小さい値を返す関数
	/// </summary>
	/// <returns></returns>
	T1 Min() {
		// 比較
		if (a > b) {
			return static_cast<T2>(b);
		}
		return static_cast<T1>(a);
	}
};
