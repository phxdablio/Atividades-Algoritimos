//) Algoritimos Horas, Minutos e Segundos

#include <stdio.h>
#include <ctype.h>
int main (){
	int horas, minutos, segundos;
	printf("Digite numero de horas");
	scanf("%d", &horas);
	minutos = horas *60;
	segundos = minutos *60;
	printf("minutos %d",minutos);
	printf("segundos %d",segundos);
}


//Raio de Circunferencia

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   float raio,area;
   float pi = 3.14;
  printf ("RAIO =");
  scanf("%f", &raio);
  area = raio * raio* pi;
  printf("Resultado da area %f", area);
}


//Algoritimo Média Aritimetica

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	float nota1, nota2, nota3;
	printf("Escreva a primeira nota");
	scanf ("%f",&nota1);
	printf("Escreva a segunda nota");
	scanf("%f",&nota2);
	printf("Escreva a terceira nota");
	scanf("%f",&nota3);
	float media = nota1 + nota2 + nota3 / 3;
	printf ("o resultado é %f",media);

}



// Algoritimo Divisão e Resto 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
 
 int main (){
 	int dividendo, divisor;
 	printf ("De um valor para o dividendo");
 	scanf ("%d",dividendo);
 	printf ("De um valor para o divisor");
	 scanf ("%d",divisor);
	 int resultado = dividendo/divisor;
	 int resto = dividendo-resultado+divisor;
	 printf("O resultado é %d",resultado);
	 printf("O resultado é %d",resto);
 }

// Algoritimos Rolos

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
	 
	 int main (){
	 	int rolos;
	 	printf ("Digite o núnero de rolos");
	 	scanf ("%d", &rolos);
	 	float fios = rolos * 50;
	 	printf ("%d",rolos,"rolos equivalem a %d", fios,"metros de fios");
	}


// Algoritimo Calculo de media 


	#include <stdio.h>
	#include <ctype.h>
	#include <string.h>
	#include <stdlib.h>
	 
	 int main (void){
	 	float nota_a <= 3.5;
	 	flaot nota_b <= 7.5;
	 	printf ("Digite sua primeira nota");
	 	scanf ("%d",nota_a);
	 	printf ("Digite sua primeira nota");
	 	scanf ("%d",nota_b);
	 	float resultado = nota_a + nota_b - > resto;
		 float = resto > 10;
	 	printf ("O resultado é f%",resultado );
	 	
	 	
	 	
	}


// Algoritimo Dados Pessoais

 #include <stdio.h>
	#include <ctype.h>
	#include <string.h>
	#include <stdlib.h>
	 
	 int main (void){
	 	char nome [10], sexo [1];
	 	float matricula, h_trabalho,valor;
	 	printf ("Digite seu nome");
	 	scanf ("%c",nome);
	 	printf ("Digite M para masculino e F para feminino");
	 	scanf ("%c",sexo);
	 	printf ("Digite o número de Horas Trabalhadas");
	 	scanf ("%f",h_trabalho);
	 	printf ("Digite o valor recebido por hora");
	 	scanf ("%f",valor);
	 	float salario = h_trabalho * valor;
	 	printf ("Seu nome é: %c",nome,"seu sexo é: %c",sexo ,"Sua matricula é: %f",matricula,"seu número de horas trabalhadas é: %f",h_trabalho, "seu valor recebido por hora é: %f", valor, "e seu salario é:%f",salario
		 );
	 	
	 	
	}
