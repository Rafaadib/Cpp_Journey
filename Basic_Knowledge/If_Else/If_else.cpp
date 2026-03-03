
#include <iostream>

int main() {

	int age;

	std::cout << "input your age : ";
	std::cin >> age;

	if (age >= 5 && age <= 15) {
		std::cout << " hello child " << std::endl;
	}
	else if (age >= 16 && age <= 20 ) {
		std::cout << " you tenager right now " << std::endl;
	}
	else if (age >= 21 && age <= 40) {
		std::cout << " you adult now " << std::endl;
	}
	else if (age >= 41) {
		std::cout << " hello old man " << std::endl;
	}
	else {
		std::cout << " passed away\n";
	}


	return 0;
}