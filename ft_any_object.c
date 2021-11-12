/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any_object.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:51:28 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:53:42 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_any	ft_any_object(struct s_object *value)
{
	return ((t_any){.type = E_TYPE_OBJECT, .value.object = value});
}
