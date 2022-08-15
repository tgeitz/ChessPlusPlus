#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class UIConsole
{
public:
	enum class CommandType {
		EXIT,
		HELP,
		NEW_GAME
	};
	
	struct ConsoleCommand {
		CommandType type;
		vector<string> inputs;
		string description;
	};

	const ConsoleCommand exit{ CommandType::EXIT, { "q", "Q", "exit", "quit" }, "Exit the program" };
	const ConsoleCommand help{ CommandType::HELP, { "help"}, "Display list of all commands"};
	const ConsoleCommand newGame { CommandType::NEW_GAME, { "new" }, "Start a new game"};

	vector<ConsoleCommand> consoleCommands{ 
		exit, 
		help, 
		newGame 
	};

	CommandType parseInput(string input);

	void listCommands();

};