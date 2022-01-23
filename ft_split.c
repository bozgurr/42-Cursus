/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 02:50:41 by bozgur            #+#    #+#             */
/*   Updated: 2022/01/23 08:26:51 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	word_count(char const *s, char c)
{
	int	cnt;

	cnt = !s;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		cnt += !!*s;
		while (*s && *s != c)
			s++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	const char	*w_head;
	char		**head;
	char		**result;

	if (!s)
		return ((char **)s);
	result = (char **)malloc(sizeof(char *) * (word_count(s, c) + !!s));
	head = result;
	while (word_count(s, c) && result)
	{
		while (*s && *s == c)
			s++;
		w_head = s;
		while (*w_head && *w_head != c)
			w_head++;
		*result = (char *)malloc((++w_head - s) * sizeof(char));
		if (!*result)
			return ((char **)*result);
		ft_strlcpy(*result++, s, w_head - s);
		s = --w_head;
	}
	if (head)
		*result = (char *) !sizeof(char *);
	return (head);
}

/*
int	main ()//				              i
{//					
	char	**res;         w
				           s
	res = ft_split("__ozgur_bilal__arbi_elmas_1999_", '_');
	for (int i = 0; res[i]; i++)
		printf("%s, ", res[i]);
	return (0);
}*/
