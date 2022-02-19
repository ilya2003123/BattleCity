#include "Tank.h"


//void Tank::setTexture(sf::Texture& newTexture)
//{
//	newTexture.loadFromFile("C:\\JavaBook\\txt\\white.png");
//	m_texture = newTexture;
//	m_sprite.setTexture(m_texture);
//}

void Tank::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_sprite, states);
}


void Tank::update(/*float time*/)
{
	switch (m_control)
	{
	case 0:
		m_vx = -m_speed;
		m_vy = 0;
		break;
	case 1:
		m_vx = m_speed;
		m_vy = 0;
		break;
	case 2:
		m_vx = 0;
		m_vy = -m_speed;
		break;
	case 3:
		m_vx = 0;
		m_vy = m_speed;
		break;
	}

	m_x += m_vx; /* * time*/
	m_y += m_vy; /* * time*/
	m_speed = 0;
	m_sprite.move(m_vx, m_vy);
	//m_sprite.move(m_x, m_y); // Battle City version 2.0
}



void Tank::tankControl()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->m_control = 0;
		this->m_speed = 0.5f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->m_control = 1;
		this->m_speed = 0.5f;
	}	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		this->m_control = 2;
		this->m_speed = 0.5f;
	}	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		this->m_control = 3;
		this->m_speed = 0.5f;
	}
}

int Tank::getControl() {
	return m_control;
}

int Tank::getSpeed() {
	return m_speed;
}