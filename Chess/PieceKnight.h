#pragma once
#include "Piece.h"
#include <iostream>

class PieceKnight : public Piece
{
private:
	PieceType m_type = PieceType::KNIGHT;
	PieceColor m_color;
public:
	PieceKnight(PieceColor color) : m_color(color)
	{}

	void describePiece()
	{
		std::cout << (m_color == PieceColor::WHITE ? "N" : "n") << std::endl;
	}
};