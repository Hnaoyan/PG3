#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"
#include <memory>

int main() {
	// 円クラス
	std::unique_ptr<Circle> circle_ = std::make_unique<Circle>();
	// 矩形クラス
	std::unique_ptr<Rectangle> rectangle_ = std::make_unique<Rectangle>();

	// 計算
	circle_->Size();
	rectangle_->Size();

	// 出力
	circle_->Draw();
	rectangle_->Draw();

	return 0;
}