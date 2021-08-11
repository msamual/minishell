/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:36:13 by dmilan            #+#    #+#             */
/*   Updated: 2021/04/13 08:42:12 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*res;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen((char *)s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < s_len && s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[len] = '\0';
	return (res);
}
