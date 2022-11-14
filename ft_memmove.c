/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:30:00 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/01 17:26:28 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	size_t		j;
	char		*d;
	const char	*s;

	if (!src && !dest)
		return (NULL);
	d = (char *) dest;
	s = (const char *) src;
	i = 0;
	j = 0;
	if (d < s)
	{
		while (len--)
			d[j++] = s[i++];
	}
	else
	{
		i = len - 1;
		j = len - 1;
		while (len--)
			d[j--] = s[i--];
	}
	return (dest);
}
