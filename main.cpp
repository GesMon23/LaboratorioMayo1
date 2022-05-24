#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string Nombres[5] = {"Juan Perez", "Luis Lopez", "Ramon Sanchez", "Alejandro Alvarez", "Eduardo Ramirez"};
	int Not[3];
	Not[0]=0;Not[1]=0;Not[2]=0;
	int op, i, Prom, SumaNot;
	char bucle='a';
	while (bucle!='N'){
		cout<<"LISTADO DE ALUMNOS"<<endl;
		for(i=0;i<5;i++){
			cout<<i+1<<". "<<Nombres[i]<<endl;
		}
		cout<<"SELECCIONE EL ALUMNO DE QUE DESEE VER LA NOTAS"<<endl;
		cin>>op;
		switch(op){
			case 1:
				Not[0]=97;Not[1]=58;Not[2]=86;
				break;
			case 2:
				Not[0]=60;Not[1]=55;Not[2]=69;
				break;
			case 3:
				Not[0]=100;Not[1]=96;Not[2]=99;
				break;
			case 4:
				Not[0]=50;Not[1]=61;Not[2]=65;
				break;
			case 5:
				Not[0]=98;Not[1]=68;Not[2]=75;
				break;
		}
		cout<<"Alumno: "<<Nombres[op-1]<<endl;
		for (i=0;i<3;i++){
			cout<<"Nota "<<i+1<<": "<<Not[i]<<endl;
		}
		cout<<endl;
		while(op!=0){
			cout<<"QUE DESEA REALIZAR?"<<endl;
			cout<<"1.PROMEDIO"<<endl;
			cout<<"2.NOTA MAS ALTA"<<endl;
			cout<<"3.NOTA MAS BAJA"<<endl;
			cout<<"0.SALIR DEL MENU"<<endl;
			cin>>op;
			switch(op){
				case 1:
					SumaNot=Not[0]+Not[1]+Not[2];
					Prom=SumaNot/3;
					cout<<"EL PROMEDIO ES DE: "<<Prom<<endl;
					break;
				case 2:
					if(Not[0]>Not[1]&&Not[0]>Not[2]){
						cout<<"LA NOTA MAS ALTA ES: "<<Not[0]<<endl;
					}
					else{
						if(Not[1]>Not[0]&&Not[1]>Not[2]){
							cout<<"LA NOTA MAS ALTA ES: "<<Not[1]<<endl;
						}
						else{
							cout<<"LA NOTA MAS ALTA ES: "<<Not[2]<<endl;
						}
					}
					break;
				case 3:
					if(Not[0]<Not[1]&&Not[0]<Not[2]){
						cout<<"LA NOTA MAS BAJA ES: "<<Not[0]<<endl;
					}
					else{
						if(Not[1]<Not[0]&&Not[1]<Not[2]){
							cout<<"LA NOTA MAS BAJA ES: "<<Not[1]<<endl;
						}
						else{
							cout<<"LA NOTA MAS BAJA ES: "<<Not[2]<<endl;
						}
					}
					break;
				
			}
			cout<<endl;
		}
	cout<<"DESEA SELECCIONAR OTRO ESTUDIANTE? S/N"<<endl;
	cin>>bucle;
	if(bucle='n')bucle='N';
	cout<<endl;
	}
	system("pause");
}
	
	
