/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:54:38 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/01 17:23:39 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*fsrc;
	char	*fdest;

	if (!dest && !src)
		return (NULL);
	fsrc = (char *)src;
	fdest = (char *)dest;
	i = 0;
	while (i < n)
	{
		fdest[i] = fsrc[i];
		i++;
	}
	return (dest);
}
