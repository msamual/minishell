/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamual <msamual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:24:48 by dmilan            #+#    #+#             */
/*   Updated: 2021/02/27 13:27:31 by msamual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft.h"
# include <unistd.h>
# include <sys/errno.h>
# include <stdlib.h>
# include <string.h>
# include <signal.h>

/*
**  ft_env_list
*/
typedef struct			s_env_item
{
	char				*key;
	char				*value;
}						t_env_item;

typedef struct			s_env_list
{
	t_env_item			*item;
	struct s_env_list	*next;
}						t_env_list;

typedef struct			s_redirection
{
	char				*in;
	char				*out;
	char				*err;
}						t_redir;


typedef struct			s_command
{
	int					index;
	char				*name;
	char				**arguments;
}						t_command;


typedef struct			s_vars
{
	t_env_list			*env_list;
	char				*raw_input;
	char				**commands;
}						t_vars;

t_env_item				*ft_env_item_new(char *key, char *value);
t_env_list				*ft_env_list_new(t_env_item *env_item);
void					ft_env_list_add_back(t_env_list **env_list,
												t_env_list *new);
void					ft_env_list_print(t_env_list *env_list);
void					ft_env_list_print_with_declare(t_env_list *env_list);
char					*ft_env_list_get_value(t_env_list *env_list, char *key);
bool					ft_env_key_exists(t_env_list *list, char *key);
t_env_item				*ft_env_item_new(char *key, char *value);
void					ft_env_list_replace(t_env_list *list, char *key,
												char *new_value);
void					ft_env_item_del(t_env_item *item);
void					ft_env_list_remove(t_env_list **list, char *key);
void					ft_env_list_clear(t_env_list **lst);
void					parse_row_string(t_vars *vars);
void					replacement(t_vars *vars);


/*
**	Built_IN
*/
int						ft_pwd();
void					ft_unset(t_env_list **list, char *key);
int						ft_cd(const char *new_path);
void					ft_env(t_env_list *env_list);
void					ft_export(char *key, char *value,
									t_env_list **env_list);

#endif
