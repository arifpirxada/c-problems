#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>

#include <algorithm> // For std::sort and std::greater
#include <functional> // For std::greater

void printVector(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
}

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

    /*
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
    */

    // * ITERATOR =>
    /*
    vector<int> vector_for_iterator = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it = vector_for_iterator.begin(); // Points to memory of first element in v vector

    cout << "First Iterator element (v.begin): " << *(it) << endl;
    it++; // shifts to next contigous memory address
    cout << "Second Iterator element (b.begin): " << *(it) << endl;

    vector<int>::iterator it2 = vector_for_iterator.end(); // Points to memory which is after last element of v vector
    it2--;
    cout << "v.end: " << *(it2) << endl;

    vector<int>::reverse_iterator it3 = vector_for_iterator.rend(); // Points to memory which is before first element of v vector
    it3--;
    cout << "v.rend - 1: " << *(it3) << endl;
    vector<int>::reverse_iterator it4 = vector_for_iterator.rbegin(); // Points to memory of last element of v vector
    cout << "v.rbegin: " << *(it4) << endl;

    // Printing the vector

    cout << "\nPrinting vector..." << endl;
    cout << "Without auto: ";
    for (vector<int>::iterator it = vector_for_iterator.begin(); it != vector_for_iterator.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << "\nUsing auto: ";
    // auto automatically assigns data type
    for (auto it = vector_for_iterator.begin(); it != vector_for_iterator.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << "\nUsing For each: ";
    for (auto it : vector_for_iterator)
    {
        cout << it << " ";
    }
    */

    // * DELETION IN VECTOR =>
    /*
    vector<int> my_vector = {3, 2, 5, 8, 34, 6, 1};

    printVector(my_vector);

    // my_vector.erase(begin, end); // end index should be the index after last element that should be deleted
    my_vector.erase(my_vector.begin() + 1); // Deletes 2

    cout << "\nmy_vector after deletion: ";
    printVector(my_vector);

    // Deleting multiple elements
    cout << "\n\nmy_vector before deleting multiple elements: ";
    printVector(my_vector);

    my_vector.erase(my_vector.begin() + 1, my_vector.begin() + 4); // Deletes 2

    cout << "\nmy_vector after deleting multiple elements: ";
    printVector(my_vector);
    */

    // * INSERTION IN VECTOR =>
    /*
    vector<int> v(2, 100); // Result => {100, 100}
    v.insert(v.begin(), 0); // Result => {0, 100, 100}
    v.insert(v.begin() + 1, 2, 200); // Result => {0, 200, 200, 100, 100}

    // Insert vector into vector
    vector<int> v2(2, 300);
    v.insert(v.end(), v2.begin(), v2.end()); // Result => {0, 200, 200, 100, 100, 300, 300}
    */

    // * MORE VECTOR FUNCTIONS =>
    /*
    vector<int> v(2, 10);
    cout << "Size: " << v.size() << endl;

    v.pop_back(); // Result => {10}

    vector<int> v2(2, 20);
    v.swap(v2); // v => {20, 20}; v2 => {10, 10}

    v.clear(); // Erases the entire vector

    cout << v.empty(); // Checks if the vector is empty or not
    */

    // 3. List -> Doubly linked list

    /*
    list<int> ls;

    ls.push_back(1); // {1}
    ls.emplace_back(1); // {1, 2}

    ls.push_front(0); // {0, 1, 2}
    ls.emplace_front(-1); // {-1, 0, 1, 2}

    // Rest functions are same as vector
    */

    // 4. Deque -> Double-ended queue

    /*
    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(1); // {1, 2}

    dq.push_front(0); // {0, 1, 2}
    dq.emplace_front(-1); // {-1, 0, 1, 2}

    dq.pop_back(); // {-1, 0, 1}
    dq.pop_front(); // // {0, 1}

    // Rest functions are same as vector
    */


    // 5. Stack => LIFO

    /*
    |  4  |
    |  3  |  => Stack 
    |  2  |
    |  1  |
    \-----/
    */
    
    /*
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.emplace(4); // {4, 3, 2, 1}

    st.top(); // returns 4

    st.pop(); // {3, 2, 1}
    st.size(); // 3
    st.empty(); // returns false

    stack<int> st1, st2;
    st1.swap(st2);
    */


    // 6. Queue => FIFO

    /*
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back() += 7; // Addes 7 to last element, q => {1, 2, 10}
    cout << q.back(); // prints 10

    cout << " " << q.front(); // prints 1

    q.pop(); // {2, 10}

    // size, swap & empty same as stack
    */


    // 7. Priority Queue => Heap

    /*
    priority_queue<int> pq; // Max Heap 

    pq.push(1); // {1}
    pq.push(2); // {2, 1}
    pq.push(3); // {3, 1, 2}

    //   pq now
    //      3
    //    /   \
    //   1     2

    pq.emplace(4);

    //   pq now
    //      4
    //    /   \
    //   3     2
    //  /
    // 1

    pq.top(); // returns 4
    pq.pop(); // will remove 4
    pq.top(); // will print 3

    // size, swap, empty same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(2); // {2}
    min_pq.push(1); // {1, 2}
    min_pq.push(3); // {1, 2, 3}
    min_pq.emplace(10); // {1, 2, 3, 10}

    //  min pq now
    //      1
    //    /   \
    //   2     3
    //  /
    // 10

    min_pq.top(); // prints 1
    */

    // 8. Set => Balanced binary search tree; store 1. unique elements and in 2. sorted order.
    // Everthing happens in logarithmic time complexity

    /*
    set<int> st;
    st.insert(1); {1}
    st.insert(2); {1, 2}
    st.insert(1); {1, 2}
    st.insert(3); {1, 2, 3}
    st.emplace(4); {1, 2, 3, 4}

    // Functionalify of insert in vector
    // can also be used, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty and swap() are same as the above

    auto it = st.find(2); // Returns a pointer iterator that points to 2 in st
    auto it = st.find(10); // will return set.end() bcz 10 does not exist

    st.erase(4); // takes logarithmic time: O(log n)
    st.erase(it); // takes constant time

    int cnt = st.count(1); // if 1 exists returns 1; else 0

    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(4);
    */


    // 9. Multiset => store only 1. sorted elements and they don't need to be 2. unique

    /*
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    int cnt = ms.count(1); // returns number of occurances now; 3

    ms.erase(1); // deletes all occurances of 1
    ms.erase(ms.find(1)); // deletes first occurance of 1
    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest function same as set
    */


    // 10. unordered set => store 1. unique elements but not in 2. sorted order

    // unordered_set<int> st;
    // All functions are same as set
    // But lower_bound() and upper_bound()
    // Will not work
    // It has randomized order
    // It has constant time complexity,
    // Except when some collision happens

    // 11. map => stores keys with their values
    // where key and value can be of any data type
    // Keys are sorted

    /*
    map<int, int> mp;

    // inserting methods
    mp[2] = 89; // key = 2, value = 89
    mp.emplace(4, 9); // 4 => 9
    mp.insert({3, 40}); // 3 => 40

    map<pair<int, int>, int> mp2;

    mp2[{4, 2}] = 10;
    cout << mp2[{4, 2}] << endl;

    auto it = mp.find(3);

    auto it = mp.lower_bound(2);    
    auto it = mp.upper_bound(4);   

    // erase, swap, size & empty are same as above  
    */

    
    // 12. Multimap
    // Everything same as map, but it can store multiple keys
    // only map[key] can not be used here

    // 13. unordered map
    // same as map but does not store keys in sorted order
    // time complexity: O(1)
    // but worst case: O(n)


    // => ALGORITHMS

    // Sort
    int arr[] = {3, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);
    
    cout << "\nsorted array: ";
    for (auto x: arr) {{
        cout << x << " ";
    }}

    sort(arr, arr + size, greater<int>()); // sorts in descending order

    cout << "\narray descending: ";
    for (auto x: arr) {{
        cout << x << " ";
    }}

    vector<int> v(2, 8);

    v.push_back(40);
    v.push_back(2);
    v.push_back(1);
    v.push_back(67);

    sort(v.begin(), v.end());

    cout << "\nvector: ";
    for (auto x: v) {{
        cout << x << " ";
    }}

    sort(v.begin(), v.end(), greater<int>());

    cout << "\nvector descending: ";
    for (auto x: v) {{
        cout << x << " ";
    }}

    // Sort based on custom condition =>

    pair<int, int> pair_arr[] = {{3, 2}, {7, 2}, {1, 3}};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // sort it according to the second element
    // if second element is same, then
    // sort it according to the first element but in descending order

    // Solution:
    // define this function outside main

    // bool comparator (pair<int, int> p1, pair<int, int> p2) {
    //     if (p1.second < p2.second) return true;
    //     if (p1.second > p2.second) return false;

    //     if (p1.first > p2.first) return true;
    //     return false;
    // };

    // sort(pair_arr, pair_arr + arr_size, comparator);

    // other
    int num = 2;
    int cnt = __builtin_popcount(num);

    long long number = 293849308;
    int cnt = __builtin_popcount(number);

    // next_permutation()
    // max_element & min_element


    return 0;
}