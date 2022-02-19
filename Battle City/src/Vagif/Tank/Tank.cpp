#include "Tank.h"

void Tank::setTexture(sf::Texture& newTexture)
{
	newTexture.loadFromFile("C:\\JavaBook\\txt\\white.png");
	m_texture = newTexture;
	m_sprite.setTexture(m_texture);
}

void Tank::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_sprite, states);
}