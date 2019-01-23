// CppOneFinal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CoffeeMaker.h"


int main()
{
	bool keep_making = true;
	while (keep_making == true)
	{
		CoffeeMaker newCoffee;
		int user_input;
		std::cout << "How many cups of coffee would you like to make?" << std::endl;
		std::cin >> user_input;
		newCoffee.makeCoffee(user_input);
		std::cout << "Would you like to make more? y/n";
		char make_more;
		std::cin >> make_more;
			if(make_more == 'y')
			{
				keep_making = true;
			}
			else
			{
				keep_making = false;
			}
	}
    return 0;
}

