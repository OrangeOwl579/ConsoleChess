#include <iostream>
#include "board.h"

int main() {

    std::string input;

    // Create a Board object
    Board board = Board();

    // Print the board onto the screen
    board.printBoard();

    // Enter a move
    std::cout << "Enter a move: " << std::endl;
    std::cin >> input;

    board.checkMove(input);
    return 0;
}