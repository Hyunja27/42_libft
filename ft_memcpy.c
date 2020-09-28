/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:26:43 by spark             #+#    #+#             */
/*   Updated: 2020/09/28 16:49:55 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	void	*rt;
	int		i;

	if (!dest && !src)
		return (0);
	rt = dest;
	i = 0;
	while (i < n)
	{
		*(char*)dest++ = *(char*)src++;
		i++;
	}
	return (rt);
}
