/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_write_cstr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:33:47 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/08 14:34:26 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_writer_write_cstr(struct s_writer *writer,
			char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_writer_write_char(writer, str[i]);
	}
}
