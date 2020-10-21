/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:36:19 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/21 22:38:27 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
	}
	return (0);
}
