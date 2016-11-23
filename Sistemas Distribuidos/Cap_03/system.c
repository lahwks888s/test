#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Chamando o programa..\n");
	system("/bin/cat /etc/issue");
	
	printf("Essa msg sera impressa.\n");
};
