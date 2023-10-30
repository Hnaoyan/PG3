#pragma once
class IShape
{
public: // サブクラス
	struct Vector2 {
		float x, y;
	};

public: // メンバ関数
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	Vector2 position;
	float radius;

};

