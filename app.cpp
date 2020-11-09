#include <iostream>

int main() {
	int user_input, secret;
	srand(time(0));
	secret = rand()%10+1; //random 1~10 range.

	std::cout << "Welcome To The Number Guessing Game!\n";

	do {
		std::cout << "Guess the number(1~10): ";
		std::cin >> user_input;
		if (std::cin.fail()){
			std::cout << "Invalid Input\n";
			break;
		}
		if (user_input < secret) {
			std::cout << "To Low\n";
		}else if (user_input > secret) {
			std::cout << "To High\n";
		}else if (user_input == secret) {
			printf("Good job... you found the number %d\n",secret);
		}
	}while (user_input != secret);
}