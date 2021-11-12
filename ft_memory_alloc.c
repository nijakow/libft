/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:08:17 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 19:11:07 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_memory_alloc(size_t size)
{
	struct s_memory_alloc_ship	*ship;

	ship = malloc(sizeof(struct s_memory_alloc_ship) + size);
	if (ship == NULL)
		return (NULL);
	ship->size = size;
	return (ship->data);
}

void	*ft_memory_unitalloc(unsigned int count, size_t type_size)
{
	return (malloc(count * type_size));
}

void	ft_memory_free(void *ptr)
{
	size_t	offset;

	offset = ((size_t) &(((struct s_memory_alloc_ship *) 0)->data));
	if (ptr != NULL)
		free(((char *) ptr) - offset);
}
