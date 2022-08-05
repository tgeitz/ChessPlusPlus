#pragma once
#include "Square.h"
#include "Piece.h"
#include "PiecePawn.h"
#include "PieceEmpty.h"
#include <iostream>


class Board
{
private:
	Square board[8][8];
	PiecePawn pawnWhite = PiecePawn(PieceColor::WHITE);
	PiecePawn pawnBlack = PiecePawn(PieceColor::BLACK);
	PieceEmpty empty = PieceEmpty();

public:
	struct Position
	{
		int iRow;
		int iColumn;
	};

	void resetBoard();
	void setInitialBoard();

	void movePiece(Position currentPosition, Position intendedPosition);
};