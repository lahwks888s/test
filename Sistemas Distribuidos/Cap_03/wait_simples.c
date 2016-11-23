#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
	printf("Meu PID eh %d e meu grupo ID eh %d. Irei criar um processo filho.\n",
		   getpid(), getpgrp());

	if (fork() == 0) {
		printf("\t\tProcesso filho criado. Meu PID eh %d e meu grupo ID eh %d.\n",
			   getpid(), getpgrp());
		sleep(5);
		printf("\t\tVou sair com o codigo 7.\n");
		exit(7);
	} else {
		int ret, status;
		printf("Sou o processo pai. Estou esperando o processo filho.\n");
		ret = wait(&status);
		printf("O processo filho que terminou foi o PID %d.\n", ret);
		printf("Ele terminou com o parametro de exit() = %d.\n", (status>>8));
	};
};
