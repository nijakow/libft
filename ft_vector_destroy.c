/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:22:42 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:23:27 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vector_destroy(struct s_vector *self)
{
	if (self->values != NULL)
		ft_memory_free(self->values);
	ft_object_destroy(&self->_);
}
