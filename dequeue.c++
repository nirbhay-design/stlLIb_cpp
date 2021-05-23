#include<bits/stdc++.h>
using namespace std;
/*
operations :
push_back
push_front
pop_back
pop_front
erase
insert
size()
empty

basically dequeue in stl is vector with two more operations : push_front pop_front
 

*/


int main(){
    // de queue

    deque<int> dq;

    dq.push_back(45);
    dq.push_back(145);
    dq.push_back(415);
    dq.push_back(451);
    dq.push_back(457);
    dq.push_front(34);

    for(int i = 0;i<dq.size();i++){
        // cout << dq.at(i) << " ";
        cout << dq[i] << " ";
    }
    cout << endl;

    
    dq.insert(dq.begin()+4,2);

    for(deque<int>::iterator i = dq.begin();i!=dq.end();i++){
        cout << *i << " ";
    }
    cout << endl;

    dq.erase(dq.begin()+4);

        for(deque<int>::iterator i = dq.begin();i!=dq.end();i++){
        cout << *i << " ";
    }
    cout << endl;

    cout << *dq.end() << endl;
    return 0;
}
