#ifndef SEGMENTO_H
#define SEGMENTO_H
#include <math.h>
#include <string>
#include <iostream>
/*
Library "Segmento"
V 1.0
author: enrico albertini
mail: itodev@gmail.com
HEADER-ONLY library
*/
class segmento
{
        Punto A;
        Punto B;
        string label;
    public:
        //costruttore base
        segmento(){
            this-> A = Punto();
            this-> B = Punto();
        };
        segmento(Punto a,Punto b){
            A = a;
            B = b;
        };
        //costruttore di copia
        segmento(const segmento& other){
            A = other.A;
            B = other.B;
        };
        //restituisce la lunghezza dei
        double lenght(){
            double temp1 = A.getx() - A.gety();
            double temp2 = B.getx() - B.gety();
            return sqrt(temp1*temp1 + temp2*temp2) ;
        };
        //funzione setter per label con
        //overload per l'input tramite cin

        void setname(string s){
            label = s;
        };
        void setname(){
            //aggiungere trhow-catch e poi cancellare
            //questo commento
            cout << "inserire nome del segmento";
            cin >> label;
        };
};

#endif // SEGMENTO_H
