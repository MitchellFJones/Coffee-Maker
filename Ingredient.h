#pragma once
class Ingredient {
	int m_quantity;
public:
	void setWuantity(int quantity)
	{
		m_quantity = quantity;
	}

	int getQuantity();
};

inline int Ingredient::getQuantity()
{
	return m_quantity;
}
