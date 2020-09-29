/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 23:10:23 by spark             #+#    #+#             */
/*   Updated: 2020/09/29 23:15:52 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t many, size_t size)
{
	void *rt;

	rt = NULL;
	rt = malloc(size) * many;
	ft_bzero(rt);
	return (rt);
}
