#pragma once
#include "WaterResevoir.h"
#include "InternalResevoir.h"
#include "Hopper.h"
#include "Grinder.h"
class CoffeeMaker {
	WaterResevoir m_resevoir;
	InternalResevoir m_internalResevoir;
	Hopper m_beanHopper;
	Hopper m_groundsHopper;
	Grinder m_grinder;
	void print(int message);
	int  m_makeCoffee(int cupCount);

public:
	void makeCoffee(int cupCount)
	{
		int message = m_makeCoffee(cupCount);
		print(message);
		

	}
};

inline void CoffeeMaker::print(int message)
{
	std::cout << "Cups Made: ";
	std::cout <<  message << std::endl;
}

inline int CoffeeMaker::m_makeCoffee(int cupCount)
{
	int oz_count = cupCount * 6;
	int bean_count = cupCount * 40;
	int coffee_made = 0;
	Beans newBean;
	newBean.setWuantity(bean_count);

	m_resevoir.FillResevoir(oz_count);

	m_internalResevoir.setTemperature(205);
	
	m_beanHopper.fill(&newBean);

	Grounds newGrounds = m_grinder.grind(&newBean);
	
	m_groundsHopper.fill(&newGrounds);
	for (int i = 0; i < cupCount; i++)
	{
		newGrounds.setWuantity(newGrounds.getQuantity() - 20);
		coffee_made++;
		
	}
	
	return coffee_made;


}
