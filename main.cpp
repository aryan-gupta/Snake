/* 
 * Copyright (c) 2017 The Gupta Empire - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 *
 * Written by Aryan Gupta <me@theguptaempire.net>
 * 
 * =============================================================================
 * @author 			Aryan Gupta
 * @project 		
 * @title 			
 * @date			(YYYY-MM-DD)
 * @fversion		1.0.0
 * @description 	
 * =============================================================================
 */
#include "info.h"
#define PRINT_LEGAL_TERR std::cout << '\n' << R_PROJNAME << " v" << R_PVERSION \
		<< " by " << R_AUTHOR << '\n' << R_COPYRIGHT << '\n' << R_COMMENTS \
		<< "\n\n\n" // Legal and Informational


#include <iostream>
#include <ctime>

#include "main.h"
#include "Game.h"

Game* gSnakeGame;

int main(int argc, char* argv[]) {
	PRINT_LEGAL_TERR;
	srand(time(0));
	
	gSnakeGame = new Game();
	
	while(true) {
		gSnakeGame->loop();
	}
	
	return 0;
}

bool Coordinate::operator==(Coordinate b) {
	return b.x == x && b.y == y;
}