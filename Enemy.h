#pragma once
class Enemy
{
public:	// サブクラス
	enum class State {
		kApproach,
		kShooting,
		kBreakAway,
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
	State phase_ = State::kApproach;
};

