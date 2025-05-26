#include "MemberHandler.h"

MemberHandler::MemberHandler(Database& database) : db(database) {}

void MemberHandler::SignUp(const string& id, const string& password, const string& phoneNumber) {
    db.addMember(id, USER, password, phoneNumber);
}

Member MemberHandler::LogIn(const string& id, const string& password) {
        Member* member = db.findMember(id, password);
        if (member != nullptr) {

            cout << member->Id << endl; 

            
            return *member;
        } else {

            return Member();
        }
}

