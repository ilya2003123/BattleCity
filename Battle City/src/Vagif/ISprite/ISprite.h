#include "SFML/Graphics.hpp"

class ISprite :public sf::Transformable, public sf::Drawable
{
public:
	ISprite() = default;
	virtual ~ISprite() = default;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override {};
};