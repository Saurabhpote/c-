#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 numbers : ";
    cin>>a>>b>>c;
    if(a>b){
        if (a>c){
            cout<<a<<" is ther greater number";
        }
        else{
            cout<<c<<" is the greter number";
        }
    }
    else if (b>a){
            if(b>c){
                cout<<b<<" is the greater Number";
            }
        
            else {
        cout<<c<<" is the greater number ";
            }
    
    return 0;
}}