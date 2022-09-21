#pragma once
#include "Square.h"
#include "Piece.h"
#include "PiecePawn.h"
#include "PieceRook.h"
#include "PieceKnight.h"
#include "PieceBishop.h"
#include "PieceQueen.h"
#include "PieceKing.h"
#include "PieceEmpty.h"
#include <iostream>


class Board
{
private:
	Square board[8][8];
	PiecePawn pawnWhite = PiecePawn(PieceColor::WHITE);
	PiecePawn pawnBlack = PiecePawn(PieceColor::BLACK);
	PieceRook rookWhite = PieceRook(PieceColor::WHITE);
	PieceRook rookBlack = PieceRook(PieceColor::BLACK);
	PieceKnight knightWhite = PieceKnight(PieceColor::WHITE);
	PieceKnight knightBlack = PieceKnight(PieceColor::BLACK);
	PieceBishop bishopWhite = PieceBishop(PieceColor::WHITE);
	PieceBishop bishopBlack = PieceBishop(PieceColor::BLACK);
	PieceQueen queenWhite = PieceQueen(PieceColor::WHITE);
	PieceQueen queenBlack = PieceQueen(PieceColor::BLACK);
	PieceKing kingWhite = PieceKing(PieceColor::WHITE);
	PieceKing kingBlack = PieceKing(PieceColor::BLACK);
	PieceEmpty empty = PieceEmpty();

public:
	struct Position
	{
		int iRow;
		int iColumn;
	};

	void resetBoard();
	void setInitialBoard();

	void describeBoard();

	Square& getSquareForPosition(Position position);
	void movePiece(Position currentPosition, Position intendedPosition);
};