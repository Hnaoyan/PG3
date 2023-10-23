#include <stdio.h>
#include <memory>

#include "Enemy.h"

int main() {

	std::unique_ptr<Enemy> enemy_ = std::make_unique<Enemy>();
	
	while (enemy_->GetState()!=Enemy::kEnd)
	{
		enemy_->Update();
	}

	return 0;
}