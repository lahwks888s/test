#include <stdio.h>
#include <unistd.h>

int main(void) {
	char *env[] = { "HOME=/home", "LOGNAME=lahwks",  (char *)0 };
	
	printf("Chamando o programa..\n");
	execle("/bin/ls", "ls", "-l", (char *)0, env);
	
	printf("Essa msg nao sera impressa.\n");
};
