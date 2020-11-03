/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:06:06 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/03 00:28:19 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 0)
	{
		while (**av)
		{
			write(1, *av, 1);
			(*av)++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
