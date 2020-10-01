/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 23:36:53 by spark             #+#    #+#             */
/*   Updated: 2020/10/01 23:02:01 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	rtlen;
	size_t	i;

	rtlen = ft_strlen(s);
	i = 0;
	rt = s;
	while (s[i])
	{
		if (s[i] == (char)start)
		{
			rtlen = rtlen - i;
			rtlen = (rtlen > len) ? len : rtlen;
			if (!(rt = malloc(sizeof(char) * rtlen)))
				return (NULL);
			while (*rt && s[i])
				*rt++ = s[i++];
			break ;
		}
		i++;
	}
	return (rt);
}
