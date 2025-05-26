#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>  
#include <string>

using namespace std; 

enum role {
    ADMIN, 
    USER 
};

class Member {
public: 
    string Id; 
    role x; 
    string Password; 
    string PhoneNumber; 

public:
    Member();
    Member(string Id, role x, string Password, string PhoneNumber);
    void printMember();
};

#endif

