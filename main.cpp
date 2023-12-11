#include <stdio.h>
#include <list>
#include <iostream>

void PrintList(std::list<const char*> printList) {
	int currentIndex = 1;
	for (std::list<const char*>::iterator itr = printList.begin(); itr != printList.end(); ++itr) {
		std::cout << currentIndex << ":" << *itr << std::endl;
		currentIndex++;
	}
}

int main() {

	std::list<const char*> stationList{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gitanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	std::cout << "\n1970\n" << std::endl;

	PrintList(stationList);

	std::cout << "\n2019\n" << std::endl;

	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Nippori") {
			stationList.insert(++itr, "Nishi-Nippori");
		}
	}

	PrintList(stationList);

	std::cout << "\n2020\n" << std::endl;

	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Shinagawa") {
			stationList.insert(++itr, "Takanawa Gateway");
		}
	}

	PrintList(stationList);

	return 0;
}