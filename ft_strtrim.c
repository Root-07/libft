/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 07:57:09 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/23 23:15:16 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*new_s;
	size_t	size_s;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	str = (char *)s1;
	while (*str && ft_strchr(set, *str))
		str++;
	size_s = ft_strlen((char *)str);
	if (i == size_s)
		return (ft_substr("", 0, size_s));
	while (size_s && ft_strchr(set, str[size_s]))
		size_s--;
	new_s = ft_substr(str, 0, size_s + 1);
	return (new_s);
}

// #include<stdio.h>
// int main()
// {
//     printf("%s", ft_strtrim("rfr","r"));
// }
//#include "libft.h"

// static int ft_set(char const *s, char const *set)
// {
//     int i;

//     i = 0;
//     if(s[i] == set[i])
//         return(1);
//     return(0); 
// }

// char *ft_strtrim(char const *s1, char const *set)
// {
//     char i;
//     char j;
//     char *new;
//     char *str;
//     size_t  size_s;

//     i = 0;
//     j = ft_strlen(str) - 1;
//     str = (char *)s1;
//     while(str)
//     {
//         if(!ft_set(str,set[i]))
//             break;
//         i++;
//     }
//     while((char)s1)
//     {
//         if(!ft_set(str,set[j]))
//             break;
//         j--;
//     }
//     size_s = ft_strlen((char *)str);
//     new = ft_substr(s1,0, size_s + 1);
//     return (new);
// }