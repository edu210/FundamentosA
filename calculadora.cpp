//Nombre: Edu Hurtado Arce
//curso: 1"A"
//docentes: stalin farncis




#include<iostream>
using namespace std;

int main()
{
	float e,g,h,a,d,r;
	//Ingreso de datos
	cout<<"Ingrese en valor de e=:";
	cin>>e;
	cout<<"Ingrese en valor de g=:";
	//Operaciones 
	cin>>g;
	h=e+g;
	a=e*g;
	d=e/g;
	r=e-g;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<e<<" + "<<g<<" = "<<h<<endl;
	cout<<"Las multiplicacion de "<<e<<" * "<<g<<" = "<<a<<endl;
	cout<<"Las division de "<<e<<" / "<<g<<" = "<<d<<endl;
	cout<<"Las resta de "<<e<<" - "<<g<<" = "<<r<<endl;
	return 0 ;

}
