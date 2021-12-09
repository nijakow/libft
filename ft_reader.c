/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:20:35 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 13:52:20 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static struct s_type	g_READER_TYPE = {
	.was_initialized = false,
	.name = "s_reader",
	.destructor = (t_destructor) ft_reader_destroy,
	.instances = NULL
};

void	ft_reader_create_cstr(struct s_reader *reader,
								char *c_str)
{
	ft_object_create(&reader->_, &g_READER_TYPE);
	reader->mode = READER_MODE_CSTR;
	reader->c_str = c_str;
	reader->index = 0;
}

void	ft_reader_create_string(struct s_reader *reader,
			struct s_string *string)
{
	ft_object_create(&reader->_, &g_READER_TYPE);
	reader->mode = READER_MODE_STRING;
	reader->string = string;
	reader->index = 0;
}

void	ft_reader_create_fd(struct s_reader *reader,
			int fd)
{
	ft_object_create(&reader->_, &g_READER_TYPE);
	reader->mode = READER_MODE_FD;
	reader->fd = fd;
	reader->index = EOF;
	reader->cached = false;
}
