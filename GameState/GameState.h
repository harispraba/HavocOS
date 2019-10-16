/*
 * GameState.h
 *
 *  Created on: Oct 6, 2019
 *      Author: xni
 */

#ifndef GAMESTATE_H_
#define GAMESTATE_H_

#include "GameStateManager.h"

class GameStateManager;
class GameState {
protected:
	GameStateManager &gsm;
public:
	GameState(GameStateManager &pGsm);
	virtual void draw() = 0;
	virtual void update(float pDelta) = 0;
	virtual void pause();
	virtual void resume();
	virtual void dispose();
	virtual ~GameState();
};

#endif /* GAMESTATE_H_ */
