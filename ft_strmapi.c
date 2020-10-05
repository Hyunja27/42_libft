/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 19:17:30 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 21:04:08 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rt;
	unsigned int	i;

	i = 0;
	if (!(rt = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (rt[i])
	{
		rt[i] = f(i, s[i]);
		i++;
	}
	rt[i] = 0;
	return (rt);
}
