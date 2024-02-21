#include "persona.cpp"
#include <iostream>

using namespace std;

class cliente : persona {
	//atributos
	private :string nit;
	//constructor
	
	public :
		cliente(){
		}
			
			cliente (string nom,string ape,string dir,int tel,string n) : persona (nom,ape,dir,tel){
				nit = n;
			}
			
	void mostrar (){
		cout<<"________________________"<<endl;
		cout<<nit<<";"<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		
		
	}	
};
