/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:04:30 by rcraciun          #+#    #+#             */
/*   Updated: 2018/02/19 16:05:55 by rcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
