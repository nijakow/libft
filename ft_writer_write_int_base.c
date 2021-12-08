/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_write_int_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:26:21 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/08 14:26:53 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_writer_write_int_base(struct s_writer *writer,
			int value, int base, const char *basestr)
{
	ft_writer_write_ulong_base(writer, value, base, basestr);
}
