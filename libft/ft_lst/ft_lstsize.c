/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:45:20 by dmilan            #+#    #+#             */
/*   Updated: 2020/11/01 10:59:19 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
