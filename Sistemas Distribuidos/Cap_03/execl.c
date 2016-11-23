#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("Chamando o programa..\n");
	execl("/usr/bin/head", "head", "/etc/passwd", "/etc/group", (char *)0);
	
	printf("Essa msg nao sera impressa.\n");
};
