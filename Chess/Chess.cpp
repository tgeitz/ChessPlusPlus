#include "Chess.h"
#include "Board.h"
#include "Piece.h"

bool Chess::isValidMove(Game game, Game::Move move) {
	Square& initialSquare = move.startingBoard.getSquareForPosition(move.startingPosition);
	Piece& piece = initialSquare.getPiece();

	if (piece.type == PieceType::EMPTY) {
		return false;
	}

	Square& targetSquare = move.startingBoard.getSquareForPosition(move.intendedPosition);
	Piece& targetPiece = targetSquare.getPiece();
	bool wouldCapture = targetPiece.type != PieceType::EMPTY && piece.type != targetPiece.type;

	if (
		move.intendedPosition.iColumn < 0 || move.intendedPosition.iColumn > 7
		|| move.intendedPosition.iRow < 0 || move.intendedPosition.iRow > 7
	) {
		return false;
	}

	int xDistance = move.startingPosition.iColumn - move.intendedPosition.iColumn;
	int yDistance = move.startingPosition.iRow - move.intendedPosition.iRow;

	if (piece.type == PieceType::PAWN) {
		if (
			abs(yDistance) > 2 || abs(yDistance < 1) // moving 0 or more than 2 vertically
			|| (abs(yDistance) == 2 && (move.startingPosition.iRow != 1 && move.startingPosition.iRow != 6)) // moving 2 when not on starting square
			|| ((abs(xDistance) == 1 && !wouldCapture) || abs(xDistance) > 1) // not moving 0 horizontally, or moving 1 when not capturing
		) {
			return false;
		}
	}
}