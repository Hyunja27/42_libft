/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:56:01 by spark             #+#    #+#             */
/*   Updated: 2020/09/28 17:08:38 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	void	*rt;
	int		i;

	rt = dest;
	i = 0;
	while (i < n)
	{
		*(char*)dest++ = *(char*)src++;
		if (*(char*)src == c)
			return (src);
		i++;
	}
	return (NULL);
}
