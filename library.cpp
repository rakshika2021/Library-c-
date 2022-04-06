#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
// now we will create a class:
class Library
{   public:
    int id;
    char name[100];
    char author_name[100];
    char student_name[100];
    int price;
    int pages;
};
int main()
{
   Library lib[20];
   int input=0;
   int count=0;
   while(input!=3)
   {
       cout<<"Enter 1 for inputting input details"<<endl;
       cout<<"Enter 2 to get/display the details entered by user"<<endl;
       cout<<"Enter 3 to quit"<<endl;
       cin>>input;
       switch(input){
           case 1:
           start:
           cout<<"enter book ID"<<endl;
           cin>>lib[count].id;
           cout<<"enter book NAME"<<endl;
        //   cin>>lib[count].name;
        cin.getline(lib[count].name,100,',');
           cout<<"enter author name"<<endl;
        //   cin>>lib[count].author_name;
        cin.getline(lib[count].author_name,100,',');
           cout<<"enter student name"<<endl;
        //   cin>>lib[count].student_name;
        cin.getline(lib[count].student_name,100,',');
           cout<<"enter book price"<<endl;
           cin>>lib[count].price;
           cout<<"enter book pages"<<endl;
           cin>>lib[count].pages;
           count++;
           break;
           case 2:
           for(int i=0;i<count;i++)
           {
               cout<<"Book ID"<<lib[i].id<<endl;
               cout<<"Book NAME"<<lib[i].name<<endl;
               cout<<"AUTHOR NAME"<<lib[i].author_name<<endl;
               cout<<"STUDENT NAME"<<lib[i].student_name<<endl;
               cout<<"PRICE OF THE BOOK"<<lib[i].price<<endl;
               cout<<"PAGES OF THE BOOK"<<lib[i].pages<<endl;
               break;
            }
            case 3:
            exit(0);
            // this will quit
            break;
            default:
            cout<<" Please enter a valid credential"<<endl;
            goto start;
           
           
           
       }
   }
}
