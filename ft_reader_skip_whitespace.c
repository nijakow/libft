/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_skip_whitespace.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:38:41 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/12 16:41:59 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_reader_skip_whitespace_pred(char c)
{
	return (ft_cstr_member(" \t\n\r\v\f", c));
}

void	ft_reader_skip_whitespace(struct s_reader *reader)
{
	ft_reader_skip(reader, ft_reader_skip_whitespace_pred);
}
