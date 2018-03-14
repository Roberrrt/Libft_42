/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:59:29 by rcraciun          #+#    #+#             */
/*   Updated: 2018/02/19 15:38:18 by rcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (n == 0)
		return (s);
	p = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
