/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:53:30 by spark             #+#    #+#             */
/*   Updated: 2020/09/29 18:16:53 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*base;
	char	*target;
	size_t	i;

	i = 0;
	if (!(*to_find))
		return (str);
	while (i++ < n)
	{
		base = str;
		target = to_find;
		while (*base == *target && *base)
		{
			base++;
			target++;
		}
		if (*target == 0)
			return (str);
		if (!str++)
			str++;
		else
			return (0);
	}
	return (0);
}
