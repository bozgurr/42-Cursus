#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		index;
	int		sign;
	char	*result;

	sign = 1;
	index = 0;
	if (!n)
		write(fd, "0", 1);
	if (n < 0)
	{
		sign = -1;
		write (fd, "-", 1);
		index++;
	}
	while (n)
	{
		result[index++] = n % 10 * sign + '0';
		n /= 10;
	}
	while (*result != 0)
	{
		write(fd, &result[index--], 1);
	}
}
