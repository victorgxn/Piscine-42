/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:16:58 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/22 09:42:49 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i] != '\0')
		{
			if (argv[1][i] == 'z') 
			{
				write(1, "z\n", 2);
				return (0);
			}
		}
		write(1, "z\n", 2);
	}
	else
		write(1, "z\n", 2);
}
