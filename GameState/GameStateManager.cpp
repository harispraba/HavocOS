/*
 * GameStateManager.cpp
 *
 *  Created on: Oct 6, 2019
 *      Author: xni
 */

#include "GameStateManager.h"

#include <SFML/Graphics.hpp>

#include "GameState.h"

GameStateManager::GameStateManager(sf::RenderWindow &pWindow, InputHandler &pInputHandler)
	: renderWindow(pWindow), inputHandler(pInputHandler) {}

void GameStateManager::push(GameState *pGameState) {
	gameStates.push(pGameState);
}

void GameStateManager::pop() {
	gameStates.top()->dispose();
	delete gameStates.top();
	gameStates.pop();
}

void GameStateManager::set(GameState *pGameState) {
	if (!gameStates.empty()) {
		pop();
	}
	gameStates.push(pGameState);
}

void GameStateManager::clear() {
	while (!gameStates.empty()) {
		pop();
	}
}

void GameStateManager::draw() {
	gameStates.top()->draw();
}

void GameStateManager::update(float pDelta) {
	gameStates.top()->update(pDelta);
}

void GameStateManager::pause() {
	gameStates.top()->pause();
}

void GameStateManager::resume() {
	gameStates.top()->resume();
}

GameStateManager::~GameStateManager() {
	clear();
}
