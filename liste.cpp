#include <iostream>
#include "liste.hpp"
using namespace std;

int main(){
liste obj1;
for (int i = 0; i < 10; i++){
   obj1.append(i);
}
obj1.to_Screen();
obj1.erase(2);
obj1.erasepos(3);
obj1.erasepos(1);
obj1.erasepos(0);
obj1.erasepos(5);
obj1.erasepos(6); // bei erase position wird manchmal der letzten Wert der Wert von dem Restvalues // output : 5:9 6:9 7:9


obj1.to_Screen();
}
