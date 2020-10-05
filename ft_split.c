/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 23:24:19 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 22:05:30 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	is_cutter(char *s, char c)
{
	size_t cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			++cnt;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (cnt);
}

char	**ft_split(char *str, char c)
{
	char	**rt;
	char	*anchor;
	size_t	i;
	size_t	size;

	if (!(rt = (char**)malloc(sizeof(char*) * is_cutter(str, c) + 1)))
		return (0);
	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			anchor = str;
			while (*str && *str != c)
				++str;
			size = str - anchor + 1;
			if (!(rt[i] = (char*)malloc(size)))
				return (0);
			ft_strlcpy(rt[i++], anchor, size);
		}
		else
			++str;
	}
	rt[i] = 0;
	return (rt);
}
