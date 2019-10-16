/*
 * MainMenu.h
 *
 *  Created on: Oct 12, 2019
 *      Author: xni
 */

#ifndef STATES_HAVOCOS_H_
#define STATES_HAVOCOS_H_

#include "../GameStateManager.h"
#include "../GameState.h"
#include <SFML/Graphics.hpp>

class HavocOS : public GameState {
private:
	sf::Font font;
	sf::Text text;
	sf::Glyph glyph;
public:
	HavocOS(GameStateManager &pGsm);
	void draw() override;
	void update(float pDelta) override;
};

#endif /* STATES_HAVOCOS_H_ */
