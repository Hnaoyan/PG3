#include "Rectangle.h"

void Rectangle::Size()
{
	// 初期設定
	width_ = 5.0f;
	height_ = 10.0f;

	// 面積
	area_ = width_ * height_;

}

void Rectangle::Draw()
{
	// 出力結果
	std::cout << "矩形の面積：" << area_ << std::endl;

}