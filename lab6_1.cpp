#include<iostream>
using namespace std;

int main(){
    int x=1;
    int y=0;
    int a=0; 
    while(x != 0){
    cout << "Enter an integer: ";
    cin >> x;
    if(x%2 == 0){
        y++;
    }else{
        a++;
    }
    }
    cout << "#Even numbers = " << y-1 <<"\n" ;
    cout << "#Odd numbers = " << a ;
    return 0;
}
