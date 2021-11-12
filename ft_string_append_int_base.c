/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append_int_base.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:03:23 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/09 16:08:31 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_string_append_int_base(struct s_string *self,
							int value,
							int base,
							const char *basestr)
{
	long	lv;

	lv = value;
	if (lv < 0)
	{
		ft_string_append_char(self, '-');
		lv = -lv;
	}
	ft_string_append_ulong_base(self, lv, base, basestr);
}
