/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:31:39 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/05 22:11:14 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	if(n == 1)
		return(1);
	while(n >= 2)
	{
/* If n is odd, modulo 2 will be 1, so we end the program and return 0 because
** an odd number cannot be a power of 2.*/
		if((n % 2) == 1)
			return(0);
		if((n % 2) == 0)
			n = n/2;
/* If n is even, modulo 2 is 0, so we divide n by 2 and run the while loop again*/
	}
/*If n makes it this far out of the while loop then n is a power of 2 and returns 1*/
	return(1);
}

/*
int main (void)
{
	int num;

	num = 0;
	while(num <= 128)
	{
		printf("%d:|%d|\n", num, is_power_of_2(num));
		num++;
	}
	return(0);
}
*/
