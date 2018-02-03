#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	if (i == 0)
			return (size + ft_strlen(src));
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
			dst[i + j] = src[j];
			j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + size);
}
