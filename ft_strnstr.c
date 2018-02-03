#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
		size_t	len_lit;
		
		if (*little == '\0')
				return ((char *)big);
		len_lit = ft_strlen(little);
		while (*big && len-- >= len_lit)
		{
				if (*big == *little && ft_memcmp(big, little, len_lit) == 0)
						return ((char *)big);
				big++;
		}
		return (NULL);
}
