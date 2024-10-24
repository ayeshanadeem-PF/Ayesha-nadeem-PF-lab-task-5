#include <iostream>
using namespace std;
int main(){
    int num,sum;
    cout<<"enter a natural num"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;

        cout<<sum<<endl;
    }
    return 0;
}