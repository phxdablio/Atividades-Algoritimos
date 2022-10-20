
//Questão 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int n1, n2;
printf ("[DIGITE UM NUMERO E EM SEGUIDA OUTRO]\n");
scanf ("%i %i",&n1,&n2);
if (n1 >=n2)
{
printf ("%i E MAIOR QUE %i",n1,n2);
}
else
{
printf ("%i E MAIOR QUE %i",n2,n1);
}

}

//Questão 2
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int n1, n2;
printf ("[DIGITE UM NUMERO E EM SEGUIDA OUTRO]\n");
scanf ("%i %i",&n1,&n2);
if ( n1==n2)
{
printf ("%i TEM O MESMO VALOR DE %i", n1,n2);
}
else if (n1>n2)
{
printf ("%i E MAIOR QUE %i",n1,n2);
}
else
{
printf ("%i E MAIOR QUE %i",n2,n1);
}
}

//Questão 3
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (void){
int n1, n2,resultado;
printf ("[DIGITE UM NUMERO\n]");
scanf ("%i",&n1);
resultado = n1%2;
if (resultado !=0)
{
printf ("[%i E UM NUMERO IMPAR]",n1);
}
else
{
printf ("[%i E UM NUMERO PAR]",n1);
}
}

//Questão 4
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int salario, emprestimo,calculo;
printf("[DIGITE O VALOR DO SEU SALARIO]");
scanf ("%i",&salario);
printf("[DIGITE O VALOR DO EMPRESTIMO]");
scanf ("%i",&emprestimo);
calculo = (salario * 20)/100;
if (calculo>=emprestimo)
{
printf ("EMPRESTIMO AUTORIZADO");
}
else
{
printf ("EMPRESTIMO NEGADO");
}
}

//Questão 5
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
float num,resultado,quadrado;
printf ("DIGITE UM NUMERO\n");
scanf ("%f",&num);
if (num > 0);
{
resultado = sqrt(num);
quadrado = num * num;
printf ("A RAIZ E %f, E ELE ELEVADO AO QUADRADO E %f",resultado,quadrado);
}
if (num <=0)
{
printf ("%f E UM NUMERO NEGATIVO, PORTANTO NAO POSSUI RAIZ",num);
}
}

//Questão 6
#include <stdio.h>

int main (void)
{
float altura,resultado_masculino,resultado_feminino;
char genero;
printf ("DIGITE O GENERO E A ALTURA\n");
scanf ("%s%f",&genero,&altura);

if (genero =='m'||genero =='M')
{
resultado_masculino =(72.7 * altura) - 58;
printf ("O RESULTADO E %1f,",resultado_masculino);

}
else if (genero =='f'||genero =='F')
{
resultado_feminino = (62.1 * altura) -44.7;
printf ("O RESULTADO E %1f,",resultado_feminino);

}
}

//Questão 7
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
int a,b,c,d,calculo_a_b,calculo_c_d,calculo_par;
printf ("[ESCREVA UM VALOR PARA A, PARA B, PARA C E PARA D]\n");
scanf ("%i%i%i%i",&a,&b,&c,&d);
calculo_c_d = c + d;
calculo_a_b = a + b;
if (b>c && d>a && c + d > a + b)
{
calculo_par = a%2;
printf ("VALORES ACEITOS");
}
else
{
printf("[VALORES NEGADOS]");
}
}

//Questão 8
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){

float valor, tributo, resultado;
char a [2];
printf ("Digite o valor do produto\n");
scanf ("%f", &valor);
printf ("Digite a silga do seu estado\n");
scanf ("%s",&a);
getchar();

if (a == "sp" || a == "SP"){

tributo = valor * 12;
resultado = valor + tributo;

printf ("o valor do produto com imposto é %f",resultado);
}
else if ( a == "mg" || a == "MG"){

tributo = valor * 7;
resultado = valor + tributo;

printf ("o valor do produto com imposto é %f",resultado);
}

else if ( a == "ms" || a == "MS"){

tributo = valor * 8;
resultado = valor + tributo;

printf ("o valor do produto com imposto é %f",resultado);
}

else if ( a == "rj" || a == "RJ"){

tributo = valor * 15;
resultado = valor + tributo;

printf ("o valor do produto com imposto é %f",resultado);
}

}

//Questão 9
#include <string.h>
#include <stdio.h>
int main (void){

int idade;
printf ("[DIGITE A IDADE DO NADADOR]\n");
scanf ("%i", &idade);
if (idade >=1 && idade <=4)
{
printf ("[BABY SHARK]");
}
else if (idade >=5 && idade <=7)
{
printf ("[INFANTIL A]");
}
else if (idade >=8 && idade <=10)
{
printf ("[INFANTIL B]");
}
else if (idade >=14 && idade <=17)
{
 printf ("[JUVENIL]");
}
else if (idade >=18)
{
 printf ("[SENIOR]");
}
}

