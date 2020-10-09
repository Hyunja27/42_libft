/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 20:34:55 by spark             #+#    #+#             */
/*   Updated: 2020/10/09 21:01:49 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *str, size_t n)
{
	size_t	len;
	char	*rt;
	size_t	i;

	len = ft_strlen(str);
	if (!(rt = malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (i < n)
	{
		rt[i] = str[i];
		i++;
	}
	rt[i] = 0;
	return (rt);
}
