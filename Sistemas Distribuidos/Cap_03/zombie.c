#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main(void) {
	int pid;

	printf("Meu PID eh %d e vou criar um processo filho.\n", getpid());
	pid = fork();

	if (pid == 0) {
		printf("\t\tMeu PID eh %d e fui criado por %d.\n", getpid(), getppid());
		printf("\t\tVerifique os processos em execucao com o comando ps.\n");
		sleep(10);
		printf("Processo filho terminando normalmente.\n");
		exit(0);
	} else {
		for(;;);
	};
};
