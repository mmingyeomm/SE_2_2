#include <iostream>  

#include "Database.h"
#include "Console.h"


using namespace std; 

int main() {  

  Database db; 

  Console console(db);
  
  console.run();


  return 0;  
}










