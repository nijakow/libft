/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any_assign_floating.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:18:14 by enijakow          #+#    #+#             */
/*   Updated: 2021/10/14 16:18:50 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_any_assign_floating(t_any *any, float value)
{
	any->type = E_TYPE_FLOATING;
	any->value.floating = value;
}
