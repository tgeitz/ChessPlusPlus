#pragma once

enum class PieceColor
{
	WHITE = 0,
	BLACK = 1,
	EMPTY = -1
};
enum class PieceType : char
{
	PAWN = 'p',
	ROOK = 'r',
	KNIGHT = 'n',
	BISHOP = 'b',
	QUEEN = 'q',
	KING = 'k',
	EMPTY = 0x20
};

class Piece
{
public:

	PieceColor color;
	PieceType type;

	//bool canCastle = false;
	//bool canBeCapturedEnPassant = false;

	virtual bool isPotentialMove(int currentRow, int currentColumn, int intendedRow, int intendedColumn) = 0;
	
	virtual void describePiece() = 0;
};
