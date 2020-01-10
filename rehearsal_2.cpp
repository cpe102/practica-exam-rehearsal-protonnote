#include<iostream>
using namespace std;
int main (){
    int x,sum=0;
    
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
