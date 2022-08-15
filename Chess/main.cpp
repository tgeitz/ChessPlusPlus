// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "UIConsole.h"
#include "Board.h"

using namespace std;

int main(int argc, char* argv[])
{
	bool bRun = true;

	UIConsole ui = UIConsole();

	string input = "";
	UIConsole::CommandType commandType;

	cout << "Welcome to Chess!" << endl;
	ui.listCommands();

	while (bRun)
	{
		cout << "Enter a command and hit ENTER:" << endl;
		getline(cin, input);
		
		commandType = ui.parseInput(input);

		if (commandType == UIConsole::CommandType::HELP) {
			//
		}

		if (commandType == UIConsole::CommandType::NEW_GAME) {
			//
		}

		if (commandType == UIConsole::CommandType::EXIT) {
			bRun = false;
		}
	}

	return 0;
	/*Board board = Board();
	
	board.resetBoard();

	board.describeBoard();

	std::cout << std::endl;
	std::cout << std::endl;

	Board::Position currentPosition;
	currentPosition.iRow = 6;
	currentPosition.iColumn = 4; 
	
	Board::Position intendedPosition;
	intendedPosition.iRow = 4;
	intendedPosition.iColumn = 4;
	board.movePiece(currentPosition, intendedPosition);

	board.describeBoard();*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
