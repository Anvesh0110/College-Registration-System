#include<bits/stdc++.h>
using namespace std;

class module
{
    public:
    int moduleNo,duration,fees;
    string moduleName,tentativeStartDate;
};
//vector<module> moduleInfo;
static unordered_map<int,module> moduleInfo;
void add_module();
void update_module();
void display_modules();
