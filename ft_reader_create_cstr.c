/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_create_cstr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:20:35 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/12 16:25:18 by enijakow         ###   ########.fr       */
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
								char *c_str,
								bool autofree)
{
	ft_object_create(&reader->_, &g_READER_TYPE);
	reader->c_str = c_str;
	reader->autofree = autofree;
	reader->index = 0;
}
