#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin>>s;
    if(s.length()==9 && (((s[0]+s[1])&2)==0) && (((s[3]+s[4])&2)==0) && (((s[5]+s[6])&2)==0) && (((s[0]+s[1])&2)==0) &&(s[2]!='A' && s[2]!='E' && s[2]!='I' && s[2]!='O' && s[2]!='U')){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
}