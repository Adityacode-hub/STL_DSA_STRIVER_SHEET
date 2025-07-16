#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v1, v2;

    // Capture v1 and v2 by reference
    auto byRef = [&] (int m) {
        v1.push_back(m);
        v2.push_back(m);
    };
    
    // Capture v1 and v2 by value
    auto byVal = [=] (int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };
    
    // Capture v1 by reference and v2 by value
    auto mixed = [=, &v1] (int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Push 20 in both v1 and v2
    byRef(20);
    
    // Push 234 in both v1 and v2
    byVal(234);
    
    // Push 10 in both v1 and v2
    mixed(10);
    
    print(v1);
    print(v2);
    
    return 0;
}

//lambda [](){}

// [ cc ] (parameter) {function definition}

//[capture](parameter_list) -> return_type {
    // body
//}


//parameter_list contains the input that the lambda function needs

// int multiplier=2;
// auto multiply=[=](int x)
//{
//    return x*multiplier;

//auto must be used to store the lambda function

//}