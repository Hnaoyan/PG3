#pragma once
#include <iostream>
#include <cmath>

class IShape
{
public: // メンバ関数
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	// 面積
	float area_;

	// 半径
	float radius_;
	// 幅
	float width_;
	// 高さ
	float height_;
};