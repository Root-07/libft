/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:10:34 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 22:08:34 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			j++;
		while (s[j] && s[j] == c)
			j++;
		i++;
	}
	return (i);
}

static int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		len;
	int		j;

	if (!s)
		return (0);
	len = ft_count(s, c);
	ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	j = 0;
	while (*s && j < len)
	{
		while (*s && *s == c)
			s ++;
		if (*s && *s != c)
			ptr[j++] = ft_substr(s, 0, ft_len(s, c));
		while (*s && *s != c)
			s ++;
	}
	ptr[j] = NULL;
	return (ptr);
}

// #include<stdio.h>
// int main()
// {
//     char *c = "xxxxQAQAQAxxxQAQAQxxxAQAQA";
//     char **split = ft_split(c, 'x');
//     int i = 0;
//     while(split[i])
//     { 
//     printf("%s\n", split[i]);
//     i ++;
//     }
// }
