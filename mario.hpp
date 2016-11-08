
#include <SFML/Graphics.hpp>
#include <iostream>

const int MARIO_LIVES = 3;

class Mario{
	public :
	Mario(const std::string &path);
	int x;
	int y;
	sf::Texture *texture;	
	sf::Sprite *sprite;
	void print();
	void draw(sf::RenderWindow *window); 
};




