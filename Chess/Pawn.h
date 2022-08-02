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

	void describePiece()
	{
		std::cout << "pawn" << std::endl;
	}
};