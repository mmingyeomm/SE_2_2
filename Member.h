#include <iostream>  
#include <string>

using namespace std; 

enum role {
    ADMIN, 
    USER 
};

class Member {

    private: 
        string Id; 
        role x; 
        string Password; 
        string PhoneNumber; 
    public :

        Member(){}

        Member(string Id, role x, string Password, string PhoneNumber){
            this->Id = Id;
            this->x = x;
            this->Password = Password; 
            this->PhoneNumber = PhoneNumber; 
        }

        string getId() const { return Id; }
        string getPassword() const { return Password; }

        void printMember() {
            if (x != ADMIN) {
                cout << "error" << endl;
                return; 
            }
            cout << this->Id << endl;
            cout << this->Password << endl; 
            cout << this->PhoneNumber << endl; 
        }


};

