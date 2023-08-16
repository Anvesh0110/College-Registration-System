#include <bits/stdc++.h>
#include "module.h"
using namespace std;
void add_module()
{
    module data;
    cout<<"Enter Module Information below -"<<endl;
    cout<<"Module No : ";
    cin>>data.moduleNo;
    cout<<"Module Name : ";
    cin.ignore();
    getline(cin,data.moduleName);
    cout<<"Duration in months : ";
    cin>>data.duration;
    cout<<"Module fee in INR : ";
    cin>>data.fees;
    cout<<"Tentative start date : ";
    cin.ignore();
    getline(cin,data.tentativeStartDate);
    cout<<endl;
    moduleInfo[data.moduleNo]=data;
}
void update_module()
{
    int modNo,choice,flag=1;
    cout<<"Enter module no to be updated - "<<endl;
    cin>>modNo;
    while(moduleInfo.find(modNo)==moduleInfo.end())
    {
        flag=0;
        int ch;
        cout<<"Module No doesn't exist!"<<endl;
        cout<<"Press 1 to enter again"<<endl;
        cout<<"Press 0 to exit"<<endl;
        cout<<"Enter choice <0-1> : ";
        cin>>ch;
        if(ch==0) break;
        if(ch==1) 
        {
            flag=1;
            cout<<"Enter correct module no : ";
            cin>>modNo;
        }
    }
    while(flag)
    {
        cout<<endl;
        cout<<"Enter 1 to update name"<<endl;
        cout<<"Enter 2 to update duration"<<endl;
        cout<<"Enter 3 to update fees"<<endl;
        cout<<"Enter 4 to update tentative start date"<<endl;
        cout<<"Enter 0 to stop updating further"<<endl;
        cout<<"Enter choice <0-4> : ";
        cin>>choice;     
        cout<<endl;   
        switch(choice)
        {
            case 0 : flag=0;
                     break;
            case 1 : cout<<"Enter updated name"<<endl;
                     cin>>moduleInfo[modNo].moduleName;
                     break;
            case 2 : cout<<"Enter updated duration"<<endl;
                     cin>>moduleInfo[modNo].duration;
                     break;
            case 3 : cout<<"Enter updated fees"<<endl;
                     cin>>moduleInfo[modNo].fees;
                     break;
            case 4 : cout<<"Enter new start date"<<endl;
                     cin>>moduleInfo[modNo].tentativeStartDate;
                     break;
        }
    }
}
void display_modules()
{
    int sr_no=1;
    while(moduleInfo.size()==0)
    {
        int ch;
        cout<<"Database is empty!"<<endl;
        cout<<"Press 1 to add module"<<endl;
        cout<<"Press 0 to exit"<<endl;
        cout<<"Enter choice <0-1> : ";
        cin>>ch;
        cout<<endl;
        if(ch==0) break;
        if(ch==1) add_module();
    }
    for(auto it:moduleInfo)
    {
        cout<<"Information of Module "<<sr_no<<" : "<<endl;
        cout<<"Module No : "<<it.first<<endl;
        cout<<"Module Name : "<<it.second.moduleName<<endl;
        cout<<"Module Duration : "<<it.second.duration<<endl;
        cout<<"Module Fees : "<<it.second.fees<<endl;
        cout<<"Module Start Date : "<<it.second.tentativeStartDate<<endl; 
        cout<<endl;
        sr_no++;            
    }
}