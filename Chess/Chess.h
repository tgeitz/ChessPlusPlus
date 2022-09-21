#pragma once
#include "Game.h"

class Chess
{
public:
	bool isValidMove(Game game, Game::Move move);

private:
	bool isBlocked(Game game, Game::Move move);
};