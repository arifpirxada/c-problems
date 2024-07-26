#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // 1. Pair (utility function)
    /*
    pair<int, int> p = {3, 7}; // Stores two values
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> three = {2, {7, 2}};
    cout << three.first << " " << three.second.first << " " << three.second.second << endl;

    pair<int, int> arr[] = {{1, 3}, {9, 3}, {9, 2}, {23, 9}};
    cout << arr[0].first << " " << arr[1].second;
    */

    // 2. Vector

    vector<int> v = {1}; // Creates a dynamic array - adjusts its size when elements are added or removed

    v.push_back(2);
    v.emplace_back(3); // similar to push_back but faster
    cout << "v: " << v[0] << " " << v[1] << " " << v[2] << endl;

    vector<int> v2(5, 1); // Creates 5 instances of 1 
    cout << "v2: " << v2[0] << " " << v2[1] << " " << v2[2] << " " << v2[3] << " " << v2[4] << endl;

    vector<pair<int, int>> v3;
    v3.push_back({4, 2});
    v3.emplace_back(8, 9);
    cout << "v3: " << v3[0].first << " " << v3[0].second << " " << v3[1].first << " " << v3[1].second << endl;

    // Two ways to access vector
    cout << "Two ways: " << v[0] << " " << v.at(0) << endl;

    // Iterator
    vector<int>::iterator it = v.begin(); // Points to memory of first element in v vector

    cout << "First Iterator element (v.begin): " << *(it) << endl;
    it++; // shifts to next contigous memory address
    cout << "Second Iterator element (b.begin): " << *(it) << endl;

    vector<int>::iterator it2 = v.end(); // Points to memory which is after last element of v vector
    it2--;
    cout << "v.end: " << *(it2) << endl;

    vector<int>::reverse_iterator it3 = v.rend(); // Points to memory which is before first element of v vector
    it3--;
    cout << "v.rend - 1: " << *(it3) << endl;
    vector<int>::reverse_iterator it4 = v.rbegin(); // Points to memory of last element of v vector
    cout << "v.rbegin: " << *(it4) << endl;

    // Printing the vector

    cout << "\nPrinting vector..." << endl;
    cout << "Without auto: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout <<*(it) << " ";
    }

    cout << "\nUsing auto: ";
    // auto automatically assigns data type
    for (auto it = v.begin(); it != v.end(); it++) {
        cout <<*(it) << " ";
    }

    cout << "\nUsing For each: ";
    for (auto it: v) {
        cout << it << " ";
    }

    return 0;
}