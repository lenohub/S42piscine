/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:32:10 by mjay              #+#    #+#             */
/*   Updated: 2020/10/29 20:53:50 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*chkempty(char *str)
{
	char	*dst;

	dst = str;
	while (*dst == '\t'
		|| *dst == '\v'
		|| *dst == '\r'
		|| *dst == '\n'
		|| *dst == '\f'
		|| *dst == ' ')
		dst++;
	return (dst);
}

int		ft_atoi(char *str)
{
	int		i;
	int		num;

	i = 1;
	num = 0;
	str = chkempty(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	return (i * num);
}

int main()
{
	int a;
	char s[] = "  --df-234df";
	a = ft_atoi(s);
	printf("%d", a);
}
