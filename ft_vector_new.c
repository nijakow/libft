/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:24:19 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:25:37 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_vector	*ft_vector_new(void)
{
	struct s_vector	*vector;

	vector = ft_new(sizeof(struct s_vector));
	if (vector != NULL)
		ft_vector_create(vector);
	return (vector);
}
