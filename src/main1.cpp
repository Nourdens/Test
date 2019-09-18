#include <iostream>
#include "task1.cpp"
using namespace std
int main(){
    int age;
    cin >> age;
    if(ageCheck(age) == 1){
        cout << "Access granted" << endl;
    }
    else{
        cout << "Access denied" << endl;
    }
    return 0;
}