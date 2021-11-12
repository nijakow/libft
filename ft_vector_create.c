/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:20:34 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:22:33 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static struct s_type	g_VECTOR_TYPE = {
	.was_initialized = false,
	.name = "s_vector",
	.destructor = (t_destructor) ft_vector_destroy,
	.instances = NULL
};

void	ft_vector_create(struct s_vector *self)
{
	ft_object_create(&self->_, &g_VECTOR_TYPE);
	self->alloc = 0;
	self->fill = 0;
	self->values = 0;
}
