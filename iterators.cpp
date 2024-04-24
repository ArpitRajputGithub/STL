#include <iostream>
#include <vector>
#include <iterator>
// #include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    // Iterator --> acts like pointer, iterates through each value of containers

   vector<int>::iterator it;

   for (it = v.begin(); it != v.end(); it++)
   {
       cout << *it << endl;
   }

    //it++ => next iterator
    //it +1 => next location so dont use in Maps n Sets
    // it++ = it+1 for Vectors as vectors has continuous nature
    
    //clean code for iterators using range based loops
    // auto determines the datatype automatically
    for ( auto x : v){ //to print
        cout<<x<<" ";
    }

    //Better way to declare iterators ----->

    vector<int>::iterator it; /* == */ for(auto it = v.begin(); it!= v.end(); it++)

}
