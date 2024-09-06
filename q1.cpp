#include<iostream>
using namespace std;

int main()
{
    int c;
    cout<<"Enter the count " ;
    cin>>c;
    for(int i=1;i<=c;i++){
        int n,p_marks,count=0;
        cout<<"Enter the number of student and passing marks ";
        cin>>n>>p_marks;
        int aray[n];
        cout<<"Enter marks ";
        for(int j=0;j<n;j++){
            cin>>aray[j];
        }
        for(int k=0;k<n;k++){
            if(aray[k]>=p_marks){
                count=count+1;
            }
        }
         cout<<"Number of student passed = "<<count<<endl;
        

    }

    return 0;
}