#include<bits/stdc++.h>
using namespace std;

#include "myvector.h"

int main()
{
    Vector vec(5);

    vec.push_back(10);
    vec.push_back(99);
    vec.push_back(23);
    vec.push_back(11);
    vec.push_back(3);
    vec.push_back(18);
    vec.push_back(45);

    vec.pop_back();

    cout << "Front : "<< vec.front() << endl;
    cout << "Back : "<< vec.back() << endl;

    cout << "At function : " << vec.at(3) << endl;

    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    for(int i = 0; i < vec.size(); i++)
    {
        //using operator overloading and NOT the at function
        cout << vec[i] << ",";
    }

}