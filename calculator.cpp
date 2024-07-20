#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
void SetColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main(){
	int choice;
	double x,y;
	std::cout << "Welcome to calculator program. Enter your values and operations.\n";
	while (choice != 6){
		std::cout << "\n\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n";
		std::cout << "5. Power\n6. Exit program\n";
		std::cin >> choice;
		switch(choice){
			case 1:
				std::cout << "You selected addition.\nEnter the first number: ";
				std::cin >> x;
				std::cout << "Enter the second number: ";
				std::cin >> y;
				SetColor(1);
				std::cout << "\nAddition of " << x << " and " << y << " is " << (double)x+(double)y << "\033[0m";
				break;
			case 2:
				std::cout << "You selected substraction.\nEnter the first number: ";
				std::cin >> x;
				std::cout << "Enter the second number: ";
				std::cin >> y;
				SetColor(1);
				std::cout << "\nSubstraction of " << x << " and " << y << " is " << (double)x-(double)y << "\033[0m";
				break;
			case 3:
				std::cout << "You selected Multiplication.\nEnter the first number: ";
				std::cin >> x;
				std::cout << "Enter the second number: ";
				std::cin >> y;
				SetColor(1);
				std::cout << "\nMultiplication of " << x << " and " << y << " is " << (double)x*y << "\033[0m";
				break;
			case 4:
				std::cout << "You selected Division.\nEnter the first number: ";
				std::cin >> x;
				std::cout << "Enter the second number: ";
				std::cin >> y;
				SetColor(1);
				std::cout << "\nDivision of " << x << " and " << y << " is " << (double)x/y << "\033[0m";
				break;
			case 5:
				std::cout << "You selected Powering a number.\nEnter base number: ";
				std::cin >> x;
				std::cout << "Enter the power: ";
				std::cin >> y;
				SetColor(1);
				std::cout <<"\n" << y << ". base of " << x << " is " << pow(x,y) << "\033[0m";
				break;
			case 6:
				SetColor(1);
				std::cout << "\n\nExiting the program.." << "\033[0m";
				break;
		}
	}
}
