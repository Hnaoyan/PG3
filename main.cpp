#include <iostream>
#include <string>
#include <chrono>

int main() 
{
	// タイマー関係
	std::chrono::system_clock::time_point start, end;
	// コピー
	start = std::chrono::system_clock::now();

	std::string a = (100000, "a");
	std::string x = a;

	end = std::chrono::system_clock::now();

	std::chrono::microseconds time1 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// 移動
	start = std::chrono::system_clock::now();

	std::string y = std::move(a);

	end = std::chrono::system_clock::now();

	std::chrono::microseconds time2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "100000文字の移動とコピー比較" << std::endl;

	std::cout << "コピー: " << static_cast<int>(time1.count()) << std::endl;

	std::cout << "移動 " << static_cast<int>(time2.count()) << std::endl;


	return 0;
}