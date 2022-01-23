/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:40:55 by bozgur            #+#    #+#             */
/*   Updated: 2022/01/13 13:41:10 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_1;
	unsigned char	*s2_1;

	s1_1 = (unsigned char *)s1;
	s2_1 = (unsigned char *)s2;
	while (*s1_1 == *s2_1 && n--)
	{
		s1_1++;
		s2_1++;
	}
	if (!n)
		return (0);
	return (*s1_1 - *s2_1);
}
