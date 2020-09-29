/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:27:00 by spark             #+#    #+#             */
/*   Updated: 2020/09/29 19:31:10 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int rt;
	int indic;

	rt = 0;
	indic = 1;
	while (*str == '\n' || *str == '\t' || *str == ' ' ||
			*str == '\r' || *str == '\f' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == -1)
			indic *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		rt = (rt * 10) + ((*str - '0') * indic);
		str++;
	}
	return (rt);
}
