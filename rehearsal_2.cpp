#include<iostream>
using namespace std;
int main (){
    float x,sum=0;
    
    while (x != 0)
    {
        cout << "Enter X: ";
        cin >> x;
        if( x > 0){
                sum += x;
        }  
    }
    cout << "sum = " << sum ;
    return 0;
}
