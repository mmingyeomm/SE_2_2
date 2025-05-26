#include "Bike.h"

Bike::Bike(){}

Bike::Bike(string Id, string ModelName){
    this->Id = Id;
    this->ModelName = ModelName; 
}

void  Bike::printBike() {

    cout << this->Id << endl;
    cout << this->ModelName << endl; 
} 