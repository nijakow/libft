/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append_int_base10.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:03:23 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/09 16:17:52 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_string_append_int_base10(struct s_string *self,
							int value)
{
	ft_string_append_int_base(self, value, 10, "0123456789");
}
