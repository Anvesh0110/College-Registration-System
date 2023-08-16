#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int student_id;
    string studName,gender,bloodGrp,studAddr,dob;
};
//vector<student> studentInfo;
static unordered_map<int,student> studentInfo;
void add_record();
void update_record();
void display_records();
