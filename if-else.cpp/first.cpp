#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;

    if(age>=18)
    {
        cout<<"you are eligible for voting";
        // return;
    }
    else {
        cout<<"you are not eligible for voting";
        // return;
    }
    return 0;
}