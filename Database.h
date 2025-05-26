#include <iostream>  
#include <string>
#include "Member.h"

using namespace std; 




class Database {

    private: 

        Member memberList[100];
        int memberNum; 

    public: 

        Database() : memberNum(0) {}

        void addMember(string Id , role x, string Password, string PhoneNumber) {

            Member newMember(Id, x, Password, PhoneNumber );

            memberList[memberNum] = newMember;  
            std::cout << "Adding Member.."  << std::endl;

            memberNum++; 
    
        }


        Member* findMember(string input_Id, string input_Password) {
            for (int i = 0; i < memberNum; i++) {
                if (memberList[i].getId() == input_Id) {
                    if (memberList[i].getPassword() == input_Password) {
                        return &memberList[i];
                    } else {
                        continue; 
                    }
                } 
            }
            
            return nullptr; 
        }


        void printMember() {

            for (int i = 0; i < memberNum; i++){
                memberList[i].printMember();
            }

        }


};





