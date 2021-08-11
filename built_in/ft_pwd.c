/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:35:09 by dmilan            #+#    #+#             */
/*   Updated: 2021/04/11 13:25:39 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
**	SUBJECT
**		- No options
**		- Like in bash
**
**	ARGS
**		- Ignores arguments
**
**	EXIT STATUS
**		-[0] Successful completion.
**		-[>0] An error occurred.
*/

void	ft_pwd(void)
{
	char	*buf;

	buf = getcwd(NULL, 0);
	g_errno = errno;
	if (!buf)
		ft_putstr_fd(strerror(g_errno), 2);
	else
		g_errno = 0;
	ft_putstr_fd(buf, 1);
	ft_putc_fd('\n', 1);
	free(buf);
}
