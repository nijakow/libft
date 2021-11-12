/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:50:40 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 18:56:02 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_type	*g_TYPES = NULL;

#ifdef LIBFT_DEBUG
void	ft_type_listinstances(void)
{
	struct s_type	*type;
	struct s_object	*object;

	type = g_TYPES;
	while (type != NULL)
	{
		printf("Type '%s'\n", type->name);
		object = type->instances;
		while (object != NULL)
		{
			printf("  - Instance %p\n", object);
			object = object->next;
		}
		type = type->next;
	}
}
#else

void	ft_type_listinstances(void)
{
}
#endif