//Questão 10
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void) {
int n1,n2,n3, geometrica,aritimetica;
float conta,ponderada,harmonica;
char a;
printf ("[DIGITE 3 NUMEROS INTEIROS PARA SUA OPERAcAO]\n");
scanf ("%i%i%i",&n1,&n2,&n3);
getchar();
printf ("[DIGITE 1 PARA OPERAcAO GEOMETRICA, 2 PARA PONDERADA, 3 PARA HARMONICA E 4 PARA ARITIMETICA]");
scanf ("%c",&a);

if (a == '1'){

geometrica = n1 * n2 * n3;
printf ("[O RESULTADO DA EQUAcAO GEOMETRICA E %i]",geometrica);
}
else if (a == '2'){

ponderada = ( n1 + (2*n2) + (3*n3) ) /6;
printf ("[O RESULTADO DA EQUAcAO PONDERADA E %f.1]",ponderada);
}

else if ( a == '3') {

conta = (1/n1) + (1/n2) + (1/n3);
harmonica = 1/conta;
printf ("[O RESULTADO DA EQUAcAO HARMONICA E %i]",harmonica);
}

else if ( a == '4'){

aritimetica = (n1 + n2 + n3)/3;
printf ("[O RESULTADO DA EQUAcAO ARITIMETICA E %i]",aritimetica);

}

}

//Questão 11
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void){

float x,y;

printf ("De um valor para o eixo x");
scanf ("%f",&x);
printf ("De um valor para o eixo y");
scanf ("%f",&y);

if ( x ==0 && y==0)
printf ("Eixo de partida");

else if ( x < 0 && y < 0)
printf ("Quadrante 3");

else if ( x < 0 && y > 0 )
printf ("Quadrante 2");

else if ( x > 0 && y > 0)
printf ("Quadrante 1");

else if ( x > 0 && y < 0)
printf ("Quadrante 4");

}

