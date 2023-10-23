#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
}

void Enemy::Update()
{
	// 関数ポインタテーブル
	(this->*pFuncTable[static_cast<size_t>(phase_)])();
	//if (phase_ != Enemy::kEnd) {
	// フェーズカウントを加算
		phase_ += 1;
	//}
	printf("行動後\n");
}

void Enemy::Approach()
{
	printf("近接\n");
}

void Enemy::Shooting()
{
	printf("射撃\n");
}

void Enemy::BreakAway()
{
	printf("離脱\n");
}

void (Enemy::*Enemy::pFuncTable[])() 
= {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::BreakAway
};
