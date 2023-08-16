#include <bits/stdc++.h>
#include "student.h"
#include "module.h"
using namespace std;
int main()
{
    int choice;
    cout<<endl;
    cout<<"# College Registration System #"<<endl;
    while(true)
    {
        cout<<endl;
        cout<<"1> Add Record"<<endl;
        cout<<"2> Update Record"<<endl;
        cout<<"3> Get All Records"<<endl;
        cout<<"4> Add Module"<<endl;
        cout<<"5> Get All Module Details"<<endl;
        cout<<"6> Update Module"<<endl;
        cout<<"0> Exit..."<<endl;
        cout<<"Enter your choice <0-6> : ";
        cin>>choice;
        /*if(cin.fail())
        {
                cin.clear();
                cin.ignore(512,'\n');
                cout<<endl;
                cout<<"Wrong input!!"<<endl;
                cout<<"Start Again -\nEnter choice <0-6> : ";
                continue;
        }*/
        cout<<endl;
        switch(choice)
        {
                case 1: add_record();
                        break;
                case 2: update_record();
                        break;
                case 3: display_records();
                        break;
                case 4: add_module();
                        break;
                case 5: display_modules();
                        break;
                case 6: update_module();
                        break;
                case 0: exit(0);
        }    
    }   
}