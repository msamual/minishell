/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   names.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamual <msamual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 08:22:35 by dmilan            #+#    #+#             */
/*   Updated: 2021/04/20 15:31:31 by msamual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
**	A word consisting solely of letters, numbers, and underscores,
**	and beginning with a letter or underscore.
**	Names are used as shell variable and function names.
**	Also referred to as an identifier.
*/

bool	is_name(const char *str)
{
	if (*str == '_' || ft_isalpha(*str))
	{
		str++;
		while (*str)
		{
			if (*str != '_' && !ft_isalnum(*str))
				return (false);
			str++;
		}
		return (true);
	}
	return (false);
}

bool	is_name_till_symbol(const char *str, const char *symbols)
{
	if (*str == '_' || ft_isalpha(*str))
	{
		str++;
		while (*str && !ft_strchr(symbols, *str))
		{
			if (*str != '_' && !ft_isalnum(*str))
				return (false);
			str++;
		}
		return (true);
	}
	return (false);
}

int	find_name_len(const char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	if (!(*str == '_' || ft_isalpha(*str)))
		return (0);
	len++;
	while (str[len] && (str[len] == '_' || ft_isalnum(str[len])))
		len++;
	return (len);
}
