#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
		int len_nee;

		if (*needle == '\0')
				return ((char *)haystack);
		len_nee = ft_strlen(needle);
		while (*haystack)
		{
				if (*haystack == *needle && ft_memcmp(haystack, needle, len_nee) == 0)
						return ((char *)haystack);
				haystack++;
		}
		return (NULL);
}
