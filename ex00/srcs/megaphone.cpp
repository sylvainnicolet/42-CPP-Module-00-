#include <iostream>

/**
 * Print all arguments in upper case
 * @param argc
 * @param argv
 *
 * @return int
 */
int main(int argc, char* argv[])
{
	if (argc > 1) {
		// Print all arguments in upper case
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++) {
				std::cout << (char)std::toupper(argv[i][j]);
			}
		}
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
