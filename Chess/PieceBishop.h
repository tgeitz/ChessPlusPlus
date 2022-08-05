#pragma once
#include "Piece.h"
#include <iostream>

class PieceBishop : public Piece
{
private:
	PieceType m_type = PieceType::BISHOP;
	PieceColor m_color;
public:
	PieceBishop(PieceColor color) : m_color(color)
	{}

	void describePiece()
	{
		std::cout << (m_color == PieceColor::WHITE ? "B" : "b") << std::endl;
	}
};