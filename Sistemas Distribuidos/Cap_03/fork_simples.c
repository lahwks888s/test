#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
	int id;
	id = fork();

	if (id != 0) {
		printf("Eu sou o pai e espero pelo meu filho %d.\n", id);
		wait(0);
		printf("Meu filho acabou de terminar... Vo terminar tambem!\n");
	} else {
		printf("Eu sou o filho %d e espero 5 segundos.\n", getpid());
		sleep(5);
		printf("Ja esperei e agora vom embora...\n");
	};
};
