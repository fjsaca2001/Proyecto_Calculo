// Importacion de liberias necesarias
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	int n,op,b1,b,c;
	double y;
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
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			b1 = n / 2;
			b = -1*b1;
			cout<<"F(x) = (x^3-2x^3-3x)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = b; i <= b1 ; i++){
			 	// pow(base,exponente) = Traducion de potencia 
				y = ((pow(i,3)) - (2*(pow(i,3))) - (3*i));
				cout<<" "<<i<<"    ||    "<<y<<endl;
			}   	
			break;
		case 2:
			// F(x) = (-2x + 3) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			b1 = n / 2;
			b = -1*b1;
			cout<<"F(x) = (-2x + 3)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = b; i <= b1 ; i++){
				int y = ((-2*(i))+3);
				cout<<i<<"    ||    "<<y<<endl;
			}  
			break;
		case 3:
			// F(x) = (3x^3-18x^2+33x-18)/(x^2+x-2)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			b1 = n / 2;
			b = -1*b1;
			cout<<"F(x) = (3x^3-18x^2+33x-18)/(x^2+x-2)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = b; i <= b1 ; i++){
				if(i == -2 || i == 1){
					i++;
					b1++;
				}
			 	// pow(base,exponente) = Traducion de potencia 
				y = ((3*pow(i,3))-(18*pow(i,2))+(33*i)-(18))/((pow(i,2))+(i-2));
				cout<<i<<"    ||    "<<y<<endl;
			}  
			break;
		case 4:
			// F(x) = (3x^3+1)/(x²-1)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			b1 = n / 2;
			b = -1*b1;
			cout<<"F(x) = (3x^3+1)/(x^2-1)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = b; i <= b1 ; i++){
				if(i == -1 || i == 1){
					i++;
					b1++;
				}
			 	// pow(base,exponente) = Traducion de potencia 
				y = ((3*pow(i,3))+(1))/((pow(i,2))-(1));
				cout.precision(3);
				cout<<i<<"    ||    "<<y<<endl;
			}  
			break;
		case 5:
			//F(x) = (3(x-3)(x-2))/(x+2)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			b1 = n / 2;
			b = -1*b1;
			cout<<"F(x) = (3(x-3)(x-2))/(x+2)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = b; i <= b1 ; i++){
				if(i == -2){
					i++;
					b1++;
				} 
				y = (3*(i-3)*(i-2))/(i+2);
				cout.precision(3);
				cout<<i<<"    ||    "<<y<<endl;
			}  
			break;
		case 6:
			//F(x) = log2 (x) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			cout<<"F(x) = log2 (x)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = 1; i <= n ; i++){
				y = log2(i);
				cout.precision(3);
				cout<<i<<"    ||    "<<y<<endl;
			}  
			break;
		case 7:
			// F(x) = log ((x+1))/((x-2))
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			n += 2;
			cout<<"F(x) = log((x+1))/((x-2))\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = 3; i <= n ; i++){
				y = i+1;
				y /= i-2;
				y = log10(y);
				cout.precision(3);
				cout<<i<<"    ||    "<<y<<endl;
			}  
			break;
		case 8:
			// F(x) = ln(x)
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			cout<<"F(x) = ln(x)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = 1; i <= n ; i++){
				y = log10(i)/log10(2.7281);
				cout.precision(3);
				cout<<i<<"    ||    "<<y<<endl;
			}
			break;
		case 9:
			// F(x) = log(sqrt((4-x))) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"Ingrese el valor total para x: ";
			cin>>n;
			cout<<"F(x) = log(sqrt((4-x)))\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			c = 4;
			for(int i = 1; i <= n ; i++){
				c--;
				y = sqrt(4-c);
				y = log10(y);
				cout.precision(3);
				cout<<c<<"    ||    "<<y<<endl;
			}  
			break;
		case 10:
			// F(x) = ln(25-x²) 
			// Requerimiento de dato principal para la cantidad para x
			cout<<"F(x) = ln(25-x^2)\n";
			cout<<"Tabla de valores\n";
			cout<<"x     ||   Y "<<endl;
			for(int i = -4; i <= 4 ; i++){
				y = (25)-(pow(i,2));
				y = log10(y)/log10(2.7281);
				cout.precision(3);
				cout<<i<<"    ||    "<<y<<endl;
			} 
			break;	
		default:
			cout<<"Verifique";
	}
	system("pause");
	return 0;
}
	
