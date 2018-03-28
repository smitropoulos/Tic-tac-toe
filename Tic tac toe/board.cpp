//
//  board.cpp
//  Tic tac toe
//
//  Created by Stefanos Mitropoulos on 28/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "board.hpp"
#include <iostream>

using namespace std;

void drawBoard(char *square)
{
		//system("cls");	//windows specific;
	printf( "\033[2J" );
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
