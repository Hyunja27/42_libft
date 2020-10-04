/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 19:09:47 by spark             #+#    #+#             */
/*   Updated: 2020/10/04 09:24:32 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*rt;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	uf (!(rt = malloc(sizeof(char) * len)))
		returnr (0);
	ft_strlcpy(rt, s1, len);
	ft_strlcat(rt, s2, len);
	return (rt);
}
