/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:47:01 by yoelansa          #+#    #+#             */
/*   Updated: 2022/10/30 21:58:11 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)(str));
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < l)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)(&str[i]));
		}
		i++;
	}
	return (0);
}
