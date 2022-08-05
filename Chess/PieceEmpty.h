#pragma once
#include "Piece.h"
#include <iostream>

class PieceEmpty : public Piece
{
private:
	PieceType m_type = PieceType::EMPTY;
	PieceColor m_color = PieceColor::EMPTY;

public:
	void describePiece()
	{
		std::cout << std::string("") << std::endl;
	}
};
