/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_realloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:04:38 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 19:11:24 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memory_realloc(void *self, size_t new_size)
{
	size_t	old_size;
	size_t	offset;
	void	*new_block;

	if (self == NULL)
		return (ft_memory_alloc(new_size));
	offset = ((size_t) &(((struct s_memory_alloc_ship *) 0)->data));
	old_size = ((struct s_memory_alloc_ship *)(((char *) self) - offset))->size;
	if (new_size == old_size)
		return (self);
	new_block = ft_memory_alloc(new_size);
	if (new_block != NULL)
	{
		if (new_size < old_size)
			ft_memory_copy(new_block, self, new_size);
		else
			ft_memory_copy(new_block, self, old_size);
		ft_memory_free(self);
	}
	return (new_block);
}

bool	ft_memory_realloc_inplace(void **self, size_t new_size)
{
	void	*new_block;

	new_block = ft_memory_realloc(*self, new_size);
	if (new_block == NULL)
		return (false);
	*self = new_block;
	return (true);
}
