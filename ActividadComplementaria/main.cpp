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
  public:
      Device(double, int, string);
      Device(string, double, int);
      virtual void Print();
      void Work();
      void UseEnergy();
      void TurnOff();
};

class Processor : public Device{
  private:
    int genProcessor;
    float GHrz;
  public:
      Processor(double, int, string, int, float);
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
      Smartphone(int, int, string, int, float, string);
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
Device::Device(string Desc,double price, int cod){
  
    this->descDevice=Desc;
    this->priceDevice= price;
    this->codDevice=cod;
  

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



Alumno::Alumno(int _edad,int _dni,string _nombre,int _codigoAlumno,float _nota,int _semestre): Persona(_edad,_dni,_nombre){
  codigoAlumno= _codigoAlumno;
  nota= _nota;
  semestre= _semestre;

}
void Alumno::leer (){

  cout<<"Soy : "<<nombre<<" y estoy leyendo."<<endl;

}
void Alumno::atender (){

  cout<<"Soy : "<<nombre<<" y estoy atendiendo."<<endl;

}

void Alumno:: mostrar(){

  Persona::mostrar();
  cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
  cout<<"nota: "<<nota<<endl;
  cout<<"Semestre: "<<semestre<<endl;

}
void Alumno::resolver (){

  cout<<"Soy : "<<nombre<<" y estoy saltando."<<endl;

}

Profesor::Profesor(int _edad,int _dni,string _nombre,int _codigoProfesor,float _sueldo,string _curso): Persona(_edad,_dni,_nombre){
  codigoProfesor= _codigoProfesor;
  sueldo= _sueldo;
  curso= _curso;

}
void Profesor::Dictarclases (){

  cout<<"Soy : "<<nombre<<" y estoy dictando clases."<<endl;

}
void Profesor::Ponernotas (){

  cout<<"Soy : "<<nombre<<" y estoy poniendo notas."<<endl;

}
void Profesor::resolver (){

  cout<<"Soy : "<<nombre<<" y estoy poniendo notas."<<endl;

}
void Profesor:: mostrar(){

  Persona::mostrar();
  cout<<"Codigo Profesor: "<<codigoProfesor<<endl;
  cout<<"Sueldo: "<<sueldo<<endl;
  cout<<"Curso: "<<curso<<endl;

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
 
    system("PAUSE");
    

}









int main() {
  int v;

  Persona *vector[3];
  
  vector[0] = new Alumno(15,456128995,"Adolfo",86521,12.5,2);

  vector[0]->mostrar();

  cout<<"--------------------------------"<<endl;


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
