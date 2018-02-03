#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s;

    d = (char*)dest;
    s = (char*)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        if (d[i] == c)
            return (d);
        i++;
    }
    return (0);
}
