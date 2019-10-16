/*
 * InputHandler.cpp
 *
 *  Created on: Oct 10, 2019
 *      Author: xni
 */

#include "InputHandler.h"
#include <SFML/Graphics.hpp>

InputHandler::InputHandler(sf::RenderWindow &pWindow) : window(pWindow) {}

bool InputHandler::update() {
	return window.pollEvent(event);
}

bool InputHandler::textTyped(std::string &string) {
	if (event.type == sf::Event::TextEntered) {
		string.push_back(static_cast<char>(event.text.unicode));
		return true;
	}
	return false;
}

sf::Event InputHandler::getEvent() { return event; };
