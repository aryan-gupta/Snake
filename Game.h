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

#pragma once

class Window;
class Snake;
class Fruit;

class Game {
public:
	Game();
	~Game();
	
	void loop();
	
private:
	Window* window;
	
	Snake* snake;
	Fruit* fruit;
	
	void renderAll();
	bool win();
	
};