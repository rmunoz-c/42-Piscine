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

#include "ft_parse.h"

int	main(int argc, char **argv)
{
	t_entry	**db;
	char	*nbr;

	db = NULL;
	if (argc == 2)
	{
		db = create_db("numbers.dict");
		nbr = argv[1];
	}
	else if (argc == 3)
	{
		db = create_db(argv[1]);
		nbr = argv[2];
	}
	if (db)
	{
		parse_number(db, nbr);
		delete_db(db);
	}
	return (0);
}
