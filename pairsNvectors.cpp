                        //DO NOT RUN THIS CODE. ONLY LEARN.


#include <iostream>
#include <bits/stdc++.h>
// #include <vector>

// void Vectprint(){
//     for (int i =0; i<v.size(); i++){
//         cout<<v.size()<<endl;
//     }
// }

using namespace std;
int main()
{

    // PAIR

    // pair<int, int> pair_name; // declare
    // pair_name = {56, 89};

    // cout << pair_name.first << endl
    //      << pair_name.second; // print

    //  VECTORS

    vector <int> v; // declare vector

    int n; //Number of elements
    cin >> n;
    int ele;

    for (int i = 0; i < n; i++) // add values to vector/array
    {
        cin >> ele;
        v.push_back(ele);
    }
    for (int i = 0; i < v.size(); i++) // print elements of the vector
    {
        cout << v[i] << " " << endl;
    }

    // RESIZING THE VECTOR

    v.resize(3);
    cout << "After resizing" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // FRONT OF VECTOR
    cout << v.front() << endl;

    // BACK OF VECTOR
    cout << v.back() << endl;

    // CLEAR THE VECTOR
    v.clear();

    // CHECK IF VECTOR IS EMPTY OR NOT
    if (
        v.empty())
    {
        cout << "Empty";
    }
    else
    {
        cout << " NotEmpty";
    }

    //pop_back
    v.pop_back();

    //INSERTION
   // standard -->  v.insert(position,element);
   
    v.begin(); //--> address of v[0]
   // *v.begin() --> reference/value of v[0]

    v.insert(v.begin(), 56);
  for (int i = 0; i < v.size(); i++) // print elements of the vector
    {
         cout << v[i] << " " << endl;
     }

   //DELETION
    v.end(); //--> address of v[v.size()-1]
    //*v.end9(); --> reference/ value of v[v.size()-1]
    
    v.insert(v.end(), 65);
     for (int i = 0; i<v.size(); i++){
         cout<< v[i] <<" "<< endl;     }
     cout<<endl;

    //SORTING
    sort(v.begin(), v.end()); //ascending order -->v[0]

    sort(v.begin()+1, v.end()); //starts from -->v[1]

    sort(v.begin()+1, v.end(), greater<int>()); //descending order


   //ERASING

   v.erase(v.begin(),v.begin()+2); //--> erases v[0], v[1] 



}
