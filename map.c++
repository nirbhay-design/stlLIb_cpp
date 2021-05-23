#include<bits/stdc++.h>
using namespace std;
/*
operations :
insert key value pair;
delete pair
find key value pair
size
print

 

*/

void get_unique(unordered_map<char,int>& mp, string s){
    for(int i = 0;i<s.length();i++){
        if(mp.find(s.at(i)) == mp.end()){
            mp[s.at(i)] = 1;
        }else{
            mp[s.at(i)] += 1;
        }
    }
}

int main(){
    // map

    unordered_map<int,int> mp;

    mp.insert(pair<int,int>(4,5));
    mp.insert(pair<int,int>(6,5));
    mp.insert(pair<int,int>(7,5));
    mp.insert(pair<int,int>(4,9));
    mp.insert(pair<int,int>(4,3));

    unordered_map<int,int>::iterator it;
    for(it = mp.begin();it != mp.end();it++){
        cout << "key: "<<it->first << " value: "<< it->second << endl;
    }

    // for(int i = 0;i<mp.size();i++){
    //     cout << mp.at(i).first << " " << mp.at(i).second << endl;
    // }
    for(pair<int,int> apple:mp){
        cout << apple.first << " " << apple.second << endl;
    }
    cout << mp[4] << endl;


    mp.erase(4);
    for(pair<int,int> apple:mp){
        cout << apple.first << " " << apple.second << endl;
    }

    if(mp.find(6) == mp.end()){
        cout << "nt found" << endl;
    }
    else{
        cout << "found" << endl;
    }
    

    mp.insert({10,34});
    for(pair<int,int> apple:mp){
        cout << apple.first << " " << apple.second << endl;
    }

    unordered_map<char,int> mper;
    get_unique(mper,"nirbhayayay");
    for(pair<char,int> a:mper){
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}
