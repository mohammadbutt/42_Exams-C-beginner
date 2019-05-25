/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:50:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/24 18:59:15 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = argv[1][i] + 32;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] - 32;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
