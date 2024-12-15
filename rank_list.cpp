#include<bits/stdc++.h>
using namespace std;

#define optimize()    ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{

    map<string,int>id;
    id["sharier"]=1;
    id["momo"]=3;
    id["rana"]=4;
    id["prity"]=9;

    cout<<id["sharier"]<<endl;

    map<string,string>gender;

    gender["sharier"]="male";
    gender["momo"]="female";
    cout<<gender["sharier"]<<endl;

    map<string,vector<int>>marks;

    marks["sharier"].push_back(10);
    marks["sharier"].push_back(20);
    marks["sharier"].push_back(30);

    for(auto x:marks["sharier"])
    {
        cout<<x<<" ";
    }

    cout<<endl;

    map<string,map<string,int>>mp;

    mp["sharier"]["math"]=100;
    mp["sharier"]["english"]=90;
    mp["sharier"]["bangla"]=80;

    cout<<mp["sharier"]["math"]<<endl;

    map<pair<int,int>,string>mp1;

    mp1[{5,6}]= "abc";
    mp1[{7,8}]="abc";
    mp1[ {5,6}]= "abc"; // replace with mp[{ 5,6}] .

    cout<<mp1[{5,6}]<<endl;

    map<int,int>mp2;

    mp2[1]=10;
    mp2[2]=20;
    mp2[3]=30;

    for(auto x:mp2)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    
}