#include "mario.hpp"
#include <iostream>

void Mario::print(){
	std::cout<< "*******Hello from Mario**********" << std::endl;
}

Mario::Mario(const std::string &path){
	std::cout << "Mario created" << path << std::endl;
	texture = new sf::Texture();
	texture->loadFromFile(path);
	if(!texture){
		std::cout<< "Error loading texture" <<std::endl;
		return;
	} 	

	this->sprite = new sf::Sprite();
	std::cout<<"setting texture " << texture << std::endl;
	this->sprite->setTexture(*texture);
}

void Mario::draw(sf::RenderWindow *window){
	
//	if(this->sprite)
	window->draw(*sprite);
}

