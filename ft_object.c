/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_object.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:27:21 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 19:13:16 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_object_create(struct s_object *self, struct s_type *type)
{
	if (!type->was_initialized)
	{
		type->next = g_TYPES;
		g_TYPES = type;
		type->was_initialized = true;
	}
	self->type = type;
	self->prev = &type->instances;
	if (type->instances != NULL)
		type->instances->prev = &self->next;
	self->next = type->instances;
	type->instances = self;
}

void	ft_object_destroy(struct s_object *self)
{
	*(self->prev) = self->next;
	if (self->next != NULL)
		self->next->prev = self->prev;
}
