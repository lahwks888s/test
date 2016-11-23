#include <stdio.h>
#include <unistd.h>

int main(void) {
	char *cmd[] = { "echo", "Ola", (char *)0 };
	char *env[] = { "NOME=Marcos", (char *)0 };
	
	printf("Chamando o programa..\n");
	execve("/bin/echo", cmd, env);
	
	printf("Essa msg nao sera impressa.\n");
};
