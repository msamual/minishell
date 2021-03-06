/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_list_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 09:32:22 by dmilan            #+#    #+#             */
/*   Updated: 2021/02/12 10:12:43 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_env_list_print(t_env_list *env_list)
{
	while (env_list != NULL)
	{
		ft_putstr_fd(env_list->item->key, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(env_list->item->value, 1);
		ft_putstr_fd("\n", 1);
		env_list = env_list->next;
	}
}

void	ft_env_list_print_with_declare(t_env_list *env_list)
{
	while (env_list != NULL)
	{
		ft_putstr_fd("declare -x ", 1);
		ft_putstr_fd(env_list->item->key, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(env_list->item->value, 1);
		ft_putstr_fd("\n", 1);
		env_list = env_list->next;
	}
}