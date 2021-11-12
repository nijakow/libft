/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:30:11 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 18:50:53 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_new(size_t size)
{
	return (ft_memory_alloc(size));
}

void	ft_destroy(void *self)
{
	((struct s_object *) self)->type->destructor(self);
}

void	ft_delete(void *self)
{
	ft_destroy(self);
	ft_memory_free(self);
}
