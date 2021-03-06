/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:22:06 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/05 20:38:47 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *app)
{
	char *s;

	s = dest;
	while (*s != '\0')
		s++;
	while (*app != '\0')
		*s++ = *app++;
	*s = '\0';
	return (dest);
}
