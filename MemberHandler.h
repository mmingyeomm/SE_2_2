#include <iostream>  
#include <string>

using namespace std; 

class MemberHandler {
private:
    Database& db; 

public:
    MemberHandler(Database& database) : db(database) {}

    void SignUp(const string& id, const string& password, const string& phoneNumber) {
        db.addMember(id, USER, password, phoneNumber);
    }

    string Login(const string& id, const string& password) {
        Member* member = db.findMember(id, password);
        if (member != nullptr) {

            cout << member->getId() << endl; 

            
            return member->getId(); 
        } else {

            return "-1";
        }
    }
    
    void DeleteAccount() {
    }



};
