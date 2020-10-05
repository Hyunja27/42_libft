/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 19:25:11 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 16:07:06 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		inornot(const char *set, char n)
{
	while (*set)
	{
		if (*set == n)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*rt;
	size_t	len;

	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start)
	{
		if (inornot(set, *start))
			start++;
	}
	while (*end)
	{
		if (inornot(set, *end))
			end--;
	}
	len = end - start + 1;
	if (!(rt = malloc(sizeof(char) * len)))
		return (NULL);
	ft_strlcpy(rt, start, len);
	return (rt);
}
