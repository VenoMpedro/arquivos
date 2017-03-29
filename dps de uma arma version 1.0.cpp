
#include <iomanip>
#include <conio.h>
#define PORC 0.36017569   //porc = porcentagem, necessa caso a porcentagem padraio do upgrade de +10 do jogo.
// a diretiva define simplismente substitue o texto  porc pelo numero depois dele
                       
#include <iostream>                       
using namespace std;
int main(int argc, char** argv){
    float numero, resultado, inte, intel, magic, att, comp, resul2,n1,n2,;
    int operacao;
    char resposta;
    char op;
    
    cout<< setfill('.'); 
    cout<< setprecision(5);
    cout<<" version (1.5) Programa criado para usuarios de magias \n by: VenomLilium of game:Riders of Icarus \n"<<endl;
    do{cout<<" \xdb Quantos de DPS tem sua arma? (coloque ponto no lugar de virgula) \nR: ";
    cin >> numero;
    
    resultado=numero*PORC;
    if ( numero >= 1000) { //somente no caso se o numero for maior, o desenho vai fechar ele inteiro
         cout<< "\n\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
    cout<< "\n\xBA "<<numero<<"  ""\xBA";
    cout<< "\n\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC \n\n";
}
    else {
     cout<< "\n\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xBB\     UpMax \t \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xcd\xcd\xBB";        
    cout<< "\n\xBA "<<numero<<"  ""\xBA *************** \xBA "<<numero+(resultado*2)<<" \xBA";
    cout<< "\n\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xBC  \t\t \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xcd\xcd\xBC \n\n";
      
}   

    cout<<numero<<" + "<<resultado<<" usando upgrade (+10) total = "<<setw (15)<<numero+resultado<<" de DPS \n"<<endl;
     cout<<numero<<" + "<<resultado*2<<" usando upgrade (+20) total = "<<setw (15)<<numero+(resultado*2)<<" de DPS \n"<<endl;
     cout<<" DIGITE: \n \xdb 1 para adicionar atributos na arma\n\n \xdb 2 para comparar com outra arma \n\n \xdb 3 Calculadora\n qualquer outro numero para finalizar"<<endl;
     cin>>operacao;
     
     switch (operacao){
            case 1:
            cout<<" total de intellgence : \nR: ";
            cin>>intel;
            cout<<" total de Magic attack : \nR: ";
            cin>>magic;
            att=magic+(intel*1.5);
            cout<<numero<<" + atributos de : "<<att<< " total :"<<numero+att<<endl;
            break;
            case 2:
            cout<<" Dps da arma que ira comparar"<<endl;
            cin>>comp;
            cout<<"total do seu Dps \"Atual\""<<endl;
            cin>>numero;
            resul2=numero-comp;
            if (numero>=comp){
            cout<<" Sua weapom ganha com +"<<resul2<<endl;
            }
            else
            cout<<"sua arma perde com -"<<resul2<<endl;
            break;
            case 3:
                 cout<<" Digite: numero operador numero= ";
                 cin >> n1 >> op>> n2;
                 switch(op){ // quando coloquei esse  switch em linhas anteriores deu erro
                 case '+': cout << n1 + n2; break;
                 case '-': cout << n1 - n2; break;
                 case 'x' :
                 case '*' :      cout << n1 * n2; break;
                 case '\\':
                 case '/' : cout<< n1 / n2; break;
                 default  : cout<< "Operador desconhecido" ; 
                 }         
            }
     cout<<" Deseja continuar (s/n)? "<<endl;
     cout<<" \n\n\n";
     }      
      while (getch()=='s');
    system("pause");
    return 0;
} 


