/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:39:39 by spark             #+#    #+#             */
/*   Updated: 2020/10/05 21:08:43 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int tg)
{
	size_t len;

	len = ft_strlen(str);
	while (len != 0 && *(str + len) != tg)
		len--;
	if (*(str + len) == tg)
		return (char *)(str + len);
	return (NULL);
}
