	//
	//  main.cpp
	//  Tic tac toe
	//
	//  Created by Stefanos Mitropoulos on 28/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include <iostream>
#include "board.hpp"
#include "engine.hpp"

int main(int argc, const char * argv[]) {

	char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
	drawBoard(square);
	int player = 1,i,choice;

	char mark;
	do
		{
		drawBoard(square);
		player=(player%2)?1:2;

		std::cout << "Player " << player << ", enter a number:  ";
		std::cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
			{
			std::cout<<"Invalid move ";

			player--;
			std::cin.ignore();
			std::cin.get();
			}
		i=checkwin(square);

		player++;
		}while(i==-1);

	drawBoard(square);
	if(i==1)

		std::cout<<"==>\aPlayer "<<--player<<" win ";
	else
		std::cout<<"==>\aGame draw";

	std::cin.ignore();
	std::cin.get();
	return 0;
}
