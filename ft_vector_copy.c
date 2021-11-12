/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:25:53 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:45:17 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_vector	*ft_vector_copy(struct s_vector *self)
{
	unsigned int	i;
	struct s_vector	*vector;

	vector = ft_vector_new();
	if (vector != NULL)
	{
		i = 0;
		while (i < ft_vector_length(self))
		{
			ft_vector_append(vector, *ft_vector_index(self, i));
			i = i + 1;
		}
	}
	return (vector);
}
