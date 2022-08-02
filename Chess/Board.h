#pragma once
#include "Square.h"
#include "Piece.h"
#include "Pawn.h"
#include "Empty.h"
#include <iostream>


class Board
{
private:
	Square board[8][8];

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