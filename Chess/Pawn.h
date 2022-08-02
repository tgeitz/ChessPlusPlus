#pragma once
#include "Piece.h"
#include <iostream>


class Pawn : public Piece
{
private:
	PieceType m_type = PieceType::PAWN;
	PieceColor m_color;
public:
	Pawn(PieceColor color) : m_color(color)
	{}

	//bool isPotentialMove(int currentRow, int currentColumn, int intendedRow, int intendedColumn);
	bool isPotentialMove(int currentRow, int currentColumn, int intendedRow, int intendedColumn)
	{
		/*if (intendedRow == currentRow - 1) {
			return true;
		}
		return false;*/
		return true;
	}

	void describePiece()
	{
		std::cout << "pawn" << std::endl;
	}
};