/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:54:15 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 17:56:10 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_string_index(struct s_string *self, unsigned int index)
{
	if (index >= self->fill)
		return (EOF);
	else
		return (self->bytes[index]);
}
