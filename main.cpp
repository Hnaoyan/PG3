#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"
#include <memory>

int main() {
	// �~�N���X
	std::unique_ptr<Circle> circle_ = std::make_unique<Circle>();
	// ��`�N���X
	std::unique_ptr<Rectangle> rectangle_ = std::make_unique<Rectangle>();

	// �v�Z
	circle_->Size();
	rectangle_->Size();

	// �o��
	circle_->Draw();
	rectangle_->Draw();

	return 0;
}