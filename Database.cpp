#include "Database.h"

Database::Database() : memberNum(0), bikeNum(0) {
    addMember("admin", ADMIN, "admin", "000-0000-0000");
}

void Database::addMember(string Id, role x, string Password, string PhoneNumber) {
    Member newMember(Id, x, Password, PhoneNumber);
    memberList[memberNum] = newMember;  
    std::cout << "Adding Member.." << std::endl;
    memberNum++; 
}

Member* Database::findMember(string input_Id, string input_Password) {
    for (int i = 0; i < memberNum; i++) {
        if (memberList[i].Id == input_Id) {
            if (memberList[i].Password == input_Password) {
                return &memberList[i]; 
            } else {
                continue; 
            }
        } 
    }
    return nullptr;
}



void Database::addBike(string Id, string ModelName) {
    Bike newBike(Id, ModelName); 
    BikeList[bikeNum] = newBike;
    std::cout << "Adding Bike.." << std::endl;
    bikeNum++; 
}



Bike* Database::findBike(string input_Id) {
    for (int i = 0; i < bikeNum; i++) {
        if (BikeList[i].Id == input_Id) {
            return &BikeList[i];
        }
    }
    return nullptr;
}


