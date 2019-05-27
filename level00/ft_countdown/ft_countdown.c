/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 20:15:08 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 20:23:11 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*for wrtie(2)*/

int main(void)
{
	char c;
	
	c = '9';
	while(c >= '0' && c <= '9')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return(0);
}
