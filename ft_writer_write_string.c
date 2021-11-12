/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_write_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:26:16 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/09 17:30:13 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_writer_write_string(struct s_writer *self, struct s_string *string)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_string_length(string);
	while (i < l)
	{
		ft_writer_write_char(self, ft_string_index(string, i));
		i = i + 1;
	}
}
