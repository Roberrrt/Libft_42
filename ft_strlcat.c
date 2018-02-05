#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size <= ft_strlen(dst))
			return (size + ft_strlen(src));
	j = 0;
	i = 0;
	while (dst[i] != '\0' && i < size - 1)
			i++;
	while (i < size - 1 && src[j] != '\0')
	{
			dst[i] = *src;
			i++;
			src++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
