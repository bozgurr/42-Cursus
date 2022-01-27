/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozgur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:29:57 by bozgur            #+#    #+#             */
/*   Updated: 2022/01/27 12:04:42 by bozgur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mylist;

	mylist = (t_list *)malloc(sizeof(t_list));
	if (!mylist)
		return (0);
	mylist->content = content;
	mylist->next = NULL;
	return (mylist);
}
