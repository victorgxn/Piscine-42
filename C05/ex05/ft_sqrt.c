/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:11:44 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/19 22:16:15 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	while (num * num <= nb && nb > 0)
	{
		if (num * num == nb)
			return (num);
		else if (num >= 46341)
			return (0);
		num++;
	}	
	return (0);
}
