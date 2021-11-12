/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:26:54 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:45:41 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_any	*ft_vector_index(struct s_vector *self, unsigned int i)
{
	if (i >= self->alloc)
	{
		if (!ft_memory_realloc_inplace((void **) &self->values, i + 16))
			return (NULL);
		self->alloc = i + 16;
	}
	while (self->fill <= i)
	{
		ft_any_assign_nil(&self->values[self->fill]);
		self->fill++;
	}
	return (&self->values[i]);
}
