#include <iostream>

int main() {
	std::cout << "Введите дату дня" << std::endl;
	int day;
	std::cin >> day;
	
	std::cout << "Введите число месяца" << std::endl;
	int month;
	std::cin >> month;
	
	std::cout << "Введите год" << std::endl;
	int year;
	std::cin >> year;
	
	int century_year = year % 100;
	int century = year / 100;
	int s1 = ((13 * month - 1) / 5);
	int s2 = (century_year / 4);
	int s3 = (century / 4);
	int s4 = 2 * century;
	int s = (day + s1 + s2 + s3 - s4 + 777) % 7;
	

	switch (s) {
		case 0:
			std::cout << "Воскресенье" << std::endl;
			break;
		case 1:
			std::cout << "Понедельник" << std::endl;
			break;
		case 2:
			std::cout << "Вторник" << std::endl;
			break;
		case 3:
			std::cout << "Среда" << std::endl;
			break;
		case 4:
			std::cout << "Четверг" << std::endl;
			break;
		case 5:
			std::cout << "Пятница" << std::endl;
			break;
		case 6:
			std::cout << "Суббота" << std::endl;
			break;
	}
	system("pause");

	return 0;
}
