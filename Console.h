// Console.h
#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <string>
#include "MemberHandler.h"
#include "BikeHandler.h"
#include "Member.h"

using namespace std;

class Console {
private:
    Database& db;
    MemberHandler memberHandler;
    BikeHandler bikeHandler;
    bool isLoggedIn;
    Member currentUserId;

public:
    Console(Database& database);
    void run();

private:
    void displayMenu();
};

#endif
