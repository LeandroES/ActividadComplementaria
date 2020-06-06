//
//  main.cpp
//  ActividadComplementaria
//
//  Created by Leandro Smirnovff on 6/5/20.
//  Copyright © 2020 Leandro Igor Estrada Santos. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <map>

using namespace std;
int Insert(int a);

class Device{   //--------> DEVICE
  public:
    double priceDevice;
    int codDevice;
    string descDevice;
    
    virtual void Print()=0;
    virtual void Work()=0;
    virtual void UseEnergy()=0;
    virtual void TurnOff()=0;
};

class Processor : public Device{ //--------> PROCESSOR
  private:
    int genProcessor;
    float GHrz;
  public:
    Processor();
    
    
    Processor(string descDevice, int codDevice, double priceDevice, float GHrz, int genProcessor){
        
        this->genProcessor=genProcessor;
        this->GHrz=GHrz;
        this->codDevice=codDevice;
        this->descDevice=descDevice;
        this->priceDevice=priceDevice;
        
    }
    
    void Process(){

        cout<<"Processing..."<<endl;

    }
    void Read(){

        cout<<"Reading..."<<endl;

    }

    void Write(){
        
        cout<<"Writing..."<<endl;
        
    }
    
    virtual void Print(){
        
        cout<<"Code: "<<codDevice<<endl;
        cout<<"Description: "<<descDevice<<endl;
        cout<<"Price: "<<priceDevice<<endl;
        cout<<"Processor generation: "<<genProcessor<<endl;
        cout<<"Speed in GHz: "<<GHrz<<endl;
        
    }
    
    virtual void Work(){

      cout<<"It works..."<<endl;

    }
    
    virtual void UseEnergy(){

      cout<<"Using significant energy..."<<endl;

    }
    
    virtual void TurnOff(){

      cout<<"Turning off..."<<endl;

    }
    
    
    
};

class Smartphone : public Device{
  private:
    int numSerieS;
    string specsS;
    string Gamma;
    
    friend Smartphone& operator++(Smartphone&);
    friend Smartphone& operator--(Smartphone&);
    
  public:
    Smartphone();
    Smartphone(string descDevice, int codDevice, double priceDevice, int numSerieS, string specsS, string Gamma){
        
        this->Gamma=Gamma;
        this->numSerieS=numSerieS;
        this->specsS=specsS;
        this->codDevice=codDevice;
        this->descDevice=descDevice;
        this->priceDevice=priceDevice;

    }
    
    Smartphone(const int codDevice, const int numSerieS){
        
        this->numSerieS=numSerieS;
        this->codDevice=codDevice;

    }
    
    
    Smartphone(string descDevice, int codDevice, double priceDevice, string specsS, int numSerieS, string Gamma){
      
        this->Gamma=Gamma;
        this->numSerieS=numSerieS;
        this->specsS=specsS;
        this->codDevice=codDevice;
        this->descDevice=descDevice;
        this->priceDevice=priceDevice;

    }
    Smartphone(string descDevice, int codDevice, double priceDevice, string specsS, string Gamma, int numSerieS){
      
        this->Gamma=Gamma;
        this->numSerieS=numSerieS;
        this->specsS=specsS;
        this->codDevice=codDevice;
        this->descDevice=descDevice;
        this->priceDevice=priceDevice;

    }
    
   void Call(){

      cout<<"Calling..."<<endl;

    }
    void Write (){

      cout<<"Writing..."<<endl;

    }
    void TakePhotos(){

      cout<<"Taking pics..."<<endl;

    }
    void Charge(){
        
        cout<<"Charge status: disabling..."<<endl;
        
    }
    
    virtual void Print() {

        cout<<"Code: "<<codDevice<<endl;
        cout<<"Description: "<<descDevice<<endl;
        cout<<"Price: "<<priceDevice<<endl;
        cout<<"Serial Number: "<<numSerieS<<endl;
        cout<<"Specifications: "<<specsS<<endl;
        cout<<"Gamma: "<<Gamma<<endl;
        
    }
    
    virtual void Work(){

      cout<<"It works..."<<endl;

    }
    
    virtual void UseEnergy(){

      cout<<"Using significant energy..."<<endl;

    }
    
    virtual void TurnOff(){

      cout<<"Turning off..."<<endl;

    }
      
};

//Sobrecarga de operadores Unarios:

Smartphone& operator++ (Smartphone& e) {
 e.priceDevice = e.priceDevice + (0.5*e.priceDevice);
 return e;
}
Smartphone& operator-- (Smartphone& e) {
 e.priceDevice = e.priceDevice - (0.5*e.priceDevice);
 return e;
}

//Funcion Generica:

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}



int main() {
    
    Processor p1("Intel i7",            123123, 1700.99,    10, 3.1);
    Processor p2("Intel i5",            134131, 1640.99,    8,  3.6);
    Processor p3("Intel i5",            252452, 1200.99,    7,  2.8);
    Processor p4("Intel i7",            467467, 1800.99,    9,  2.8);
    Processor p5("Celeron Dual core",   689689, 900.99,     3,  1.5);
    Processor p6("Intel i9",            981383, 3400.99,    10, 5.1);
    
    Smartphone s1("iPhone 6",       245245, 1670.99, 12345689, "Black Space",   "Baja");
    Smartphone s2("iPhone 6S",      245245, 1100.99, 12345689, "Gray",          "Baja");
    Smartphone s3("iPhone 6S Plus", 245245, 1300.99, 12345689, "black",         "Media");
    Smartphone s4("iPhone X",       245245, 2500.99, 12345689, "Blue Space",    "Alta");
    Smartphone s5("iPhone XS",      245245, 5200.99, 12345689, "Veige Space",   "Alta");
    Smartphone s6("iPhone SE",      245245, 6300.99, 12345689, "Fuchsia Space", "Baja");
    
    s1 = ++s1;
    s3 = ++s3;
    s5 = ++s5;
    
    s2 = --s2;
    s4 = --s4;
    s5 = --s6;
    
    cout<<"El precio del dispositivo: "<<s1.descDevice<<", ahora es: "<<s1.priceDevice<<endl;
    cout<<"El precio del dispositivo: "<<s3.descDevice<<", ahora es: "<<s3.priceDevice<<endl;
    cout<<"El precio del dispositivo: "<<s5.descDevice<<", ahora es: "<<s5.priceDevice<<endl;
    printf("\r\n");
    cout<<"El precio del dispositivo: "<<s2.descDevice<<", ahora es: "<<s2.priceDevice<<endl;
    cout<<"El precio del dispositivo: "<<s4.descDevice<<", ahora es: "<<s4.priceDevice<<endl;
    cout<<"El precio del dispositivo: "<<s6.descDevice<<", ahora es: "<<s6.priceDevice<<endl;
    
    return 0;
  
}
