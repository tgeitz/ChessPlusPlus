#pragma once
#include "Piece.h"

class Empty : public Piece
{
private:
	PieceType m_type = PieceType::EMPTY;
	PieceColor m_color = PieceColor::EMPTY;

public:
	bool isPotentialMove(int currentRow, int currentColumn, int intendedRow, int intendedColumn)
	{
		return false;
	}

	void describePiece()
	{
		std::cout << "empty" << std::endl;
	}
};
