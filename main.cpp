#include <stdio.h>
#include "Sword.h"
#include "Gun.h"
#include "Sword.h"


int main() {
	const int MaxCount = 2;
	Weapon* weapons[MaxCount];
	// ¶¬
	for (int i = 0; i < MaxCount; i++) {
		if (i < 1) {
			weapons[i] = new Gun();
		}
		else {
			weapons[i] = new Sword();
		}
	}

	// UŒ‚ˆ—
	for (int i = 0; i < MaxCount; i++) {
		weapons[i]->Attack();
	}

	// ”jŠüˆ—
	for (int i = 0; i < MaxCount; i++) {
		delete weapons[i];
	}

	return 0;
}