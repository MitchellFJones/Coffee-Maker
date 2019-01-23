#pragma once
#include "Ingredient.h"
class Hopper {
private:
	Ingredient * m_ingredient;
public:
	void fill(Ingredient * ingredient);
	Ingredient getIngredient();
};

inline void Hopper::fill(Ingredient* ingredient)
{
	m_ingredient = ingredient;
	

}

inline Ingredient Hopper::getIngredient()
{
	
}
