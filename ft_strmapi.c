/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:20:41 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:20:44 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	int		i;

	i = 0;
	if (!(s) || !(f))
		return (NULL);
	if (!(a = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (*s)
	{
		a[i] = f(i, *s++);
		i++;
	}
	a[i] = '\0';
	return (a);
}
