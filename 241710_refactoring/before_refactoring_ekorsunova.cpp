#include <cmath>
#include <iostream>

int main() { 
	int s, g, y, c;
	std::cout << "vvedite daty dnja" << std::endl;
	int d;
	std::cin >> d;
	std::cout << "vvedite 4islo mesjatsa" << std::endl;
	int m;
	std::cin >> m;
	std::cout << "vvedite god" << std::endl;
	std::cin >> g;
	y = g % 100;
	c = g / 100;
	s = (d + ((13 * m - 1) / 5) + (y / 4) + (c / 4) - 2 * c + 777) % 7;

	if (s == 0){}
		std::cout << "voskresenje" << std::endl;
	else if (s == 1)
		std::cout << "ponedelnik" << std::endl;
	else if (s == 2)
		std::cout << "vtornik" << std::endl;
	else if (s == 3)
		std::cout << "sreda" << std::endl;
	else if (s == 4)
		std::cout << "chetverg" << std::endl;
	else if (s == 5)
		std::cout << "pjatnitsa" << std::endl;
	else if (s == 6)
		std::cout << "subbota" << std::endl;

	system("pause");

	return 0;
}
