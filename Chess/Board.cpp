#include "Board.h"
#include "Square.h"
#include "Piece.h"
#include <iostream>

void Board::resetBoard()
{
	setInitialBoard();
}

void Board::setInitialBoard()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == 6) {
				board[i][j] = Square(i, j, &pawnWhite);
			}
			else if (i == 1) {
				board[i][j] = Square(i, j, &pawnBlack);
			}
			else {
				board[i][j] = Square(i, j, &empty);
			}
		}
	}

	board[0][0] = Square(0, 0, &rookBlack);
	board[0][1] = Square(0, 1, &knightBlack);
	board[0][2] = Square(0, 2, &bishopBlack);
	board[0][3] = Square(0, 3, &queenBlack);
	board[0][4] = Square(0, 4, &kingBlack);
	board[0][5] = Square(0, 5, &bishopBlack);
	board[0][6] = Square(0, 6, &knightBlack);
	board[0][7] = Square(0, 7, &rookBlack);

	board[7][0] = Square(7, 7, &rookWhite);
	board[7][1] = Square(7, 1, &knightWhite);
	board[7][2] = Square(7, 2, &bishopWhite);
	board[7][3] = Square(7, 3, &queenWhite);
	board[7][4] = Square(7, 4, &kingWhite);
	board[7][5] = Square(7, 5, &bishopWhite);
	board[7][6] = Square(7, 6, &knightWhite);
	board[7][7] = Square(7, 7, &rookWhite);
}

void Board::describeBoard()
{
	std::cout << "  ---------------------------------" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << (8 - i) << std::string(" ");
		for (int j = 0; j < 8; j++) {
			std::cout << "| ";
			Piece& piece = board[i][j].getPiece();
			piece.describePiece();
			std::cout << std::string(" ");
		}
		std::cout << "|" << std::endl;
		std::cout << "  ---------------------------------" << std::endl;
	}
	std::cout << "    a   b   c   d   e   f   g   h" << std::endl;
}

Square& Board::getSquareForPosition(Position position)
{
	return board[position.iRow][position.iColumn];
}

void Board::movePiece(Position currentPosition, Position intendedPosition)
{
	Square& currentSquare = getSquareForPosition(currentPosition);
	Piece& currentSquarePiece = currentSquare.getPiece();
	Square& intendedSquare = board[intendedPosition.iRow][intendedPosition.iColumn];

	intendedSquare.setPiece(currentSquarePiece);
	currentSquare.setPiece(empty);
}