/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:20:36 by jllamas-          #+#    #+#             */
/*   Updated: 2024/02/25 21:20:38 by jllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DB_H
# define FT_DB_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "ft_string.h"
# include "ft_shittinette.h"

typedef struct entry
{
	int		digits;
	char	*key;
	char	*value;
}	t_entry;

t_entry	*create_entry(char *nbr, char *str);
t_entry	**create_db(char *filename);
t_entry	*get_value(t_entry **db, char *key);
void	delete_db(t_entry **db);

#endif
