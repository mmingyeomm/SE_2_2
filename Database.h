#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>  
#include <string>
#include "Member.h"
#include "Bike.h"

using namespace std; 

class Database {
private: 
    Member memberList[100];
    Bike BikeList[100]; 
    int memberNum; 
    int bikeNum; 

public: 
    Database();
    void addMember(string Id, role x, string Password, string PhoneNumber);
    Member* findMember(string input_Id, string input_Password);

    void addBike(string Id, string ModelName);
    Bike* findBike(string input_Id);


};

#endif





