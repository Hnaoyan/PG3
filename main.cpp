#include <iostream>
#include <thread>

void PrintScreen(int num) {
	std::cout << "thread " << num << std::endl;
}

int main() {

	std::thread th1(PrintScreen, 1);
	th1.join();

	std::thread th2(PrintScreen, 2);
	th2.join();

	std::thread th3(PrintScreen, 3);
	th3.join();

	return 0;
}