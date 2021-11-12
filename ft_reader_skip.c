/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_skip.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:34:15 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/12 16:35:08 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reader_skip(struct s_reader *reader,
						t_char_predicate pred)
{
	while (ft_reader_has_next(reader))
	{
		if (!pred(ft_reader_peek(reader)))
			break ;
		ft_reader_advance(reader);
	}
}
