/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_read_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:22:26 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/12 16:19:35 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_reader_read_line(struct s_reader *reader,
								struct s_string *string)
{
	int	c;

	while (ft_reader_has_next(reader))
	{
		c = ft_reader_next(reader);
		if (c == '\n')
			break ;
		ft_string_append_char(string, c);
	}
	return (true);
}
