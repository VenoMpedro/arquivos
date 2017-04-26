#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char** argv){
int a, b, c,m,v,d, operacao ,n1,n2,n3;
float x;

char resposta;
do{
	cout<<"Desenvolvido por: Pedro H.A de Souza \n"<<endl;
cout<<"Que operacao deseja fazer? Digite:\n \n1: para Adicao\t2: para Subtracao\t3: para Multiplicacao \t4: para Divisao \n5: para Regra de 3 obs: (nesse caso) ignore o primeiro e segundo valor que sera solicitado\n\n=>";
cin>>operacao;
cout<<"Digite o primeiro valor:";
cin>>a;
cout<<"Digite o segundo valor:";
cin>>b;
switch (operacao){
       case 1: c=a+b;
       break;
       case 2:
       c=a-b;
       break;
       case 3:
       c=a*b;
       break;
       case 4:
       c=a/b;
       break;
       case 5:
       	cout<<" Coloque nesse formato exemplo ( 100 metros =  5 reias se for \n 50 metros quanto custara (X) ) \n 100 metros => n1, 5 reais => n2 50 metros => n3,\n x => o valor quer voce quer descobrir "<<endl;
       	cout<<"Digite o valor de n1 :";
       	cin>>n1;
       	cout<<"Digite o valor de n2 ";
       	cin>>n2;
       	cout<<"Digite o valor de n3 ";
       	cin>>n3;
         x=(n2*n3)/n1;
       	cout<<"Resultado :"<<x<<endl;
       	break;
       default :
       cout<<" Voce digito um numero invalido "<<endl;
       }
       cout<<" o resultado e: "<<x<<endl;
       cout<<"deseja continuar (s/n)"<<endl;
       cin>>resposta;
      } while (getch()=='s');
        system ("pause");
        return 0;
        }
