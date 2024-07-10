/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:39:06 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/23 23:08:23 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		while (i < len && s[start] != '\0')
			p[i++] = s[start++];
		p[i] = '\0';
	}
	else
		p[0] = '\0';
	return (p);
}

// #include<stdio.h>
//  int main()
//  {
//      printf("%s", ft_substr("Aliel", 2, 2));
//  }