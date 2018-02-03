#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
		char	*new;
		size_t	i;

		if (!s)
				return (NULL);
		new = ft_strnew(len);
		if (!new)
				return (NULL);
		i = 0;
		while (i < len)
		{
				new[i] = s[start + i];
				i++;
		}
		return (new);
}
