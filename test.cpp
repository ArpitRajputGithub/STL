#include <iostream>
#include <map>
#include <string>
using namespace std;

void abc(map<int, string> &m){
    cout << m.size() << endl;
    for (auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
} // Added closing curly brace for the abc function

int main() {
    // Example usage:
    map<int, string> myMap = {{1, "one"}, {2, "two"}, {3, "three"}};
    abc(myMap); // Call the function with the map
    return 0;
}
