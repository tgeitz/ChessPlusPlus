#pragma once
#include "Piece.h"
#include <iostream>

class PieceRook : public Piece
{
private:
	PieceType m_type = PieceType::ROOK;
	PieceColor m_color;
public:
	PieceRook(PieceColor color) : m_color(color)
	{}

	void describePiece()
	{
		std::cout << (m_color == PieceColor::WHITE ? "R" : "r");
	}
};