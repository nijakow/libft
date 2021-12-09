/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_advance.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:15:40 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 14:03:15 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reader_advance(struct s_reader *reader)
{
	if (ft_reader_has_next(reader))
	{
		if (reader->mode == READER_MODE_CSTR)
			reader->index++;
		else if (reader->mode == READER_MODE_STRING)
			reader->index++;
		else
			reader->cached_char = false;
	}
}
