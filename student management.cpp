#include<iostream>
#include<fstream>
using namespace std;
void student::add_student()
{
	ofstream out("Student Information.txt");
   string id,name,fname,mname,add;
   cout<<"Enter ID (CXXXXXX):";
   cin>>id;
   out<<id<<"\t";

   cout<<"Enter Name:";
   cin>>name;
   out<<name<<"\t";

   cout<<"Enter Father's Name:";
   cin>>fname;
   out<<fname<<"\t";

   cout<<"Enter Mother's Name:";
   cin>>mname;
   out<<mname<<"\t";

   cout<<"Enter Address:";
   cin>>add;
   out<<add<<endl;
}
