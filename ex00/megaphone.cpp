/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:29 by amaso             #+#    #+#             */
/*   Updated: 2023/05/15 15:42:31 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *\n";
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        for (int d = 0; argv[i][d]; d++)
            std::cout << (char)toupper(argv[i][d]);
    }
    std::cout << std::endl;
    return 0;
}
