#pragma once
#include "Board.h"
#include "Square.h"
#include "Piece.h"
#include <vector>

class Game
{
public:
	enum class PlayerColor
	{
		WHITE = 0,
		BLACK = 1,
	};

	struct Move
	{
		PlayerColor color;
		Square startSquare;
		Square endSquare;
	};

	Board& currentBoard;

	int getTurnNumber();
	PlayerColor getTurnColor();

private:
	std::vector<Move> moveHistory;
	
};