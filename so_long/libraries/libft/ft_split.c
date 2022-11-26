/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:51:21 by rodalvar          #+#    #+#             */
/*   Updated: 2022/11/24 19:19:46 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clean_split(char **s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static size_t	count_str(const char *s, char c)
{
	size_t	i;
	int		cont;
	int		cent;

	i = 0;
	cont = 0;
	cent = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
			cent = 1;
		if ((s[i] == c || s[i + 1] == '\0') && cent == 1)
		{
			cent = 0;
			cont++;
		}
		i++;
	}
	return (cont);
}

static char	*substr(const char *s, char c, int start, size_t *e)
{
	int	i;

	i = 0;
	s += start;
	while (s[i] != c && s[i] != '\0')
		i++;
	*e = i;
	return (ft_substr(s - start, start, i));
}

static char	*substr2(char **str, const char *s, char c, size_t *l)
{
	size_t	el;
	char	*strsub;

	strsub = substr(s, c, *l, &el);
	if (!strsub)
		return (clean_split(str));
	*l += el;
	return (strsub);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		cont;
	char	*substr;
	size_t	start;

	if (!s)
		return (0);
	cont = 0;
	str = (char **)ft_calloc(count_str(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	start = 0;
	while (start < ft_strlen(s) || s[start] != '\0')
	{
		if (s[start] != c)
		{
			substr = substr2(str, s, c, &start);
			if (!substr)
				return (0);
			str[cont++] = substr;
		}
		else
			start++;
	}
	return (str);
}
