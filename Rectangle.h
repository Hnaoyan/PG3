#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public: // 継承
	void Size() override;
	void Draw() override;

};

