#include<iostream>
using namespace std;
int main()
{
	string a;
    int i,c;
    float mark, sum=0, avg;
    cout<<"enter the student name:";
    cin>>a;
    cout<<"enter the reg.number:";
    cin>>c;
    cout<<"Enter Marks obtained in 3 Subjects: ";
    for(i=0;i<3;i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/3;
    cout<<"\nGrade = ";
    if(avg>=91 && avg<=100)
        cout<<"s";
    else if(avg>=81 && avg<91)
        cout<<"a";
    else if(avg>=71 && avg<81)
        cout<<"B";
    else if(avg>=61 && avg<71)
        cout<<"c";
    else if(avg>=51 && avg<61)
        cout<<"d";
    else if(avg>=0 && avg<51)
        cout<<"f";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}
