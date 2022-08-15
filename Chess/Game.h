#pragma once
#include "Board.h"
#include "Square.h"
#include "Piece.h"
#include <vector>

class Game
{
public:
	bool gameIsActive = true;
	enum class PlayerColor
	{
		WHITE = 0,
		BLACK = 1,
	};

	struct Move
	{
		PlayerColor color;
		Board& startingBoard;
		Board::Position startingPosition;
		Board::Position intendedPosition;
	};

	Board initialBoard = Board();
	Board* currentBoard = &initialBoard;

	int getTurnNumber();
	PlayerColor getTurnColor();
	void endGame();

private:
	std::vector<Move> moveHistory;
	
};