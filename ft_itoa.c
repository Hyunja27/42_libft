/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 23:34:40 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 09:25:34 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ilencal(int n)
{
	return (n == 0 ? 0 : 1 + ilencal(n / 10));
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rt;

	len = ilencal(n / 10) + 1;
	if (n < 0)
	{
		len += 1;
		n = -n;
	}
	if (!(rt = malloc(sizeof(char) * len)))
		return (NULL);
	rt[len] = '0';
	while (len >= 0)
	{
		rt[--len] = '0' + n % 10;
		n = n / 10;
	}
	return (rt);
}
