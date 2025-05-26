#include "Member.h"

Member::Member(){}

Member::Member(string Id, role x, string Password, string PhoneNumber){
    this->Id = Id;
    this->x = x;
    this->Password = Password; 
    this->PhoneNumber = PhoneNumber; 
}

void Member::printMember() {
    if (x != ADMIN) {
        cout << "error" << endl;
        return; 
    }
    cout << this->Id << endl;
    cout << this->Password << endl; 
    cout << this->PhoneNumber << endl; 
} 