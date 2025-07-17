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

#include "ft_db.h"

int	count_newlines(char *filename)
{
	int		file;
	char	buf[1];
	int		result;

	file = open(filename, O_RDONLY);
	if (!file)
		return (-1);
	result = 0;
	while ((read(file, buf, 1)) > 0)
	{
		if (*buf == '\n')
			result ++;
	}
	close(file);
	return (result + 1);
}

t_entry	*create_entry(char *nbr, char *str)
{
	t_entry	*result;

	result = malloc(sizeof(t_entry));
	if (!result)
		return (NULL);
	result->digits = ft_strlen(nbr);
	result->key = ft_strdup(nbr);
	result->value = ft_strdup(str);
	*nbr = '\0';
	*str = '\0';
	return (result);
}

t_entry	**create_db(char *filename)
{
	int		dict;
	int		size;
	t_entry	**db;

	dict = open(filename, O_RDONLY);
	if (dict < 0)
		return (NULL);
	size = count_newlines(filename);
	if (size < 1)
		return (NULL);
	db = malloc(sizeof(t_entry) * (size + 1));
	if (!db)
		return (NULL);
	fill_db(db, dict, size);
	close(dict);
	return (db);
}

void	delete_db(t_entry **db)
{
	t_entry	**aux;

	aux = db;
	while (*aux)
	{
		free((*aux)->value);
		free((*aux)->key);
		free(*aux);
		aux ++;
	}
	free(db);
}

t_entry	*get_value(t_entry **db, char *key)
{
	int	digits;

	digits = ft_strlen(key);
	while (*db)
	{
		if ((*db)->digits > digits)
		{
			return (*(db - 1));
		}
		if (ft_strcmp(key, (*db)->key) == 0)
			return (*db);
		db ++;
	}
	return (NULL);
}
