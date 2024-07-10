/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:05:53 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 15:33:01 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_find;

	j = 0;
	i = 0;
	len_find = ft_strlen(find);
	if (!len_find || find == str)
		return ((char *)str);
	if (!len && !str)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == find[j] && (j + i) < len)
		{
			if (find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include<stdio.h>
// int main()
// {
//     char *c = "hell o world!";
//     char *p;
//     p = ft_strnstr(c,"l", 2);
//     printf("%s",p);
// }