#ifndef MEMBERHANDLER_H
#define MEMBERHANDLER_H

#include <iostream>  
#include <string>
#include "Database.h"
#include "Member.h"

using namespace std; 

class MemberHandler {
private:
    Database& db; 

public:
    MemberHandler(Database& database);
    void SignUp(const string& id, const string& password, const string& phoneNumber);
    Member LogIn(const string& id, const string& password);
};

#endif
