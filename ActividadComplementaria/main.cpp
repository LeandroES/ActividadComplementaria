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
int _insert(int a);

class Device{
    
  public:
    double priceDevice;
    int codDevice;
    string descDevice;
    Device();
    Device(double, int, string);
    Device(string, double, int);
    virtual void Print()=0;
    virtual void Work()=0;
    virtual void UseEnergy()=0;
    virtual void TurnOff();
};

class Processor : public Device{
  private:
    int genProcessor;
    float GHrz;
  public:
    Processor();
    Processor(int, float);
    void Print();
    void Process();
    void Read();
    void Write();
    
};

class Smartphone : public Device{
  private:
    int numSerieS;
    string specsS;
    string Gamma;
  public:
    Smartphone();
    Smartphone(int, string, string);
    void Print();
    void Call();
    void Write();
    void TakePhotos();
    void Charge();
      
};


Device::Device(double price,int cod,string Desc){

    
    this->priceDevice= price;
    this->codDevice=cod;
    this->descDevice=Desc;
    
    
}
void Device::TurnOff(){

  cout<<"Turning off..."<<endl;

}
void Device::UseEnergy(){

  cout<<"Using significant energy..."<<endl;

}

void Device::Print(){
  cout<<"Description: "<<descDevice<<endl;
  cout<<"Code: "<<codDevice<<endl;
  cout<<"Price: "<<priceDevice<<endl;

}



Processor::Processor(int genProcessor, float GHrz){
    
    this->genProcessor=genProcessor;
    this->GHrz=GHrz;
    
}
void Processor::Process(){

    cout<<"Processing..."<<endl;

}
void Processor::Read(){

    cout<<"Reading..."<<endl;

}

void Processor::Write(){
    
    cout<<"Writing..."<<endl;
    
}

void Processor::Print(){

    Device::Print();
    cout<<"Processor generation: "<<genProcessor<<endl;
    cout<<"Speed in GHz: "<<GHrz<<endl;

}

Smartphone::Smartphone(int numSerieS, string specsS, string Gamma){
  
    this->numSerieS=numSerieS;
    this->specsS=specsS;

}
void Smartphone::Call(){

  cout<<"Calling..."<<endl;

}
void Smartphone::Write (){

  cout<<"Writing..."<<endl;

}
void Smartphone::TakePhotos(){

  cout<<"Taking pics..."<<endl;

}
void Smartphone::Print() {

    Device::Print();
    cout<<"Serial Number: "<<numSerieS<<endl;
    cout<<"Specifications: "<<specsS<<endl;
    cout<<"Gamma: "<<Gamma<<endl;
    
}
template<class TipoD >
void mostrarMayor(TipoD numero);





int _insert(int a){
 vector<int> v4{1,2,3,4,5};
    vector<int> v5{6,7,8,9,10};
    v4.insert(v4.end(),v5.begin(),v5.begin()+5);
    for(int i=0;i<v4.size();i++)
    cout<<v4[i]<<" ";
    return 0;
 
}
template<class TipoD >
void mostrarMayor(TipoD numero){

  float maximo[5], max=0;
     numero=0;
    printf("Ingrese 5 valores para determinar el numero maximo\n");
 
    for (int i = 1; i <= 5; i++){
 
        printf("valor %d :\n",i);
        scanf("%f",&maximo[i]);
 
        if(maximo[i] > max){
            max = maximo[i];
            numero = i;
        }
 
    }
 
    printf("El numero maximo es: %.2f\n y fue el numero %d en ser ingresado",max,numero);

}

int main() {
  int v;

  Device *vector[3];
    vector[0] = new Processor(15,456128995,"Adolfo",86521,12.5,2);

    
    vector[0]->Print();
    printf("/r/n");
    cout<<endl<<endl;


  vector[0] = new Profesor(35,73945202,"Maria",23546,25601.50,"Matematica");

  vector[0]->mostrar();

  cout<<"--------------------------------"<<endl;
  
  vector[0] = new Persona("Gustavo",73947504,20);

  vector[0]->mostrar();
   cout<<"--------------------------------"<<endl;

  _insert(v);

  cout<<"--------------------------------"<<endl;
  
    mostrarMayor(10);

  system ("pause");
  return 0;
  
}
