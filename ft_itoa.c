/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 23:34:40 by spark             #+#    #+#             */
/*   Updated: 2020/10/02 00:00:31 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
{
	int		len;
	int		clone;
	int		indic;
	char	*rt;

	indic = 1;
	len = 0;
	if (n < 0)
	{
		len += 1;
		n *= -1;
		indic = -1;
	}
	clone = n;
	if (n == 0)
		len = 1;
	else if (n > 0)
	{
		while (n > 1)
		{
			n = n / 10;
			len++;
		}
	}
	if (!(rt = malloc(sizeof(char) * len)))
		return (NULL);
	if (indic < 0)
		*rt++ = '-';
	rt[len] = '0';
	while (clone > 0)
	{
		rt[--len] = '0' + clone % 10;
		clone = clone / 10;
	}
	return (rt);
}
