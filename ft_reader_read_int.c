/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_read_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:02:20 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 14:06:54 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_reader_read_int(struct s_reader *reader,
							int *value_ptr)
{
	int		factor;
	long	value;
	int		steps;

	factor = 1;
	value = (steps = 0);
	if (ft_reader_peekd(reader, ' ') == '+')
		ft_reader_next(reader);
	else if (ft_reader_peekd(reader, ' ') == '-')
	{
		factor = -1;
		ft_reader_next(reader);
	}
	while (ft_reader_has_next(reader))
	{
		if (!(ft_reader_peekd(reader, ' ') >= '0'
				&& ft_reader_peekd(reader, ' ') <= '9'))
			break ;
		value = (value * 10) + (ft_reader_peekd(reader, ' ') - '0');
		steps++;
	}
	if ((value * factor) < INT_MIN || (value * factor) > INT_MAX || steps == 0)
		return (false);
	*value_ptr = (value * factor);
	return (true);
}
