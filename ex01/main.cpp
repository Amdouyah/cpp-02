#include "Fixed.hpp"

int	ft_iterative_power(int nb, int power)
{
	int	i = 1, res = 1;
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		while (i <= power)
		{
			res = res * nb;
			i++;
		}
	}
	else
		return (1);
	return (res);
}

int main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;	
}