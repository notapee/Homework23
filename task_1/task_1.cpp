#include <iostream>
#include <string>

#define DAY1 "�����������"
#define DAY2 "�������"
#define DAY3 "�����"
#define DAY4 "�������"
#define DAY5 "�������"
#define DAY6 "�������"
#define DAY7 "�����������"


#define CHECK(n) ((n) == 1 ? DAY1 : \
                  (n) == 2 ? DAY2 : \
                  (n) == 3 ? DAY3 : \
                  (n) == 4 ? DAY4 : \
                  (n) == 5 ? DAY5 : \
                  (n) == 6 ? DAY6 : \
                  (n) == 7 ? DAY7 : "Error")


int main() 
{
	int dayWeek;
	std::cout << "Input: ";
	std::cin >> dayWeek;

	if (dayWeek < 1 || dayWeek > 7)
	{
		std::cout << "Error";
	}

	std::cout << CHECK(dayWeek);
}