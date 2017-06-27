/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:17:58 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:17:59 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tempf;

	if (lst)
	{
		tempf = f(lst);
		(*tempf).next = ft_lstmap((*lst).next, f);
		return (tempf);
	}
	else
		return (NULL);
}
