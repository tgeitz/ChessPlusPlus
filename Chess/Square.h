#pragma once
#include "Piece.h"
#include "PieceEmpty.h"

class Square
{
private:
	int iColumn = 0;
	int iRow = 0;
	PieceEmpty emptyPiece = PieceEmpty();
	Piece* m_piece = &emptyPiece;

public:
	Square(int x, int y, Piece* piece) : iColumn(x), iRow(y), m_piece(piece)
	{}
	Square() : iColumn(0), iRow(0), m_piece(&emptyPiece)
	{}

	void setPiece(Piece& piece);

	Piece& getPiece();	
};