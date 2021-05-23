#include<bits/stdc++.h>
using namespace std;
/*
operations :
unordered _set 
ordered set 
find
add
remove
iterate
size
empty
 

*/
void print(set<int> s){
    set<int>::iterator a = s.begin();
    while(a!=s.end()){
        cout << *a << " ";
        a++;
    }
    // for(int i = 0;i<s.size();i++){
    //     cout << s[i] << " "; // cant do indexing in set
    // }
    cout << endl;
}

void print(unordered_set<int> s,bool value){
    unordered_set<int>::iterator a = s.begin();
    while(a!=s.end()){
        cout << *a << " ";
        a++;
    }
    cout << endl;
}
int main(){
    // set

    // unordered_set     
    unordered_set<int> s3;

    s3.insert(56);
    s3.insert(156);
    s3.insert(56);
    s3.insert(56);
    s3.insert(256);

    print(s3,true);
    
    s3.erase(56);

    print(s3,true);

    
    // set 
    set<int> s;

    s.insert(5);    
    s.insert(15);    
    s.insert(50);    
    s.insert(5);    
    s.insert(5);    
    s.insert(15);
    s.insert(2);
    print(s);    

    int a = s.erase(15);
    cout << a << endl;
    print(s);

    // assigning element of another set to this 
    // set<int> s1(s.begin(),s.end());
    // print(s1);
    set<int>::iterator s2 = s.find(15);
    cout << *s2 << endl;

    if(s2==s.end()){
        cout << "element not found" << endl;
    }
    else{
        cout << "found" << endl;
    }

    cout<< *s.end()<<endl;


    return 0;
}
