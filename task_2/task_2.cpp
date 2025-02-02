#include <iostream>


#define WINTER "Зима"



int main()
{
#if defined(WINTER)
	std::cout << WINTER;
#elif defined(SUMMER)
	std::cout << SUMMER;
#elif defined(AUTUMN)
	std::cout << AUTUMN
#else 
	std::cout << SPRING

#endif

}
