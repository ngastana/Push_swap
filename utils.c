/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:18:49 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/09 11:41:40 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*a;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		a = "";
		return (a);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	a = malloc((len +1) * sizeof(char));
	if (a == NULL)
		return (0);
	while (s[start] != '\0' && len > 0)
	{
		len--;
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}

long	atoi_long(char *str)
{
	long	i;
	long	n;
	long	nb;

	i = 0;
	n = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] == 43 && (str[i +1] != 43 && str[i +1] != 45))
		i++;
	if (str[i] == 45)
	{
		i++;
		n = n * -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (str[i] -48) + (nb * 10);
		i++;
	}
	return (nb);
}
