#include <iostream>

int main()
{
    std::string romans_num[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int n;
    std::cin>>n;
	std::string roman = "";
	for ( int i = 0; i < 13; ++i)
	{
		while (n - num[i] >= 0)
		{
			roman += romans_num[i];
			n -= num[i];
		}
	}
	std::cout<<roman<<std::endl;

	return 0;
}
