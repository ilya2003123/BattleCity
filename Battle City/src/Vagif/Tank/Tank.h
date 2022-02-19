#pragma once
#include "../ISprite/ISprite.h"

class Tank :public ISprite
{
private:
	const float SPEED = 2.f;
private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
private:
	float m_x, m_y;
	float m_w, m_h;
	float m_vx, m_vy;
	float m_speed = 0;
	int m_control = 0;
public:
	Tank() = default;
	virtual ~Tank() = default;

	Tank(float x, float y, float w, float h) {
		this->m_x = x;
		this->m_y = y;
		this->m_w = w;
		this->m_h = h;
		m_texture.loadFromFile("C:\\JavaBook\\txt\\texture.png");
		m_sprite.setTexture(m_texture);
		m_sprite.setTextureRect(sf::IntRect(0, 0, m_w, m_h));
		m_sprite.setPosition(m_x, m_y);
	}

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;


	//+-
	virtual	void update(/*float time*/);
	virtual void tankControl();


	// Getter
	int getControl();
	int getSpeed();

	// Setter

};