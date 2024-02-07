#include <iostream>
#include <string>
#include <chrono>

int main() 
{
	// �^�C�}�[�֌W
	std::chrono::system_clock::time_point start, end;
	// �R�s�[
	start = std::chrono::system_clock::now();

	std::string a = (100000, "a");
	std::string x = a;

	end = std::chrono::system_clock::now();

	std::chrono::microseconds time1 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// �ړ�
	start = std::chrono::system_clock::now();

	std::string y = std::move(a);

	end = std::chrono::system_clock::now();

	std::chrono::microseconds time2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "100000�����̈ړ��ƃR�s�[��r" << std::endl;

	std::cout << "�R�s�[: " << static_cast<int>(time1.count()) << std::endl;

	std::cout << "�ړ� " << static_cast<int>(time2.count()) << std::endl;


	return 0;
}