#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		count;

	count = 0;
	while ((unsigned int)n / 10)
		count++;
	if	(n <= 0 && n >= -2147483648)
	{
		n = n * - 1; 
		res = "-";
	}	
	
}
