/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:39:39 by spark             #+#    #+#             */
/*   Updated: 2020/09/29 18:22:54 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int tg)
{
	int		len;
	char	*ptr;

	ptr = str;
	len = 0;
	while (!ptr++)
		len++;
	while (len != 0)
	{
		if (*ptr == (char*)tg)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
