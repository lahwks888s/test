#include <stdio.h>
#include <unistd.h>

int main(void) {
	int pid;

	printf("Meu numero de processo eh %d. Vou criar um processo filho.\n", getpid());
	pid = fork(); /* Chamada da primitiva fork */

	if (pid == 0) { /* Aqui comecam as intrucoes do processo filho */
		printf("\t\tProcesso filho criado com o PID numero %d.\n", getpid());
		printf("\t\tVou ficar executando indefinidamente...\n");
		for (;;); /* Este proceso ficara em loop */
	} else {
		sleep(5);
		printf("O processo pai termina e deixa o processo filho orfao.\n");
	};
};
