/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkDeath.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:34:54 by misimon           #+#    #+#             */
/*   Updated: 2022/12/06 17:38:32 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../philo.h"

t_bool	check_death(t_ph *ph, size_t i)
{
	if ((get_time() - ph->philo[i].last_eat >= (t_time)ph->time_die 
			&& ph->finish == 0) || ph->nbr_philo == 1)
	{
		ph->finish = 1;
		ph_print_dead(get_time() - ph->starting_time, ph, i, "is dead");
		return (TRUE);
	}
	return (FALSE);
}
