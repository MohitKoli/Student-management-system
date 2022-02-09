#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct types
{
    int roll;
    int n;
    string name,namef,adds,dob,no;
};
types sub[50];

int add_student(int i)
{
    i++;
    //sub[1].n++;    
    //cout<<"Entery of which student - ";
    //cin>>i;     
    cout<<"Roll no. of student - ";
    cin>>sub[i].roll;
    cout<<"Name of student     - ";
    cin>>sub[i].name;
    cout<<"Date of birth       - ";
    cin>>sub[i].dob;
    cout<<"Contact number      - ";
    cin>>sub[i].no;
    cout<<"Father name         - ";
    cin>>sub[i].namef;
    cout<<"Address             - ";
    cin>>sub[i].adds;   
    return i; 

}

void detail(int x)
{
        int i;
        cout<<endl<<"  Roll no   |    Name    | Date Of Birth |   contact no   |   Father name   |    Address    ";
        for(i=1;i<=x;i++)
        {
                cout<<endl<<"   "<< sub[i].roll<<"           "<<sub[i].name<<"         "<<sub[i].dob<<"          "<<sub[i].no<<"      "<<sub[i].namef<<"      "<<sub[i].adds;
        }

}

void edit_detail()
{
        int i,roll_no,a;
        cout<<"Enter roll no - ";
        cin>>roll_no;
        for(i=0;i<50;i++)
        {
                if(sub[i].roll==roll_no)
                {
                        a=i;
                }
        }
        cin>>sub[a].roll>>sub[a].name>>sub[a].dob>>sub[a].no>>sub[a].namef>>sub[a].adds;
        cout<<endl<<"  Roll no   |    Name    | Date Of Birth |   contact no   |   Father name   |    Address    ";
        cout<<endl<<"   "<< sub[a].roll<<"        "<<sub[a].name<<"         "<<sub[a].dob<<"         "<<sub[a].no<<"      "<<sub[a].namef<<"      "<<sub[a].adds;
}

void search_detail()
{
        int i,roll_no,a;
        cout<<endl<<"Enter roll no - ";
        cin>>roll_no;
        for(i=0;i<50;i++)
        {
                if(sub[i].roll==roll_no)
                {
                        a=i;
                }
        }
        cout<<endl<<"  Roll no   |    Name    | Date Of Birth |   contact no   |   Father name   |    Address    ";
        cout<<endl<<"   "<< sub[a].roll<<"        "<<sub[a].name<<"        "<<sub[a].dob<<"         "<<sub[a].no<<"      "<<sub[a].namef<<"      "<<sub[a].adds;

}

int exit()
{
    return 0;
}

int main()
{
    int n,a=0;
    sub[0].n=0;
    do 
    {
        cout<<endl<<"What do you want to do- ";
        cout<<endl<<"1. Add student ";
        cout<<endl<<"2. Edit detail ";
        cout<<endl<<"3. Search detail ";
        cout<<endl<<"4. All Entery details ";
        cout<<endl<<"5. Exit ";
        cout<<endl<<"Enter your choice - ";
        cin>>n;
    
        switch (n)
        {
           case 1: a = add_student(a);
                break;
           case 2: edit_detail();
                break;
          case 3: search_detail();
                break;
          case 4: detail(a);
                break;      
          case 5: exit();
                break;
          default: cout<<"Wrong choice!!!!";
                break;
        }
    }while(n==1||n==2||n==3||n==4);
    
    return 0;

}