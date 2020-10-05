/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 19:17:30 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 09:25:23 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	size_t	i;

	i = 0;
	if (!(rt = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (rt[i])
	{
		rt[i] = f(i, s[i]);
		i++;
	}
	rt[i] = '0';
	return (rt);
}
