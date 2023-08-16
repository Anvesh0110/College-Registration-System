#include <bits/stdc++.h>
#include "student.h"
using namespace std;
void add_record()
{
    student record;
    cout<<"Enter Student Information below -"<<endl;
    cout<<"Student ID : ";
    cin>>record.student_id;
    /*if((record.student_id<48 || record.student_id>57) && flag==0)
    {
        flag=0;
        cout<<"Please enter an integer value!"<<endl;
        cin>>record.student_id;
        flag=1;
    }*/
    
    cout<<"Student Name : ";
    cin.ignore();
    getline(cin,record.studName);
    cout<<"Gender : ";
    getline(cin,record.gender);
    cout<<"Blood Group : ";
    getline(cin,record.bloodGrp);
    cout<<"Address : ";
    getline(cin,record.studAddr);
    cout<<"Date of Birth : ";
    getline(cin,record.dob);
    studentInfo[record.student_id]=record;
    cout<<endl;
    //cout<<studentInfo[record.student_id].bloodGrp<<" "<<studentInfo[record.student_id].dob<<" "<<studentInfo.size()<<endl;
}
void display_records()
{
    int sr_no=1;
    while(studentInfo.size()==0)
    {
        int ch;
        cout<<"Database is empty!"<<endl;
        cout<<"Press 1 to add record"<<endl;
        cout<<"Press 0 to exit"<<endl;
        cout<<"Enter choice <0-1> : ";
        cin>>ch;
        cout<<endl;
        if(ch==0) break;
        if(ch==1) add_record();
    }
    for(auto it:studentInfo)
    {
        //cout<<"inside for"<<endl;
        cout<<endl;
        cout<<"Information of Student "<<sr_no<<" : "<<endl;
        cout<<"Student ID : "<<it.first<<endl;
        cout<<"Student Name : "<<it.second.studName<<endl;
        cout<<"Student Gender : "<<it.second.gender<<endl;
        cout<<"Student Blood Group : "<<it.second.bloodGrp<<endl;
        cout<<"Student Address : "<<it.second.studAddr<<endl; 
        cout<<"Student Date of Birth : "<<it.second.dob<<endl;   
        cout<<endl;
        sr_no++;            
    }
    
}
void update_record()
{
    int id,choice,flag=1;
    cout<<"Enter Student ID to be updated - "<<endl;
    cin>>id;
    while(studentInfo.find(id)==studentInfo.end())
    {
        flag=0;
        int ch;
        cout<<"Student ID doesn't exist!"<<endl;
        cout<<"Press 1 to enter again"<<endl;
        cout<<"Press 0 to exit"<<endl;
        cout<<"Enter choice <0-1> : ";
        cin>>ch;
        cout<<endl;
        if(ch==0) break;
        if(ch==1) 
        {
            flag=1;
            cout<<"Enter correct student id :";
            cin>>id;
        }
    }
    while(flag)
    {
        cout<<endl;
        cout<<"Enter 1 to update name"<<endl;
        cout<<"Enter 2 to update gender"<<endl;
        cout<<"Enter 3 to update blood group"<<endl;
        cout<<"Enter 4 to update address"<<endl;
        cout<<"Enter 5 to update date of birth"<<endl;
        cout<<"Enter 0 to stop updating further"<<endl;
        cout<<"Enter choice <0-5> : ";
        cin>>choice;        
        cout<<endl;
        switch(choice)
        {
            case 0 : flag=0;
                     break;
            case 1 : cout<<"Enter updated name"<<endl;
                     cin>>studentInfo[id].studName;
                     break;
            case 2 : cout<<"Enter updated gender"<<endl;
                     cin>>studentInfo[id].gender;
                     break;
            case 3 : cout<<"Enter updated blood group"<<endl;
                     cin>>studentInfo[id].bloodGrp;
                     break;
            case 4 : cout<<"Enter updated address"<<endl;
                     cin>>studentInfo[id].studAddr;
                     break;
            case 5 : cout<<"Enter updated date of birth"<<endl;
                     cin>>studentInfo[id].dob;
                     break;
        }
    }
}
