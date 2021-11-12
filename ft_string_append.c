/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:57:40 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 19:09:45 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_string_append_char(struct s_string *self, char c)
{
	if (self->fill + 1 >= self->alloc)
	{
		if (!ft_memory_realloc_inplace((void **) &self->bytes, self->fill + 64))
			return (false);
		self->alloc = self->fill + 64;
	}
	self->bytes[self->fill++] = c;
	return (true);
}

bool	ft_string_append_cstr(struct s_string *self, char *cstr)
{
	if (cstr != NULL)
		while (*cstr != '\0')
			if (!ft_string_append_char(self, *(cstr++)))
				return (false);
	return (true);
}

bool	ft_string_append_string(struct s_string *self,
					struct s_string *other)
{
	unsigned int	index;
	int				c;

	index = 0;
	c = ft_string_index(other, index++);
	while (c != EOF)
	{
		if (!ft_string_append_char(self, (char) c))
			return (false);
		c = ft_string_index(other, index++);
	}
	return (true);
}
