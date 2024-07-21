#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
void SetColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main(){
	int streak = 0;
	int guess,game,con;
	SetColor(3);
	std::cout << "Welcome to number guessing (Hot-Cold) game.\nTake a guess between 1-20. You have 5 chance.\033[0m";
	while(game != 2){
		int chance = 1;
		srand(time(NULL));
		int number = (rand() % 20) + 1;
		while (chance <= 5){
			std::cout << "\nEnter your " << chance << ". guess: ";
			std::cin >> guess;
			if(number == guess){
				streak++;
				SetColor(3);
				std::cout << "\nCongratulations! You guessed the number at your " << chance << ". guess!\n";
				std::cout << "Streak: \033[0m" << streak;
				std::cout << "\n1.Continue game\n2.Exit\n";
				chance = 1;
				std::cin >> game;
				break;
			}
			else if(abs(number - guess) <= 2){
				chance++;
				SetColor(4);
				std::cout << "HOT!!\n\033[0m";
			}
			else if (chance == 5 && guess != number){
				chance = 1;
				SetColor(4);
				std::cout << "You did not guessed the number right. Number was " << number << "\n\033[0m1.Continue game\n2.Exit\n";
				std::cin >> game;
				streak = 0;
				break;
			}
			else{
				chance++;
			}
		}
	}
	std::cout << "\nExiting the game..";
}
