/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_write_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:23:52 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 13:32:58 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_writer_write_char(struct s_writer *writer, char c)
{
	if (writer->mode == WRITER_MODE_FD)
		write(writer->fd, &c, 1);
	else if (writer->mode == WRITER_MODE_STRING)
		ft_string_append_char(writer->string, c);
}
