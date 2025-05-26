// Console.h
#include <iostream>
#include <string>
#include "MemberHandler.h"
#include "BikeHandler.h" // 자전거 관련 기능을 위한 헤더

using namespace std;

class Console {
private:
    Database& db;
    MemberHandler memberHandler;
    BikeHandler bikeHandler; // 자전거 관련 기능 처리 객체
    bool isLoggedIn;
    string currentUserId;

public:
    // 생성자
    Console(Database& database) 
        : db(database), 
          memberHandler(database), 
          bikeHandler(database),
          isLoggedIn(false),
          currentUserId("") {}

    // 메인 메뉴 표시
    void run() {
        while (true) {
            displayMenu();
            int option1, option2;
            cin >> option1 >> option2;

            if (option1 == 1 && option2 == 1) { 
                string id, password, phoneNumber;
                cin >> id >> password >> phoneNumber;
                memberHandler.SignUp(id, password, phoneNumber);
                cout << "1.1. 회원가입\n";
                cout << "> " << id << " " << password << " " << phoneNumber << endl;

            } else if (option1 == 2 && option2 == 1) {
                string id_str, password_str;
                cin >> id_str >> password_str; 
                cout << "2.1. 로그인\n";
                cout << "> " << id_str << " " << password_str << endl;

                string loginResult = memberHandler.Login(id_str, password_str);
                if (loginResult != "-1") {

                    isLoggedIn = true;
                    currentUserId = loginResult;
                    cout << "로그인 성공! (User status updated)\n";
                } else {
                    cout << "로그인 실패. ID 또는 비밀번호가 일치하지 않습니다.\n";
                }

            } else if (option1 == 2 && option2 == 2) { 

                cout << "2.2. 로그아웃\n";
                if (isLoggedIn) {
                    cout << "> User ID: " << currentUserId << " logged out.\n";
                    isLoggedIn = false;
                    currentUserId = "-1";
                } else {
                    cout << "> 현재 로그인 상태가 아닙니다.\n";
                }
            } else if (option1 == 3 && option2 == 1) { 
                string bikeId, bikeModel;
                cin >> bikeId >> bikeModel;
                cout << "3.1. 자전거 등록\n";
                cout << "> " << bikeId << " " << bikeModel << endl;

            } else if (option1 == 4 && option2 == 1) { 

                string bikeId;
                cin >> bikeId;
                cout << "4.1. 자전거 대여\n";
                cout << "> " << bikeId << " (Product Name Placeholder)" << endl;

            } else if (option1 == 5 && option2 == 1) { 

                cout << "5.1. 자전거 대여 리스트\n";
                cout << "{> (Bike List Placeholder) }*" << endl;

            } else if (option1 == 6 && option2 == 1) { 

                cout << "6.1. 종료\n";
                return;
                
            } else {
                cout << "잘못된 옵션입니다. 다시 선택해주세요.\n";
            }
        }
    }

private:
    void displayMenu() {
        
        cout << "\n===== 자전거 대여 시스템 =====\n";
        cout << "1.1. 회원가입 ([ID] [비밀번호] [전화번호])\n";
        cout << "2.1. 로그인 ([ID] [비밀번호])\n";
        cout << "2.2. 로그아웃\n";
        cout << "3.1. 자전거등록 ([자전거 ID] [자전거 제품명])\n";
        cout << "4.1. 자전거대여 ([자전거 ID])\n";
        cout << "5.1. 자전거 대여 리스트\n";
        cout << "6.1. 종료\n";
        cout << "옵션을 선택하세요 (예: 1 1): "; // Added a prompt here for clarity
        
    }
};
