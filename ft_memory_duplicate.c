/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_duplicate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:38:28 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 17:39:37 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memory_duplicate(void *self, size_t size)
{
	void	*memory;

	memory = ft_memory_alloc(size);
	if (memory != NULL)
		ft_memory_copy(memory, self, size);
	return (memory);
}
