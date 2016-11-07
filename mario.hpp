
#include <SFML/Graphics.hpp>
#include <iostream>

const int MARIO_LIVES = 3;

class Mario{
	public :
	Mario(std::string path);
	int x;
	int y;
	sf::Texture *texture;	
	sf::Sprite *sprite;
	void print();
	void draw(const sf::RenderWindow window); 
};




