#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int nb;
	
	sign = 0;
	nb = 0;
	
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	if (sign == 1)
		return (-nb);
	else
		return (nb);
}
