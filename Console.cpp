#include "Console.h"

Console::Console(Database& database) 
    : db(database), 
      memberHandler(database), 
      bikeHandler(database),
      isLoggedIn(false),
      currentUserId() {}

void Console::run() {
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
            string id, password;
            cin >> id >> password; 
            currentUserId = memberHandler.LogIn(id, password); 
            cout << "2.1. 로그인\n";
            cout << "> " << id << " " << password << endl;

        } else if (option1 == 2 && option2 == 2) { 

            cout << "2.2. 로그아웃\n";
            cout << "> User logged out userId: " << currentUserId.Id << endl;
            isLoggedIn = false;
            currentUserId = Member();

        } else if (option1 == 3 && option2 == 1) { 
            string bikeId, bikeModel;
            cin >> bikeId >> bikeModel;

            if ( bikeHandler.registerBike(currentUserId, bikeId, bikeModel) == 1 ) {
                cout << "3.1. 자전거 등록\n";
                cout << "> " << bikeId << " " << bikeModel << endl;
            } else {
                cout << "ADMIN이 아닙니다" <<endl; 
            }
            

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

void Console::displayMenu() {
    cout << "\n===== 자전거 대여 시스템 =====\n";
    cout << "1.1. 회원가입 ([ID] [비밀번호] [전화번호])\n";
    cout << "2.1. 로그인 ([ID] [비밀번호])\n";
    cout << "2.2. 로그아웃\n";
    cout << "3.1. 자전거등록 ([자전거 ID] [자전거 제품명])\n";
    cout << "4.1. 자전거대여 ([자전거 ID])\n";
    cout << "5.1. 자전거 대여 리스트\n";
    cout << "6.1. 종료\n";
    cout << "옵션을 선택하세요 (예: 1 1): ";
} 