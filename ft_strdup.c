/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:03:08 by rcraciun          #+#    #+#             */
/*   Updated: 2018/02/19 15:59:33 by rcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
