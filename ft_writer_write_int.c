/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_write_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:27:02 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/08 14:28:09 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_writer_write_int(struct s_writer *writer, int value)
{
	ft_writer_write_int_base(writer, value, 10, "0123456789");
}
