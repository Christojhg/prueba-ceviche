#include <iostream>
#include <conio.h>
using namespace std;

int variable;

void DecimalBinario(int numero){
    if(numero>1)
        DecimalBinario(numero/2);
    cout<<numero%2;
}

void Binariodec(int numero){
    int digito, posicion = 0, resultado=0;
    int multiplos[] = {1,2,4,8,16,32,64,128,256};
    while(numero>0){
            //%10 porque vamos a utilizar el ultimo numero de la secuencia escrita
        digito=numero%10;
        if(digito==1){
            resultado=resultado+multiplos[posicion];
        }
        posicion++;
        //Se deja el digito anterior y se usa el siquiente
        numero /=10;
    }
    cout<<resultado;
}

void DecHexa(int num){
    int digitoex[20];
    int residuo, resultado, i = 0;
    do
    {
        residuo = num % 16;
        resultado = num / 16;
        digitoex[i] = residuo;
        num = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El numero en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }
    }
    cout << endl;
}


void menu(int op){
switch(op){
case 1:
    int numero;
    do{
    cout<<"Ingrese numero: ";
    cin>>numero;
    cout<<endl;
    if(numero<0)
        cout<<"NUMERO NO VALIDO, INGRESE NUMERO : ";
    }while(numero<0);
    cout<<"El numero en binario es : ";DecimalBinario(numero);
    cout<<endl;
    cout<<endl;
    system("pause");
    break;

case 2:
    int num;
    do{
    cout<<"Ingrese numero: ";
    cin>>num;
    cout<<endl;
    if(num<0)
        cout<<"NUMERO NO VALIDO, INGRESE NUMERO : ";
    }while(num<0);
    cout<<"El numero en decimal es : ";Binariodec(num);
    cout<<endl;
    cout<<endl;
    system("pause");
    break;

case 3:
    int nume;
    do{
    cout<<"Ingrese numero: ";
    cin>>nume;
    cout<<endl;
    if(num<0)
        cout<<"NUMERO NO VALIDO, INGRESE NUMERO : ";
    }while(num<0);

    DecHexa(nume);
    cout<<endl;
    cout<<endl;
    system("pause");
    break;

default:
    break;

}
}
int main()
{
    system("color f1");
    int numero;
    do{
    cout<<"1.- Numero decimal a binario\n";
    cout<<"2.- Numero binario a decimal\n";
    cout<<"3.- Numero decimal a hexadecimal\n";
    cout<<"4.- Salir\n";
    cout<<"Ingrese opcion: ";
    cin>>numero;
    system("cls");
    cout<<endl;
        menu(numero);
    }while(numero!=4);
    return 0;
}
