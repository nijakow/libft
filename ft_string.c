/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:02:31 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 19:02:40 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static struct s_type	g_STRING_TYPE = {
	.was_initialized = false,
	.name = "s_string",
	.destructor = (t_destructor) ft_string_destroy,
	.instances = NULL
};

void	ft_string_create(struct s_string *self)
{
	ft_object_create(&self->_, &g_STRING_TYPE);
	self->alloc = 0;
	self->fill = 0;
	self->bytes = NULL;
}

void	ft_string_create_fromc(struct s_string *self, char *c_str)
{
	size_t	length;

	ft_object_create(&self->_, &g_STRING_TYPE);
	length = ft_cstr_strlen(c_str);
	self->alloc = length;
	self->fill = length;
	self->bytes = ft_memory_duplicate(c_str, length);
}

struct s_string	*ft_string_new(void)
{
	struct s_string	*self;

	self = ft_new(sizeof(struct s_string));
	if (self != NULL)
		ft_string_create(self);
	return (self);
}

struct s_string	*ft_string_new_fromc(char *c_str)
{
	struct s_string	*self;

	self = ft_new(sizeof(struct s_string));
	if (self != NULL)
		ft_string_create_fromc(self, c_str);
	return (self);
}

struct s_string	*ft_string_copy(struct s_string *original)
{
	struct s_string	*self;

	self = ft_string_new();
	if (self != NULL)
		ft_string_append_string(self, original);
	return (self);
}
