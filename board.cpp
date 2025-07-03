//
// Created by blueoranges on 6/25/25.
//

#include "board.h"
#include <iostream>

// Function that prints the board onto the console
void Board::printBoard(){

    std::cout << std::endl;
    std::cout <<"Chess Board:" << std::endl << std::endl;
    std::cout << "    A   B   C   D   E   F   G   H" << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << i + 1;
        for (int j = 0; j < 8; j++) {
            std::cout << " | ";
            std::cout << "" << board[i][j];
        }
        std::cout << " | " << std::endl << std::endl;
    }
    std::cout << std::endl;
}

// Check moves
void Board::checkMove(std::string move){

}
