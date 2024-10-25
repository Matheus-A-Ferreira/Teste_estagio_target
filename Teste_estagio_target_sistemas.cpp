#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cstring>
#include <locale.h>

using namespace std;

bool is_square(int x){
    int temp = sqrt(x);
    if(x<0){
        return false;
    }else{
        if(temp*temp == x){
            //cout<<"true";
            return true;
        }else{
            //cout<<"false";
            return false;
        }
    }
}

bool fibonacci(int x){
    int test1 = 5*(x*x)+4;
    int test2 = 5*(x*x)-4;

    if(is_square(test1) || is_square(test2)){
        return true;
    }else{
        return false;
    }
}

void questao1(){
    int numero;

    cout<<"Quest�o 1:\n";
    cout<<"Digite um n�mero: ";
    cin>>numero;
    cin.ignore();

    if(fibonacci(numero)){
        cout<<"O n�mero "<<numero<<" faz parte da sequ�ncia de Fibonacci";
    }else{
        cout<<"O n�mero "<<numero<<" n�o faz parte da sequ�ncia de Fibonacci";
    }
}

void questao2(){
    string texto;
    int cont = 0;

    cout<<"Quest�o 2:\n";
    cout<<"Digite uma frase: ";
    getline(cin, texto);

    int tam = texto.length();

    for(int i=0; i<tam; i++){
        if (texto[i]=='a' || texto[i]=='A'){
            cont++;
        }
    }

    cout<<"A quantidade de vezes que a letra 'a' aparece, mai�scula ou min�scula, na frase indicada � "<<cont<<" vezes";
}

void questao3(){
    cout<<"Quest�o 3:\n";
    int indice = 12;
    int soma = 0;
    int k = 1;

    for(k; k<indice; k++){
        soma=soma+k;
    }

    cout<<soma;
    cout<<"\nAo final do processamento, soma ser� igual a "<<soma;
}

void questao4(){
    cout<<"Quest�o 4:\n";
    cout<<"a) 1, 3, 5, 7, [9] (de dois em dois)\n";
    cout<<"b) 2, 4, 8, 16, 32, 64, [128] (exponentes de 2)";
    cout<<"c) 0, 1, 4, 9, 16, 25, 36, [49] (quadrados perfeitos)\n";
    cout<<"d) 4, 16, 36, 64, [100] (quadrados perfeitos de dois em dois)\n";
    cout<<"e) 1, 1, 2, 3, 5, 8, [13] (fibonacci)\n";
    cout<<"f) 2, 10, 12, 16, 17, 18, 19, [200] (come�am com a letra 'D')";
}

void questao5(){
    cout<<"Quest�o 5:\n";
    cout<<"Deixando a porta das duas salas em que fui abertas, assim posso ver se a luz ligou mesmo sem ver as l�mpadas";
}

int main(){
    setlocale(LC_ALL, "");
    questao1();
    cout<<"\n\n";
    questao2();
    cout<<"\n\n";
    questao3();
    cout<<"\n\n";
    questao4();
    cout<<"\n\n";
    questao5();


    return 0;
}
