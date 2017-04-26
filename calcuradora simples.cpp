#include <iostream>
using namespace std;
int main(int argc, char** argv){
int a, b, c,m,v,d, operacao;
char resposta;


do{
cout<<"Que operacao deseja fazer? \n1. Adicao\t2. Subtracao\t3. Multiplicacao \t4.Divisao \n\n=>";
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
       default :
       cout<<" Voce digito um numero invalido "<<endl;
       }
       cout<<" o resultado e: "<<c<<endl;
       cout<<"deseja continuar (s/n)"<<endl;
       cin>>resposta;
      } while (resposta=='s');
        system ("pause");
        return 0;
        }
