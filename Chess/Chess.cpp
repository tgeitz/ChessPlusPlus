#include "Chess.h"
#include "Board.h"
#include "Piece.h"

bool Chess::isValidMove(Game game, Game::Move move) {
	Square& initialSquare = move.startingBoard.getSquareForPosition(move.startingPosition);
	Piece& piece = initialSquare.getPiece();

	// trying to move an empty square
	if (piece.type == PieceType::EMPTY) {
		return false;
	}

	Square& targetSquare = move.startingBoard.getSquareForPosition(move.intendedPosition);
	Piece& targetPiece = targetSquare.getPiece();
	bool wouldCapture = targetPiece.type != PieceType::EMPTY && piece.type != targetPiece.type;

	if (
		// trying to move beyond bounds of the board
		move.intendedPosition.iColumn < 0 || move.intendedPosition.iColumn > 7
		|| move.intendedPosition.iRow < 0 || move.intendedPosition.iRow > 7
	) {
		return false;
	}

	int xDistance = move.startingPosition.iColumn - move.intendedPosition.iColumn;
	int yDistance = move.startingPosition.iRow - move.intendedPosition.iRow;

	if (piece.type == PieceType::PAWN) {
		int startingRow = piece.color == PieceColor::WHITE ? 6 : 1;
		if (
			// trying to move 0 or more than 2 vertically
			abs(yDistance) > 2 || abs(yDistance < 1)
			// trying to move 2 vertically when not on starting square
			|| (abs(yDistance) == 2 && move.startingPosition.iRow != startingRow)
			// pawn is trying to move backwards vertically with respect to its color
			|| ((piece.color == PieceColor::WHITE && yDistance < 0) || (piece.color == PieceColor::BLACK && yDistance > 0))
			// not moving 0 horizontally, or moving 1 horizontally when not capturing
			|| ((abs(xDistance) == 1 && !wouldCapture) || abs(xDistance) > 1)
		) {
			return false;
		}
	}
}