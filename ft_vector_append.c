/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:34:25 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:36:29 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vector_append(struct s_vector *self, t_any value)
{
	t_any	*ptr;

	ptr = ft_vector_index(self, ft_vector_length(self));
	if (ptr != NULL)
		*ptr = value;
}
