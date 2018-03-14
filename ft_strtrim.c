/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:06:25 by rcraciun          #+#    #+#             */
/*   Updated: 2018/02/19 16:22:17 by rcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const *s_end;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (!*s)
		return (ft_strnew(0));
	s_end = s + ft_strlen(s) - 1;
	while (*s_end == ' ' || *s_end == '\n' || *s_end == '\t')
		s_end--;
	return (ft_strsub(s, 0, s_end - s + 1));
}
