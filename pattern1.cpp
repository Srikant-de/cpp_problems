#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter the number of Row ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}