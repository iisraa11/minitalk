/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:25:22 by isrguerr          #+#    #+#             */
/*   Updated: 2025/02/26 17:39:18 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "talk.h"

int main(void)
{
    printf("PID: %d\n", getpid());
    
    while(1 == 1)
        pause();
    return (0);
}