#include "Circle.h"

void Circle::Size()
{
	// 初期設定
	radius_ = 5.0f;
	float pi = 3.14f;

	// 面積
	area_ = radius_ * radius_ * pi;
}

void Circle::Draw()
{
	// 出力結果
	std::cout << "円の面積：" << area_ << std::endl;

}