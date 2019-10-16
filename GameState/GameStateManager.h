/*
 * GameStateManager.h
 *
 *  Created on: Oct 6, 2019
 *      Author: xni
 */

#ifndef GAMESTATEMANAGER_H_
#define GAMESTATEMANAGER_H_

#include <SFML/Graphics.hpp>
#include <stack>

#include "GameState.h"
#include "../InputHandler/InputHandler.h"

class GameState;
class GameStateManager final {
	std::stack<GameState*> gameStates;
public:
	sf::RenderWindow &renderWindow;
	InputHandler &inputHandler;

	GameStateManager(sf::RenderWindow &pWindows, InputHandler &inputHandler);
	void push(GameState *pGameState);
	void pop();
	void set(GameState *pGameState);
	void clear();
	void draw();
	void resume();
	void pause();
	void update(float pDelta);
	~GameStateManager();
};


#endif /* GAMESTATEMANAGER_H_ */
