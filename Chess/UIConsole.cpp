#include "UIConsole.h"
#include <algorithm>

UIConsole::CommandType UIConsole::parseInput(string input) {
	
	if (find(begin(UIConsole::newGame.inputs), end(UIConsole::newGame.inputs), input) != end(UIConsole::newGame.inputs)) {
		cout << "Starting new game!" << endl;
		return UIConsole::CommandType::NEW_GAME;
	}
	if (find(begin(UIConsole::help.inputs), end(UIConsole::help.inputs), input) != end(UIConsole::help.inputs)) {
		listCommands();
		return UIConsole::CommandType::HELP;
	}
	if (find(begin(UIConsole::exit.inputs), end(UIConsole::exit.inputs), input) != end(UIConsole::exit.inputs)) {
		cout << "Goodbye!" << endl;
		return UIConsole::CommandType::EXIT;
	}


}

void UIConsole::listCommands() {
	cout << "List of commands: " << endl;
	for_each(consoleCommands.begin(), consoleCommands.end(), [](ConsoleCommand command) {
		for_each(command.inputs.begin(), command.inputs.end(), [](string input) {
			cout << input << " ";
		});
		cout << ": " << command.description << endl;
	});
}