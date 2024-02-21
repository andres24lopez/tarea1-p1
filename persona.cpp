#include<iostream>
using namespace std;

class persona {
	//atributos 
	
	protected : string nombres,apellidos,direccion;
		int telefono;
		
		//construcot 
		protected :
			persona (){
			}
				persona (string nom,string ape,string dir,int tel){
					nombres = nom;
					apellidos=ape;
					direccion =dir;
					telefono =tel;
					
				}
			
		
		//metodo
		
		void mostrar ();
};
