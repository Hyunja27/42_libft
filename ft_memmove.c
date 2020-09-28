/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:08:29 by spark             #+#    #+#             */
/*   Updated: 2020/09/28 16:50:06 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	void	*rt;
	int		i;

	if (!dest && !src)
		return (0);
	i = 0;
	rt = dest;
	while (i < n)
	{
		*(char*)dest++ = *(char*)src++;
		i++;
	}
	return (rt);
}
