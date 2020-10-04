/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 23:16:35 by spark             #+#    #+#             */
/*   Updated: 2020/10/04 09:24:13 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*rt;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	if (!(rt = malloc(sizeof(char) * len + 1)))
		return (0);
	while (str[i])
	{
		rt[i] = str[i];
		i++;
	}
	return (rt);
}
