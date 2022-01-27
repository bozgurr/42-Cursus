/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:30:09 by bozgur            #+#    #+#             */
/*   Updated: 2022/01/27 15:03:48 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	tmp;
	size_t	i;
	size_t	n;

	tmp = 0;
	n = ft_strlen(src);
	len = ft_strlen(dst);
	if (!dstsize)
		return (n);
	i = ft_strlen(dst);
	while (src[tmp] && i < dstsize - 1)
		dst[i++] = src[tmp++];
	dst[i] = '\0';
	if (len >= dstsize)
		len = dstsize;
	return (n + len);
}
