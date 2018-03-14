/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:03:54 by rcraciun          #+#    #+#             */
/*   Updated: 2018/02/19 16:03:25 by rcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
