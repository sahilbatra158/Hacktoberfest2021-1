#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    int rollno, age;
    char name[10];
    ofstream fout("abc.txt");
    cout<<"Enter the name :"<<endl;
    cin>>name;
    cout<<"Rollno :"<<endl;
    cin>>rollno;
    cout<<"Age :"<<endl;
    cin>>age;
    fout<<name<<endl;   
    fout<<rollno<<endl;
    fout<<age<<endl;

    ifstream fin("abc.txt");
    fin>>name;
    fin>>rollno;
    fin>>age;
    cout<<"Name is = "<<name<<endl;
    cout<<"Rollno is = "<<rollno<<endl;
    cout<<"Age is = "<<age<<endl;
    getch();
}
