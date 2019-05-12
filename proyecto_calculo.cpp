// Importacion de liberias necesarias
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n,op;
	cout<<"******************************************************************";
	cout<<"\n**\t       Calculador de valores para X   	               	**";
	cout<<"\n**\t       Seleccione segun corresponda    	            	**";
	cout<<"\n** -> 1.  F(x) = (x^3-2x^3-3x)                                  **";
	cout<<"\n** -> 2.  F(x) = (-2x + 3)                                      **";	
	cout<<"\n** -> 3.  F(x) = (3x^3-18x^2+33x-18)/(x^2+x-2)                  **";
	cout<<"\n** -> 4.  F(x) = (3x^3+1)/(x^2-1)                               **";
	cout<<"\n** -> 5.  F(x) = (3(x-3)(x-2))/(x+2)                            **";
	cout<<"\n** -> 6.  F(x) = log2 (x)                                       **";
	cout<<"\n** -> 7.  F(x) = log ((x+1))/((x-2))                            **";
	cout<<"\n** -> 8.  F(x) = ln(x)                                          **";
	cout<<"\n** -> 9.  F(x) = log(sqrt((4-x)))                               **";
	cout<<"\n** -> 10. F(x) = ln(25-x^2)                                     **";
	cout<<"\n******************************************************************\n";
	cin>>op;
	while(op < 1 && op >10){
		cout<<"Dato incorrecto. Rango admitido [1 - 10]";
		cin>>op;
	}
	switch(op){
		case 1:
			// F(x) = (x^3-2x^3-3x)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			int b = n / 2;
			for(int i = b){
				
			}   	
		break;
		case 2:
			// F(x) = (-2x + 3) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 3:
			// F(x) = (3x^3-18x^2+33x-18)/(x^2+x-2)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 4:
			// F(x) = (3x^3+1)/(x²-1)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 5:
			//F(x) = (3(x-3)(x-2))/(x+2)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 6:
			//F(x) = log2 (x) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 7:
			// F(x) = log ((x+1))/((x-2))
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 8:
			// F(x) = ln(x)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 9:
			// F(x) = log(sqrt((4-x))) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;
		case 10:
			// F(x) = ln(25-x²) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";cin>>n;
			
		break;	
		default:
			cout<<"Verifique";
	}
	getch();
	return 0;
}
	
