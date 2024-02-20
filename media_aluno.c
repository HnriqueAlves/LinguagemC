/*
Neste programa iremos calcular a nota media do aluno. Teremos a entrada de 4 notas, depois sera feita o calculo da media onde iremos somar as notas e depois dividir por 4
se aluno tiver uma media acima ou igual a 7, então estara aprovado; caso o aluno tenha uma nota menor ou igual a 4 então o aluno estará
reprovado; caso contrario, estara em recuperação
*/
#include <stdio.h>

int main(){
 float n1,n2,n3,n4,md;
printf("Digite a primeira nota ");
scanf("%f" ,&n1);

printf("Digite a segunda nota ");
scanf("%f" ,&n2);

printf("Digite a terceira nota ");
scanf("%f" ,&n3);

printf("Digite a quarta nota ");
scanf("%f" ,&n4);

md = (n1+n2+n3+n4) /4;

printf("A nota media do aluno é %2.2f\n",md);

if(md >= 7){
    printf("aprovado\n");

}
else if(md <= 4){
    printf("reprovado\n");
}
else{
    printf("reprovado");

}
return 0;
}