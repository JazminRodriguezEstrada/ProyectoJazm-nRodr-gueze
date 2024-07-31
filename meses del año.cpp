#include <iostream>// Libreria de IO
using namespace std;// No repetir STD
int main () { //menú
    int mes;// Variable
    cout<<"Ingrese un numero de mes (1-12): "; // Imprimir
    cin>>mes; //Guardar variable
    switch(mes){ // Es el programa
    case 1: // Ingresar instrucciones
       cout<<"Enero"<<endl;
        break;// Pausa
    case 2:
    cout<<"Febrero" <<endl;
    break;
     case 3:
    cout<<"Marzo" <<endl;
    break;
     case 4:
    cout<<"Abril" <<endl;
    break;
     case 5:
    cout<<"Mayo" <<endl;
    break;
     case 6:
    cout<<"Junio" <<endl;
    break;
     case 7:
    cout<<"Julio" <<endl;
    break;
     case 8:
    cout<<"Agosto" <<endl;
    break;
     case 9:
    cout<<"Septiembre" <<endl;
    break;
     case 10:
    cout<<"Octubre" <<endl;
    break;
     case 11:
    cout<<"Noviembre" <<endl;
    break;
     case 12:
    cout<<"Diciembre" <<endl;
    break;
    default:// Cualquier valor
    cout<<"Numero de mes invalido"<<endl;

    return 0;// Para finalizar
    }
}

