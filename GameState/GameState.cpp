/*
 * GameState.cpp
 *
 *  Created on: Oct 6, 2019
 *      Author: xni
 */

#include "GameState.h"

GameState::GameState(GameStateManager &pGsm) : gsm(pGsm) {}
void GameState::pause() {}
void GameState::resume() {}
void GameState::dispose() {}
GameState::~GameState() {}
