/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:38:30 by spark             #+#    #+#             */
/*   Updated: 2020/09/28 16:57:09 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *p, int tg, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*(char*)p++ == tg)
			return (p);
		i++;
	}
	return (NULL);
}
