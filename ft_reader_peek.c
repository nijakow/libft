/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_peek.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:16:32 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 14:05:28 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_reader_peek(struct s_reader *reader, char *cptr)
{
	if (reader->mode == READER_MODE_CSTR)
	{
		if (reader->c_str[reader->index] == '\0')
			return (false);
		reader->cached_char = reader->c_str[reader->index];
	}
	else if (reader->mode == READER_MODE_STRING)
	{
		if (reader->index < ft_string_length(reader->string))
			reader->cached_char = ft_string_index(reader->string,
					reader->index);
		else
			return (false);
	}
	else if (reader->mode == READER_MODE_FD)
	{
		if (!reader->cached)
			read(reader->fd, &reader->cached_char, sizeof(char));
		reader->cached_char = true;
	}
	else
		return (false);
	if (cptr != NULL)
		*cptr = reader->cached_char;
	return (true);
}

char	ft_reader_peekd(struct s_reader *reader, char default_char)
{
	char	c;

	if (ft_reader_peek(reader, &c))
		return (c);
	else
		return (default_char);
}
