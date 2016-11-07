#include "mario.hpp"
#include <iostream>

void Mario::print(){
	std::cout<< "*******Hello from Mario**********" << std::endl;
}

Mario::Mario(std::string path){
	std::cout << "Mario created" << path << std::endl;
	this->texture = new sf::Texture();
	texture->loadFromFile(path);
	if(!texture){
		std::cout<< "Error loading texture" <<std::endl;
		return;
	} 	

	this->sprite = new sf::Sprite();
	//this->sprite->setTexture(this->texture);
}

void Mario::draw(const sf::RenderWindow window){
//	if(this->sprite)
//	window.draw(*this->sprite);
}

