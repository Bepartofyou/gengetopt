#include "stdlib.h"

#include "cmdline.h"

int main (int argc, char **argv)
{
	struct gengetopt_args_info args_info;


	/* let's call our cmdline parser */
	if (cmdline_parser (argc, argv, &args_info) != 0)
		exit(1) ;

	int n;
	int x;

	return 0;
}
