#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(void) {
	int pid;
	int fd;
	char *pidnum;
	int r;
	int i;
	char c;

	printf("Meu numero de PID eh %d.\n", getpid());
	printf("Vou gravar meu numero de PID no arquivo meupid.\n");

	if ((fd=open("meupid", O_CREAT|O_RDWR|O_TRUNC|S_IRWXU)) == -1) {
		printf("Nao foi possivel criar o arquivo meupid.\n");
		exit(-1);
	};

	sprintf(pidnum, "%d surpresa", getpid());

	if (write(fd, pidnum, 14) == -1) {
		printf("Nao consegui escrever no arquivo.\n");
		exit(-1);
	};
	printf("Ja escrevi o numero. Fechando o arquivo.\n");
	close(fd);

	printf("Vou abrir novamente o arquivo para leitura.\n");
	if ((fd=open("meupid", O_RDONLY, S_IRWXU)) == -1) {
		printf("Nao foi possivel abrir o arquivo.\n");
		exit(-1);
	};

	printf("Vou criar um processo filho agora.\n");
	pid = fork();
	if (pid == -1) {
		perror("Nao foi possivel criar um processo filho.\n");
	} else if (pid == 0) {
		printf("\t\tSou o processo filho, meu PID eh %d.\n", getpid());
		printf("\t\tVou ler o arquivo que ja estava aberto pelo processo pai antes\n");
		printf("\t\tda minha criacao que eu herdei.\n");
		for (i = 1; i < 5; i++) {
			if (read(fd, &c, 1) == -1) {
				printf("nao consegui ler o arquivo.\n");
				exit(-1);
			};
			printf("\t\tO numero que foi lido no arquivo eh %c.\n", c);
		};
		printf("\t\tFechando o arquivo e terminando minha execucao...\n");
		close(fd);
		exit(1);
	} else {
		wait(0);
		printf("O processo pai espera ate que o processo filho termine.\n");
		printf("Vou ler o arquivo meupid.\n");
		while ((r=read(fd, &c, 1)) != 0) {
			if (r == -1) {
				printf("Impossivel ler o arquivo.\n");
				exit(-1);
			};
			printf("Consegui ler --> %c.\n", c);
		};
		printf("Meu filho leu o numero do PID no arquivo e mexeu no meu ponteiro.\n");
		printf("Terminando minha execucao.\n");
		close(fd);
	};
};
