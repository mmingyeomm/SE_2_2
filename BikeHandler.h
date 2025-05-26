#ifndef BIKEHANDLER_H
#define BIKEHANDLER_H

#include <iostream>  
#include <string>
#include "Database.h"
#include "Member.h"

using namespace std; 

class BikeHandler {
private:
    Database& db; 

public:
    BikeHandler(Database& database);
    int registerBike(Member currentUserId, string Id, string ModelName);
    void rentBike(Member currentUserId);
    void showRentalList(Member currentUserId);


};

#endif
