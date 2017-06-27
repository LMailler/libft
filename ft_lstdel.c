/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:17:43 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:17:45 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((**alst).next)
	{
		ft_lstdel(&((**alst).next), (*del));
		ft_lstdelone(alst, (*del));
	}
	else
		ft_lstdelone(alst, (*del));
}
