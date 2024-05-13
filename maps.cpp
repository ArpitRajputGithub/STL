#include <iostream>
// #include<vector>
#include <iterator>
// #include<bits/stdc++.h>
#include <map>
#include <unordered_map>

// void abc(map<int, string> &m){
//     cout << m.size() << endl;
//   for (auto &pr : m)
//   {
//     cout << pr.first << " " << pr.second << endl;
//   }
// }



using namespace std;
int main()
{
  /* maps have keys and values
  and value can be accessed through keys.
  SYNTAX --> [key:value]
  */

  // printing a map manually

    map<int, int> m{{1, 10}, {1, 20}, {3, 30}, {54, 56}, {94, 6}};
    m.insert({28, 2});
     m[24] = 369;
   
   cout<<m[3]<<endl; // output = 30

   cout<<m[1]<<endl; // output = 10

   //in Normals maps , we cant have duplicate keys.

   cout<<m.size(); // output = 2

   //printing map....

   for (auto pr : m){
       cout<<pr.first<<" " <<pr.second<<endl;
   }

   //printing map using iterator

   map<int, int>::iterator it;
   for (it = m.begin(); it != m.end(); it++)
  {
       cout << (*it).first << " " << (*it).second << endl;
    }

   //Map in descending order
   map<int,int,greater<int>> m{{1,10},{1,20},{3,30},{54,56}, {94,6}};
   map<int,int> ::iterator it;
   for (it = m.begin(); it!=m.end(); it++){
      cout<<(*it).first<<" " <<(*it).second<<endl;
   }

  map<int, string> myMap;
  m[1] = "arpit";
  m[2] = "rajput";
  m[3] = "cse";

  for (auto &x : m)
  {
    cout << x.first << " " << x.second << endl;
  }

  
}
