#pragma once
#include "Piece.h"
#include <iostream>

class PiecePawn : public Piece
{
private:
	PieceType m_type = PieceType::PAWN;
	PieceColor m_color;
public:
	PiecePawn(PieceColor color) : m_color(color)
	{}

	void describePiece()
	{
		std::cout << (m_color == PieceColor::WHITE ? "P" : "p") << std::endl;
	}
};