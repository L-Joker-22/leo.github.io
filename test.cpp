#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int val){
    return val > 5;
}

class a{
public:
    bool operator()(int val){
        return val > 1;
    }
};

void print(int val){
    cout << val << ' ';
}

int main(){
    vector<int> v1, v2, v(30);
    for(int i = 10; i >= 0; i++){
        v1.push_back(i);
    }
    for(int i = 15; i >= 0; i++){
        v2.push_back(i);
    }
    
    auto itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());

    for_each(v.begin(), itEnd, print);
    cout << endl;



    return 0;
}