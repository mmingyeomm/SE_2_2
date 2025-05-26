#ifndef BIKE_H
#define BIKE_H

#include <iostream>  
#include <string>

using namespace std; 



class Bike {
public: 
    string Id; 
    string ModelName; 
    string currentOwner; 

public:
    Bike();
    Bike(string Id, string ModelName);
    void printBike();
};

#endif

