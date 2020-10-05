/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:16:24 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 15:49:17 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (index < size && *dest)
	{
		dest++;
		index++;
	}
	while (index + 1 < size && *src)
	{
		*dest++ = *src++;
		index++;
	}
	if (index < size)
		*dest = 0;
	while (*src)
	{
		index++;
		src++;
	}
	return (index);
}
