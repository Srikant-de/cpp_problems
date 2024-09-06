#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter the number of Row ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
              int k=1;
              while(k<=2*(i-1)){
                cout<<"*";
                k=k+1;     
        }
              int l=n;
              while (l>i-1)
              {
               cout<<l-i+1;
               l=l-1;
              }
              
        cout<<endl;
        i=i+1;
    }
    return 0;
}