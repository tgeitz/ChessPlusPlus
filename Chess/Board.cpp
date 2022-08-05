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
			if (j == 6) {
				board[i][j] = Square(i, j, &pawnWhite);
			}
			else if (j == 1) {
				board[i][j] = Square(i, j, &pawnBlack);
			}
			else {
				board[i][j] = Square(i, j, &empty);
			}
		}
	}

	board[0][0] = Square(0, 0, &rookBlack);
	board[1][0] = Square(1, 0, &knightBlack);
	board[2][0] = Square(2, 0, &bishopBlack);
	board[3][0] = Square(3, 0, &queenBlack);
	board[4][0] = Square(4, 0, &kingBlack);
	board[5][0] = Square(5, 0, &bishopBlack);
	board[6][0] = Square(6, 0, &knightBlack);
	board[7][0] = Square(7, 0, &rookBlack);

	board[0][7] = Square(0, 7, &rookWhite);
	board[1][7] = Square(1, 7, &knightWhite);
	board[2][7] = Square(2, 7, &bishopWhite);
	board[3][7] = Square(3, 7, &queenWhite);
	board[4][7] = Square(4, 7, &kingWhite);
	board[5][7] = Square(5, 7, &bishopWhite);
	board[6][7] = Square(6, 7, &knightWhite);
	board[7][7] = Square(7, 7, &rookWhite);
}

void Board::movePiece(Position currentPosition, Position intendedPosition)
{
	std::cout << "a2 space:";
	Piece& p1 = board[0][6].getPiece();
	p1.describePiece();
	std::cout << "a3 space:";
	Piece& p2 = board[0][5].getPiece();
	p2.describePiece();
	Square& currentSquare = board[currentPosition.iRow][currentPosition.iColumn];
	Piece& currentSquarePiece = currentSquare.getPiece();
	std::cout << "currentSquarePiece: ";
	currentSquarePiece.describePiece();
	Square& intendedSquare = board[intendedPosition.iRow][intendedPosition.iColumn];

	intendedSquare.setPiece(currentSquarePiece);
	currentSquare.setPiece(empty);

	std::cout << "a2 space:";
	board[0][6].getPiece().describePiece();
	std::cout << "a3 space:";
	board[0][5].getPiece().describePiece();
}