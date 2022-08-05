#pragma once
#include "Piece.h"
#include <iostream>

class PieceKing : public Piece
{
private:
	PieceType m_type = PieceType::KING;
	PieceColor m_color;
public:
	PieceKing(PieceColor color) : m_color(color)
	{}

	void describePiece()
	{
		std::cout << (m_color == PieceColor::WHITE ? "K" : "k") << std::endl;
	}
};