//Questão 12
#include <stdio.h>
int main (void){
int mes;
printf ("[DIGITE O MES]");
scanf ("%d",&mes);
if (mes==1)
printf ("Janeiro");
 else if (mes ==2)
  printf ("Fevereiro");
   else if (mes ==3)
    printf ("Março");
     else if (mes==4)
      printf ("Abril");
       else if (mes ==5)
        printf ("Maio");
         else if (mes ==6)
          printf ("Junho");
           else if (mes ==7)
            printf ("Julho");
             else if (mes ==8)
              printf ("Agosto");
               else if (mes ==9)
                printf ("Setembro");
                 else if (mes ==10)
                  printf ("Otubro");
                   else if (mes == 11)
                    printf ("Novembro");
                     else if (mes ==12)
                      printf ("Dezembro");

//Questão 13
#include <stdio.h>
int main (void){
int mes;
printf ("[DIGITE O MES]");
scanf ("%d",&mes);
switch (mes)
{
case 1: printf ("Janeiro"); break;
case 2: printf ("Fevereiro"); break;
case 3: printf ("Março"); break;
case 4: printf ("Abril"); break;
case 5: printf ("Maio"); break;
case 6: printf ("Junho"); break;
case 7: printf ("Julho"); break;
case 8: printf ("Agosto"); break;
case 9: printf ("Setembro"); break;
case 10: printf ("Otubro"); break;
case 11: printf ("Novembro"); break;
case 12: printf ("Dezembro"); break;

}

}

//Questão 14
#include <stdio.h>
#include <math.h>
int main (void)
{

int dia;
printf ("Escreva um numero de 1 a 7\n");
scanf ("%i",&dia);
getchar();

switch (dia)
{
case 1: printf ("Domingo"); break;
case 2: printf ("Segunda"); break;
case 3: printf ("TerSa"); break;
case 4: printf ("Qaurta"); break;
case 5: printf ("Quinta"); break;
case 6: printf ("Sexta"); break;
case 7: printf ("Sabado"); break;
default : printf ("Operador Invalido");
}
}

//Questão 15
#include <stdio.h>
#include <math.h>
int main (void)
{

int ddd;
printf ("[DIGITE SEU DDD+]\n");
scanf ("%i",&ddd);
getchar();

switch (ddd)
{
case 61: printf ("[BRASILIA]"); break;
case 71: printf ("[SALVADOR]"); break;
case 11: printf ("[SAO PAULO]"); break;
case 21: printf ("[RIO DE JANEIRO]"); break;
case 32: printf ("[JUIZ DE FORA]"); break;
case 19: printf ("[CAMPINAS]"); break;
case 27: printf ("[VITORIA]"); break;
case 31: printf ("[BELO HORIZONTE]"); break;
default : printf ("Operador Invalido");
}
}

//Questão 16
#include <stdio.h>
int main (void)
{

int num1,num2,resultado;
char a;
printf ("DIGITE UM NUMERO E EM SEGUIDA OUTRO\n");
scanf("%i%i",&num1,&num2);
printf ("DIGITE O COMANDO DE OPERAsaO DESEJADO\n");
getchar();
scanf ("%c",&a);

switch (a)

{

case '+' : resultado = num1+num2;
printf ("Resultado e %i",resultado); break;

case '-': resultado = num1-num2;
printf ("Resultado e %i",resultado); break;

case '/': resultado = num1/num2;
printf ("Resultado e %i",resultado); break;

case '*': resultado = num1*num2;
printf ("Resultado e %i",resultado); break;

default: printf ("Operado Invalido");

}

}

//Questão 17
#include <stdio.h>
#include <math.h>
int main (void)
{
int n1,calculo1,calculo2;
printf ("[DIGITE O NUMERO DESEJADO]\n");
scanf ("%d",&n1);

calculo1 = n1%3;
calculo2 = n1%5;
getchar();

switch (calculo1){


case 0 : printf ("[numero divisivel por 3]");
default : printf ("[NUMERO NAO DIVISIVEL POR 3]");

}

switch (calculo2){


case 0 : printf ("[numero divisivel por 5]");
default : printf ("[NUMERO NAO DIVISIVEL POR 5]");

}

}

//Questão 18
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void){

int numero,c1,c2,c3,c4,c5,c6;
printf ("[ESCOLHA ENTRE OS NÚMEROS 100, 50, 20, 10, 5 E 2] \n");
scanf ("%d",&numero);

switch (numero){
	case 100 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 50 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 10 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 5 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	case 2 : 
	c1 = numero/1;
	c2 = numero/0.50;
	c3 = numero/0.25;
	c4 = numero/0.10;
	c5= numero/0.05;
	c6 = numero/0.01;
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 REAL, PARA SE OBTER %d REAIS\n",c1,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 50 CENTAVOS, PARA SE OBTER %d REAIS \n",c2,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 25 CENTAVOS, PARA SE OBTER %d REAIS \n",c3,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 10 CENTAVOS, PARA SE OBTER %d REAIS \n",c4,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 05 CENTAVOS, PARA SE OBTER %d REAIS \n",c5,numero);
	printf ("SERAO NECESARIOS %d MOEDAS DE 01 CENTAVO, PARA SE OBTER %d REAIS \n",c6,numero);
	break ;
	
	default : printf ("OPERADOR INVALIDO");
	
	
	
}
}

//Questão 19

#include<stdio.h>

int main (){

float n1,n2,n3,n4,resultado,media;

printf ("[DIGITE SUA NOTA 1]\n");
scanf ("%f",&n1);

printf ("[DIGITE SUA NOTA 2]\n");
scanf ("%f",&n2);


printf ("[DIGITE SUA NOTA 3]\n");
scanf ("%f",&n3);

printf ("[DIGITE SUA NOTA 4]\n");
scanf ("%f",&n4);

resultado = (n1*2) + (n2*3) + (n3*4) +(n4);

if (media <= 4.9)
	printf ("[ALUNO REPROVADO]\n");

else if (media >= 5 && media <=6.9)
 printf ("[ALUNO EM EXAME]\n");
 
 else if (media > 7 )
 printf ("[ALUNO APROVADO]\n");
}

//Questão 20
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void) {

float a,b,c,d,delta,x1,x2,calculo;

printf ("[ax^2 + bx + c = 0]\n");

printf ("\n[DE UM VALOR PARA A]"); 
scanf ("%f",&a);

printf ("\n[DE UM VALOR PARA B]\n"); 
scanf ("%f",&b);

printf ("\n[DE UM VALOR PARA C]"); 
scanf ("%f",&c);

printf ("f (x) = %fx^2 + %fx + %f",a,b,c);

delta = (b*b) - 4 * a * c;

if (delta < 0){

printf ("[DELTA NAO POSSUI RAIZ REAL]");
}
else  {

 x1 = (-b - sqrt(delta)) / (2 * a); 
 x2 = (-b + sqrt(delta)) / (2 * a);
 
 printf ("[O VALOR DE DELTA É %f]\n",delta);
 printf ("[O VALOR DE X' E %f ]\n",x1);
 printf ("[O VALOR DE X'' E %f ]\n",x2);
 
}
}


