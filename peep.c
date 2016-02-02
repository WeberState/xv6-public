#include "types.h"
#include "user.h"
#include "stat.h"

char buf[1024];

int main(int argc, char *argv[]) {
	int n;

	if(argc != 2) {
		printf(1, "Usage: peep COUNT\n");
		exit();
	}

	n = atoi(argv[1]);
	printf(1, "You entered the number %d\n", n);
	exit();
}
