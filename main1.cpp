#include "cliente.cpp"
#include <iostream>
using namespace std;

main(){
	
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"ingresar nit: ";
	cin>>nit;
	cout<<"ingresar nombres: ";
	cin>>nombres;
	cout<<"ingresar apellidos: ";
	cin>>apellidos;

	cout<<"ingresar direccion: ";
	cin>>direccion;
	cout<<"ingresar telefono: ";
	cin>>telefono;
	
	cliente obj =cliente(nombres,apellidos,direccion,telefono,nit);
	
	obj.mostrar();
};

