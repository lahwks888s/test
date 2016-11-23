#include <stdio.h>
#include <unistd.h>

int main(void) {
	char *cmd[] = { "ls", "-l", (char *)0 };

	printf("Chamando o programa..\n");
	execvp("ls", cmd);
	
	printf("Essa msg nao sera impressa.\n");
};
