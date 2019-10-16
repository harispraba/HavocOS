/*
 * InputHandler.h
 *
 *  Created on: Oct 10, 2019
 *      Author: xni
 */

#ifndef INPUTHANDLER_INPUTHANDLER_H_
#define INPUTHANDLER_INPUTHANDLER_H_

#include <SFML/Graphics.hpp>

class InputHandler final {
private:
	sf::RenderWindow &window;
	sf::Event event;

public:
	InputHandler(sf::RenderWindow &pWindow);
	bool update();
	bool textTyped(std::string &string);
	sf::Event getEvent();
};

#endif /* INPUTHANDLER_INPUTHANDLER_H_ */
