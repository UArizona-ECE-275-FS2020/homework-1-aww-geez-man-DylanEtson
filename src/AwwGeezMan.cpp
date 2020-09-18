/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"
#include <string>


int main(int ac, char** av) {
	int start, stop, step, i = 0;
	std::string dimension;

	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	// Parse the command line arguments

	if (ac == 5) {
		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		step = atoi(*(av + 3));
		dimension = *(av + 4);
	}

	if (ac == 4) {
		start = atoi(*(av + i + 1));
		stop = atoi(*(av + i + 2));
		dimension = *(av + i + 3);
	}

	//std::cout << start << " " << stop << " " << step << " " << dimension;

	// Depending on the dimension of the arguments, call the appropriate Morty
	// function

	if (dimension == "c137" || dimension == "C137") {
		if (ac == 4) {
			c137::Morty(start, stop);
		}

		else {
			c137::Morty(start, stop, step);
		}
	}
	else if (dimension == "z286" || dimension == "Z286") {
		if (ac == 4) {
			z286::Morty(start, stop);
		}

		else {
			z286::Morty(start, stop, step);
		}
	}
	else {
		std::cout << "ERROR: Unknown dimension!\n";
		return -1;
	}

	return 0;
}