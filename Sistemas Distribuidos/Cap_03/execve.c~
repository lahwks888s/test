#include <stdio.h>
#include <unistd.h>

int main(void) {
	char *cmd[] = { "cat", "/etc/passwd", (char *)0 };
	
	printf("Chamando o programa..\n");
	execv("/bin/cat", cmd);
	
	printf("Essa msg nao sera impressa.\n");
};
