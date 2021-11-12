/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:20:52 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/09 17:30:22 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static struct s_type	g_WRITER_TYPE = {
	.was_initialized = false,
	.name = "s_writer",
	.destructor = (t_destructor) ft_writer_destroy,
	.instances = NULL
};

void	ft_writer_create_fd(struct s_writer *self, int fd)
{
	ft_object_create(&self->_, &g_WRITER_TYPE);
	self->fd = fd;
}
