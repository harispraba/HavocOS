#include <SFML/Graphics.hpp>
#include <iostream>

#include "GameState/GameStateManager.h"
#include "GameState/GameState.h"
#include "GameState/States/HavocOS.h"

int main() {
	sf::Clock clock;
	sf::RenderWindow window(sf::VideoMode(800,800), "HavocOS");

	InputHandler inputHandler(window);
	GameStateManager gsm(window, inputHandler);

	gsm.push(new MainMenu(gsm));

	while (window.isOpen()) {
		sf::Time elapsed = clock.restart();

		if (inputHandler.update()) {
			sf::Event event = inputHandler.getEvent();
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::LostFocus) {
				gsm.pause();
			}
			if (event.type == sf::Event::GainedFocus) {
				gsm.resume();
			}
		}
		gsm.update(elapsed.asSeconds());

		window.clear(sf::Color::Black);
		gsm.draw();
		window.display();
	}

	return 0;
}
