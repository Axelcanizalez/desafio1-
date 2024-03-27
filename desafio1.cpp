#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(){
	//variable a trabajar
	double hlaborales=0,renta=0.075,isss=0.054,seguro=12,horas,sueldo,total=0;
	string nombre,apellido,cargo;
	double total1=0,total2=0;
	//menu del programa
	cout<<"\n----------------------------------------------------------------------------";
	cout<<"\n\t\tCALCULO DE SUELDO FINAL DE EMPLEADO";
	cout<<"\n---------------------------------------------------------------------------";
	
	cout<<"\n\tingrese la siguiente informacion laboral";
	cout<<endl;
	cout<<"\n1.nombres:";         
	getline(cin,nombre);
	cout<<"\n2.apellido:";
	getline(cin,apellido);
	cout<<"\n3.cargo:";
	cin>>cargo;
	cout <<"\n4.costo hora:";
	cin>>horas; 
	cout<<"\n5.horas laboradas:";
	cin>>hlaborales;
	cout<<endl;
	cout<<"\n-----------------------------------------------------------------------------"<<endl;
	system("pause");//pausar el programa
	system("cls");//cambiar de pagina
	//menu secundario
	cout<<"\n*****************************************************************************";
	cout<<"\n\tEmpleado:"<<apellido<<" , "<<nombre;
	cout<<"\n\tcargo:"<<cargo;
	cout<<"\n*****************************************************************************";
	
	cout<<"\nsueldo inicial :$";cin>>sueldo;
	cout<<"\n(descuento de ley)";
	total=sueldo*renta,//haciendo operaciones del sueldo con la resta
	cout<<"\nRenta    :"<<"$ "<<total;
	total1=sueldo*isss;//haciendo operaciones con isss
	cout<<"\nISSS    :"<<"$ "<<total1;
	cout<<"\nSeguro de vida    :"<<"$ "<<seguro;//mostrar el valor de seguro
	cout<<endl;
	cout<<"\n*******************************************************************************";
	total2=sueldo-total-total1-seguro;//haciendo calculo para el sueldo a pagar
	cout<<"\nSueldo a pagar:"<<"$ "<<total2;//mostrando sueldo final
	
	
	
	
	
	
	getch();
	return 0;
}
