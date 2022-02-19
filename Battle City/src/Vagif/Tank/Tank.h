#pragma once
#include "../ISprite/ISprite.h"

class Tank :public ISprite
{
private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;

public:
	Tank() = default;

	//Tank(sf::Texture texture)
	//{
	//	sf::Sprite sprite(texture);
	//}

	void setTexture(sf::Texture& texture);


	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	virtual ~Tank() = default;

};