#pragma once
#include "Grounds.h"
#include "Beans.h"

class Grinder {
public:
	Grounds grind(Beans * beans);
};

inline Grounds Grinder::grind(Beans* beans)
{
	Grounds newGrounds;
	int ground_tracker = 0;
	while (beans->getQuantity() != 0)
	{
		for (int i = 0; i < 20; i++)
		{
			beans->setWuantity(beans->getQuantity()-1);

			if (i == 19)
			{
				ground_tracker++;
				newGrounds.setWuantity(ground_tracker);
			}
		}
	}
	return newGrounds;
	
}
