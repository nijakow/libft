/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_write_ulong_base.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:24:27 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/08 14:26:09 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_writer_write_ulong_base_loop(struct s_writer *self,
							unsigned long value,
							int base,
							const char *basestr)
{
	if (value != 0)
	{
		ft_writer_write_ulong_base_loop(self, value / base, base, basestr);
		ft_writer_write_char(self, basestr[value % base]);
	}
}

void	ft_writer_write_ulong_base(struct s_writer *self,
							unsigned long value,
							int base,
							const char *basestr)
{
	if (value == 0)
		ft_writer_write_char(self, '0');
	else
		ft_writer_write_ulong_base_loop(self, value, base, basestr);
}
