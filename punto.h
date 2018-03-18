#include <iostream>
#ifndef PUNTO_H
#define PUNTO_H
using namespace std;
/*
Library "Punto"
V 1.0
author: enrico albertini
mail: itodev@gmail.com
HEADER-ONLY library
*/
class Punto{

	double x;
	double y;
	string label;

	public:
	    //costruttore di default
	    Punto(){
	        x = 0;
	        y = 0;
	    };
	    //costruttore per valori
		Punto(double x, double y){
            this -> y = y;
            this -> x = x;
		};
		// costruttore di copia
		Punto(const Punto& obj){
            this -> x = obj.x;
            this -> y = obj.y;
		};
		//MOSTRA LE COORDINARTE DEL PUNTO
		void show(){
            cout << label;
            cout << "x: " << this -> x << endl;
            cout << "y: " << this -> y << endl;
		};
		//GETTER
		double getx(){return this-> x;};
		double gety(){return this-> y;};
		//SETTER
	 	void setx(double x){this-> x = x;};
		void sety(double y){this -> y = y;};
		void setname(string);


} ;
#endif
