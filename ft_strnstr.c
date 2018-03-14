/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:05:32 by rcraciun          #+#    #+#             */
/*   Updated: 2018/02/19 18:12:02 by rcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	len_lit;

	if (*n == '\0')
		return ((char *)h);
	len_lit = ft_strlen(n);
	while (*h && len-- >= len_lit)
	{
		if (*h == *n && ft_memcmp(h, n, len_lit) == 0)
			return ((char *)h);
		h++;
	}
	return (NULL);
}
