/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:51:17 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/03 23:10:15 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// argv 1 = filename
// argv 2 = s1
// argv 3 = s2
int	main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;

	if (argc != 4)
		return (1);
	fin.open(argv[1], std::ios_base::in);
	fout.open(static_cast<std::string>(argv[1]) + ".replace");
	if (!fin.is_open() || !fout.is_open())
		return (1);
	while (!fin.eof())
	{
		char tmp[256];
		fin.getline(tmp, 256);
		fout.write(tmp, 256);
	}
	fin.close();
	fout.close();
	return (0);
}
