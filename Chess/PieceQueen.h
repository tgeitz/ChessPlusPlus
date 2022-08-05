#pragma once
#include "Piece.h"
#include <iostream>

class PieceQueen : public Piece
{
private:
	PieceType m_type = PieceType::QUEEN;
	PieceColor m_color;
public:
	PieceQueen(PieceColor color) : m_color(color)
	{}

	void describePiece()
	{
		std::cout << (m_color == PieceColor::WHITE ? "Q" : "q");
	}
};