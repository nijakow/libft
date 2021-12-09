/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_as_writer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:33:33 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 13:38:12 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_writer	*ft_string_as_writer(struct s_string *self)
{
	return (ft_writer_new_string(self));
}
