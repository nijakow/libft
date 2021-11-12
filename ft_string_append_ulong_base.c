/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append_ulong_base.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:59:37 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/09 16:15:40 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_string_append_ulong_base_loop(struct s_string *self,
							unsigned long value,
							int base,
							const char *basestr)
{
	if (value != 0)
	{
		ft_string_append_ulong_base_loop(self, value / base, base, basestr);
		ft_string_append_char(self, basestr[value % base]);
	}
}

void	ft_string_append_ulong_base(struct s_string *self,
							unsigned long value,
							int base,
							const char *basestr)
{
	if (value == 0)
		ft_string_append_char(self, '0');
	else
		ft_string_append_ulong_base_loop(self, value, base, basestr);
}
