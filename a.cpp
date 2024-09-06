#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any character ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Small Letter";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Capital Letter";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Numeric Value";
    }
    else{
        cout<<"Enter valid character";
    }
    return 0;
}