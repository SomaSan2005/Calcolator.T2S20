#include <stdio.h>
#include <math.h>
float stampaValore(int numero1,char operatore,int numero2);
int main() {
	int numero1 = 0;
	int numero2 = 0;
	char segno = " ";
	float vieneQuesto = 0;
	char risposta = "S";

	do {
		scanf("%d", &numero1);
		scanf("%d", &numero2);
		scanf("%s", &segno);
		vieneQuesto = stampaValore(numero1, segno, numero2);
		printf("%f", vieneQuesto);
		printf("\nvouoi continuare? S|N: \n");
		scanf("%s", &risposta);
	} while (risposta == 'S');
}
 float stampaValore(int numero1, char operatore, int numero2) 
 {
	 float risultato = 0; 
	switch (operatore)
	{
	case '/':
		risultato = (float) numero1/numero2;
		break; 
	case '+':
		risultato = (float) numero1 + numero2;
		break;
	case '*':
		risultato = (float) numero1 * numero2;
		break;
	case '-':
		risultato = (float) numero1 - numero2;
		break;
	}
	return risultato;
}
