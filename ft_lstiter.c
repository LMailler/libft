/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:17:53 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:17:56 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if ((lst) && (f))
	{
		if ((*lst).next)
		{
			(*f)(lst);
			ft_lstiter((*lst).next, (*f));
		}
		else
			(*f)(lst);
	}
}
