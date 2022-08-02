#include "Board.h"
#include "Square.h"
#include "Piece.h"
#include "Pawn.h"
#include "Empty.h"
#include <iostream>

void Board::resetBoard()
{
	setInitialBoard();
}

void Board::setInitialBoard()
{
	Pawn pawnWhite = Pawn(PieceColor::WHITE);
	Piece* pawnWhitePiece = &pawnWhite;
	//Piece* pawnWhite = &Pawn(PieceColor::WHITE);
	Empty empty = Empty();
	Piece* emptyPiece = &empty;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == 6) {
				board[i][j] = Square(i, j, pawnWhitePiece);
			}
			else if (j == 1) {
				board[i][j] = Square(i, j, pawnWhitePiece);
			}
			else {
				board[i][j] = Square(i, j, emptyPiece);
			}
		}
	}
}

void Board::movePiece(Position currentPosition, Position intendedPosition)
{
	std::cout << "a2 space:";
	Piece& p1 = board[0][6].getPiece();
	p1.describePiece();
	//board[0][6].getPiece().describePiece();
	std::cout << "a3 space:";
	Piece& p2 = board[0][5].getPiece();
	p2.describePiece();
	//board[0][5].getPiece().describePiece();
	Square& currentSquare = board[currentPosition.iRow][currentPosition.iColumn];
	Piece& currentSquarePiece = currentSquare.getPiece();
	std::cout << "currentSquarePiece: ";
	currentSquarePiece.describePiece();
	Square& intendedSquare = board[intendedPosition.iRow][intendedPosition.iColumn];

	intendedSquare.setPiece(currentSquarePiece);
	Empty empty = Empty();
	Piece& emptyPiece = empty;
	currentSquare.setPiece(emptyPiece);

	std::cout << "a2 space:";
	board[0][6].getPiece().describePiece();
	std::cout << "a3 space:";
	board[0][5].getPiece().describePiece();
}