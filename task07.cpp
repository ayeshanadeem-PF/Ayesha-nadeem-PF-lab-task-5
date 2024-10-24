#include <iostream>
 using namespace std;
 int main(){



int numsubject,marks;

cout<<"total no of subject"<<endl;

cin>>numsubject;

for(int i=1;i<=numsubject;i++)
{

cout<<"Enter marks of subject"<<endl;

cin>>marks;

if (marks>=90)
cout<<"Grade A"<<endl;

else if(marks>=75)
cout<<"Grade B"<<endl;

else if(marks>=50)
cout<<"Grade C"<<endl;

else
cout<<"Fail"<<endl;
}


return 0;
}