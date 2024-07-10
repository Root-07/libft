/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:55:35 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/23 23:01:36 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*meme;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	meme = ft_strdup(s);
	if (!meme)
		return (NULL);
	while (meme[i] != '\0')
	{
		meme[i] = (*f)(i, meme[i]);
		i++;
	}
	return (meme);
}
