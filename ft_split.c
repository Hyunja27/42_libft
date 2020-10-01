/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 23:24:19 by spark             #+#    #+#             */
/*   Updated: 2020/10/01 23:33:52 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_cutter(char c, char *charset)
{
	int idx;

	idx = 0;
	while (charset[idx])
	{
		if (c == charset[idx])
			return (1);
		charset++;
	}
	return (0);
}

int		word_cnt(char *str, char *charset)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_cutter(*str, charset))
		{
			cnt++;
			while (*str && !is_cutter(*str, charset))
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

char	*str_insert(char *str, unsigned int n)
{
	unsigned int	idx;
	char			*ret;

	ret = (char*)malloc(sizeof(char) * (n + 1));
	ret[n] = 0;
	idx = 0;
	while (idx < n)
	{
		ret[idx] = str[idx];
		idx++;
	}
	return (ret);
}

void	make_str(char *str, char *charset, char **result)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 1;
	count = 0;
	if (str[i] && !is_cutter(str[i], charset))
		j = i++;
	while (str[i])
	{
		if (is_cutter(str[i], charset))
		{
			if (j < i)
				result[count++] = str_insert(str + j, i - j);
			j = i + 1;
		}
		i++;
	}
	if (j < i)
		result[count] = str_insert(str + j, i - j);
}

char	**ft_split(char *str, char *charset)
{
	unsigned int	len;
	unsigned int	cnt;
	char			**ret;

	if (!charset[0])
	{
		len = 0;
		ret = (char**)malloc(sizeof(char*) * 2);
		while (str[len])
			len++;
		ret[0] = str_insert(str, len);
		ret[1] = 0;
		return (ret);
	}
	cnt = word_cnt(str, charset);
	ret = (char**)malloc(sizeof(char*) * (cnt + 1));
	ret[cnt] = 0;
	make_str(str, charset, ret);
	return (ret);
}
