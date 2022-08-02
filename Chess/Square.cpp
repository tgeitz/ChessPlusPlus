#include "Square.h"

void Square::setPiece(Piece& piece) {
	m_piece = &piece;
}

Piece& Square::getPiece() {
	return *m_piece;
}