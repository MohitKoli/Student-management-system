#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int total=0;
int y=0;

struct lib_rental
{
    char bname[20],name[20];
    int sno, no, roll_no ;
};
lib_rental sub[20];


int Add_new_item()
{
    ++y;
    cout<<"Name ";
    cin>>sub[y].name;
    cout<<endl<<"Book number(S.no) - ";
    cin>>sub[y].sno;
    cout<<endl<<"Name of book - ";
    cin>>sub[y].bname;
    cout<<endl<<"Enrollment no - ";
    cin>>sub[y].roll_no;
    cout<<endl<<"Contact no - ";
    cin>>sub[y].no;
    return 0;
}



int Delete_item()
{
    int x=0,j,i=0;
    string tmp;
    cout<<endl<<"Which book you want to return(book no) - ";
    cin>>tmp;
    for(i=1;i<=20;i++)
    {
        if(tmp == sub[i].bname)
        {
            x=i;
            for(j=i;j<=20;j++)
            {                
                strcpy(sub[j].bname , sub[j+1].bname);
                strcpy(sub[j].name , sub[j+1].name);
                sub[j].sno = sub[j+1].sno;
                sub[j].no = sub[j+1].no;
                sub[j].roll_no = sub[j+1].roll_no;
                
            }
            

        }
    }
    if(x==0)
    {
        cout<<"Item not found!!";
    }
    else
    {y--;}
    
    return 0;
}



int view_details()
{
    int i=0,x=0,j,tmp;
    cout<<endl<<"Which book you want to return(book no) - ";
    cin>>tmp;
    for(i=1;i<=20;i++)
    {
        if(tmp == sub[i].sno)
        {
            x=i;
                            
            cout<<endl<<"Book number - "<<sub[i].sno;
            cout<<endl<<"Name - "<<sub[i].name;
            cout<<endl<<"Book name - "<<sub[i].bname;
            cout<<endl<<"Contact number"<<sub[i].sno;
            cout<<endl<<"Entrollment number"<<sub[i].roll_no;        

        }
    }
    if(x==0)
    {
        cout<<"Item not found!!";
    }
    
    return 0;
}



int main()
{
    int a,i,n;
    do
    {
        cout<<endl<<"Enter your choice ";
        cout<<endl<<"1. Add entery.";
        cout<<endl<<"2. View details";
        cout<<endl<<"3. Delete entery.";
        cout<<endl<<"4. Exit."<<endl;
        cin>>a;
    
    
        switch (a)
        {
            case 1 :n = Add_new_item();
                    break;
            case 2 :view_details();
                    break;
            case 3 :Delete_item();
                    break;
            case 4:return 0;

            default:cout<<"You have entered a worng number!!!";
                    break;
        }
    } while (a!=4);

    return 0;

}