#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
}

void Enemy::Update()
{
	// 関数ポインタテーブル
	(this->*pFuncTable[static_cast<size_t>(phase_)])();

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
