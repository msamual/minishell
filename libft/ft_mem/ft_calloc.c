/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:54:38 by dmilan            #+#    #+#             */
/*   Updated: 2021/04/08 12:21:38 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	res = malloc(size * count);
	if (!res)
		return (NULL);
	while (i < size * count)
		res[i++] = 0;
	return (res);
}

void	*ft_calloc_c(size_t count, size_t size, int c)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	res = malloc(size * count);
	if (!res)
		return (NULL);
	while (i < size * count)
		res[i++] = c;
	return (res);
}
