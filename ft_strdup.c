#include "libft.h"

char	*ft_strdup(const char *s)
{
		char	*s2;

		s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));	
		if (s2 == NULL)
				return (NULL);
		else
				return (ft_strcpy(s2, s));
}
