#pragma once
#include "Piece.h"
#include "Empty.h"
#include <optional>

class Square
{
private:
	int iColumn = 0;
	int iRow = 0;
	Empty emptyPiece = Empty();
	Piece* m_piece = &emptyPiece;

public:
	Square(int x, int y, Piece* piece) : iColumn(x), iRow(y), m_piece(piece)
	{}
	Square() : iColumn(0), iRow(0), m_piece(&emptyPiece)
	{}

	void setPiece(Piece& piece) {
		/*std::cout << "setting " << iColumn << "," << iRow << " space to: ";
		getPiece().describePiece();*/
		m_piece = &piece;
	}

	Piece& getPiece() {
		return *m_piece;
	}
	
	
};