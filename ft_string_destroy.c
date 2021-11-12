/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:41:37 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 18:42:47 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_string_destroy(struct s_string *self)
{
	if (self->bytes != NULL)
		ft_memory_free(self->bytes);
	ft_object_destroy(&self->_);
}
