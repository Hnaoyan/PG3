#pragma once
class Enemy
{
public:	// サブクラス
	enum State {
		kApproach,
		kShooting,
		kBreakAway,
		kEnd,
	};

public: // メンバ関数
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Enemy();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy() = default;

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	int GetState() { return phase_; }

private:
	/// <summary>
	/// 近接関数
	/// </summary>
	void Approach();

	/// <summary>
	/// 射撃関数
	/// </summary>
	void Shooting();

	/// <summary>
	/// 離脱関数
	/// </summary>
	void BreakAway();

private:
	// メンバ関数のテーブル
	static void(Enemy::*pFuncTable[])();

	// 状態管理変数（EnumClass）
	int phase_ = State::kApproach;
};

