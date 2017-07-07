#### first you should install gengetopt and cmake

* centOS

	sudo yum install gengetopt cmake

* ubuntu

	sudo apt-get install gengetopt cmake

#### step into project dir (gengetopt)

* if only using on unix, you can exec this cmd to generate 'cmdline.c' with include <getopt.h>

	gengetopt -i ./doc/test.ggo --output-dir=./src/ 

* if you want to use on unix and windows, you should add an argument '-G',this will generate internal getopt_long function without needing include <getopt.h> in 'cmdline.c'
	gengetopt -i ./doc/test.ggo --output-dir=./src/ -G

#### after exec this cmd, you can find 'cmdline.c' and 'cmdline.h' files in src dir.

* out-of-source  build

	mkdir build

	cd build

	cmake -DCMAKE_BUILD_TYPE=Debug ../

	make

#### test the function in build dir

	./test -h

#### you can see the stdout like this:

	Bepartofyou 1.2.3

	purpose: This is a demo to understand gengetopt functon

	Usage: To generate cmd parser

	description: Bepartofyou is a hansome man!    Define three type 

	varible(flag/bool int string). In cmds, 'b' is short for 'daemon'; 'c' is short 

	for 'config' and 'l' is short for 'level'. 

	-h, --help          Print help and exit

	-V, --version       Print version and exit

	-b, --daemon        Launch Bepartofyou in background as a daemon<br>
							(default=off)

	-c, --config=path   config file path (default=none)

	-l, --level=number  Bepartofyou hansome levels (default=0)


