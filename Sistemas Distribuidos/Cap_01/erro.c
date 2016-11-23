#include <stdio.h>

float calculo(int n1, int n2) {
	int dif;
	int res;
	dif = n1 - n2;
	res = n1 / dif;
	return res;
}

int main(void) {
	int val, div, i;
	float res, total;

	val = 10.1;
	div = 6;
	total = 0;

	for (i = 0; i < 10; i++) {
		res = calculo(val, div);
		total += res;
		printf("%d dividido por %d = %f. A soma dos resultados = %f.\n",
			   val, val-div, res, total);
		div++;
		val--;
	}
};
