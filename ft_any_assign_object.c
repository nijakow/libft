/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any_assign_object.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:19:04 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:19:32 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_any_assign_object(t_any *any, struct s_object *value)
{
	any->type = E_TYPE_OBJECT;
	any->value.object = value;
}
