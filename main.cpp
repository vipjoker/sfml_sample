#include <SFML/Graphics.hpp>
#include"mario.hpp"
#include <iostream>

const int LIVES = 5;

using namespace sf;

Texture *initTexture(const std::string &path);
int main (){

	Mario *m= new Mario("images/mario.png");
	m->print();
	std::cout << "Mario lives " << MARIO_LIVES << std::endl;
	RenderWindow window (VideoMode(800,640),"SFML window");
	CircleShape shape(200.0f);
	Texture *texture = initTexture("images/background.png");
//	Texture *marioTex = initTexture("images/mario.png");
	if(texture == NULL )
	{
		std::cout<< "ERROR OCURED" << std::endl;		
	}
//	marioTex->setSmooth(true);
	texture->setSmooth(true);
	Sprite sprite;
	sprite.setTexture(*texture);
	

	Sprite marioSprite;
//	marioSprite.setTexture(*marioTex);
	
	//sprite.setColor(Color(255,255,255,200));
	//sprite.setPosition(Vector2f(10,10));
	//sprite.move(Vector2f(40,40));
	//sprite.rotate(15);
	shape.setFillColor(Color::Green);
	while(window.isOpen()){
		if(Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}	
		if(Keyboard::isKeyPressed(Keyboard::Down))
		{
//			marioSprite.move(Vector2f(0,-1));
		}
		if(Keyboard::isKeyPressed(Keyboard::Up))
		{	
//			marioSprite.move(Vector2f(0,1));	
		}
		if(Keyboard::isKeyPressed(Keyboard::Left))
		{
//			marioSprite.move(Vector2f(-1,0));
		}
		if(Keyboard::isKeyPressed(Keyboard::Right))
		{
//			marioSprite.move(Vector2f(1,0));
		}
		window.clear();
		
		window.draw(shape);
		window.draw(sprite);
//		window.draw(marioSprite);
		window.display();
	}
	return 0;
} 


Texture *initTexture(const std::string &path){
	Texture *t = new Texture();
	t->loadFromFile(path);
	return t;
	if(t)return t;
	else return NULL;
}	
