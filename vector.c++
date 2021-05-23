#include<bits/stdc++.h>
using namespace std;
/*
operations :

create a vector
print 
push_back 
pop_back
erase at a spcific position
insert at specified position
reverse 
indexing
sort 


*/


int main(){
    // vectors
    int n  = 5; 
    vector<int> v(n,0);

    for(int i = 0;i<n;i++){
        // cout << v.at(i) << endl;
        v[i] = i;
    }

    for(vector<int>::iterator i = v.begin();i!= v.end();i++){
        cout << *i << " ";
    }
    cout << endl;
    cout << *(v.begin()+2) << endl;

    v.erase(v.begin()+4);
    v.erase(v.begin() + 2);
    for(int i = 0;i<v.size();i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << v.size() << endl;


    v.insert(v.begin()+2,{2,4});
    for(int i = 0;i<v.size() ;i++){
        cout << v.at(i) << " ";
    }

    cout << endl;

    v.push_back(3);
    v.pop_back(); // always remove last element ;

    v.back() = 9;

    cout << v[v.size()-1] << endl;

    reverse(v.begin(),v.end());

    for(int i = 0;i<v.size();i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    sort(v.begin() ,v.end());
    for (int i =0 ;i< v.size() ;i++){
        cout << v.at(i) << " ";
    }

    cout <<endl;
    cout << v.empty() << endl;
    return 0;
}
