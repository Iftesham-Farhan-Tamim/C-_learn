// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;

//     cout << vec.size() << endl;
// }

// output:
// 0
// ............................................................................................
// //emplace_back = push_back

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;

//     for(int ele : vec) {
//         cout << ele << " ";
//     }
// }

// output:
// 3
// 4
// 1 2 3
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     // vec.emplace_back(6);

//     vec.pop_back();

//     for(int ele : vec) {
//         cout << ele << " ";
//     }
// }

// output:
// 1 2 3 4
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     cout << vec[2] << endl;
//     cout << vec.at(3) << endl;

//     cout << "front : " << vec.front() << endl;
//     cout << "back : " << vec.back() << endl;
// }

// output:
// 3
// 4
// front : 1
// back : 5
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec = {1,2,3,4,5};

//     for(int i=0; i<vec.size(); i++) {
//         cout << vec[i] << endl;
//     }
// }

// output:
// 1 2 3 4 5
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec(3, 10);

//     for(int ele : vec) {
//         cout << ele << " ";
//     }
// }

// output:
// 10 10 10
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     vector<int> vec1(vec);

//     for (int ele : vec1) {
//         cout << ele << " ";  
//     }
// }

// output:
// 1 2 3 4 5
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     vec.erase(vec.begin());  // removes 1st idx element (1)
//     vec.erase(vec.begin() + 2);  // removes 3rd idx element (4)

//     for(int ele : vec) {
//         cout << ele << " ";
//     }
// }

// output:
// 2 3 5
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     vec.erase(vec.begin() + 1, vec.begin() + 3);  // removes element from idx (1-2)

//     for(int ele : vec) {
//         cout << ele << " ";
//     }
// }

// output:
// 1 4 5
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     vec.insert(vec.begin() + 2, 100);

//     for(int ele : vec) {
//         cout << ele << " ";
//     }

//     // vec.clear();  // it will remove all the element, but capacity remains same. 
// }

// output:
// 1 2 100 3 4 5
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     cout << "vec begin : " << *(vec.begin()) << endl;
//     cout << "vec end : " << *(vec.end()) << endl;
// }

// output:
// vec begin : 1
// vec end : 0
// ............................................................................................
// //vector iterators

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     // vector<int>::iterator it;  // for use of auto, it doesn't required

//     for(auto it = vec.begin(); it != vec.end(); it++) {
//         cout << *(it) << " ";
//     }

//     cout << endl;

//     for(auto it = vec.rbegin(); it!=vec.rend(); it++) {  // rbegin = reverse begin, rend = reverse end
//         cout << *(it) << " ";
//     }
// }

// output:
// 1 2 3 4 5
// 5 4 3 2 1
// ............................................................................................
// //List = doubly linkedlist

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     list<int> l;

//     l.push_back(1);
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(5);

//     for(int ele : l) {
//         cout << ele << " ";
//     }

//     cout << endl;

//     l.pop_back();
//     l.pop_front();

//     for(int ele : l) {
//         cout << ele << " ";
//     }
// }

// output:
// 5 3 1 2
// 3 1
// ............................................................................................
// //Deque = Double Ended Queue
// //Dequeue(Generic word) = pop

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     deque<int> d;

//     d.push_back(1);
//     d.push_back(2);
//     d.push_front(3);
//     d.push_front(5);

//     for(int ele : d) {
//         cout << ele << " ";
//     }

//     cout << endl;

//     d.pop_back();
//     d.pop_front();

//     for(int ele : d) {
//         cout << ele << " ";
//     }

//     cout << endl;

//     cout << d[2] << endl;
// }

// output:
// 5 3 1 2 
// 3 1
// 2
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	pair<int, int> p = {1, 5};

// 	cout << p.first << endl;
// 	cout << p.second << endl;


//     pair<string, int> p1 = {"tamim", 5};

// 	cout << p1.first << endl;
// 	cout << p1.second;
// }

// output:
// 1
// 5
// tamim
// 5
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	pair<int, pair<char, int>> p = {1, {'a', 3}};

// 	cout << p.first << endl;
// 	cout << p.second.first << endl;
// 	cout << p.second.second;
// }

// output:
// 1
// a
// 3
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

// 	vec.push_back({4, 5});  // insert
// 	vec.emplace_back(6, 7);  // in-place objects create

// 	// for (pair<int, int> p : vec) {
// 	// 	cout << p.first << " " << p.second << endl;
// 	// }

// 	for (auto p : vec) {
// 		cout << p.first << " " << p.second << endl;
// 	}
// }

// output:
// 1 2
// 2 3
// 3 4
// 4 5
// 6 7
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     cout << "top = " << s.top() << endl;  // top = 3

//     while(!s.empty()) {
//         cout << s.top() << " ";  // 3 2 1 
//         s.pop();
//     }

//     cout << endl;

//     stack<int> s2;
//     s2.swap(s);

//     cout << "s size : " << s.size() << endl;  // s size : 0
//     cout << "s2 size : " << s2.size() << endl;  // s2 size : 0 (0 because of pop())
// }

// output:
// top = 3
// 3 2 1 
// s size : 0
// s2 size : 0
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }

//     cout << endl;
// }

// output:
// 1 2 3
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     priority_queue<int> q;

//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

//     while(!q.empty()) {
//         cout << q.top() << " ";
//         q.pop();
//     }
// }

// output:
// 10 5 4 3
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     priority_queue<int, vector<int>, greater<int>> q;

//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

//     while(!q.empty()) {
//         cout << q.top() << " ";
//         q.pop();
//     }
// }

// output:
// 3 4 5 10 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	map<string, int> m;

// 	m["tv"] = 100;
// 	m["laptop"] = 100;
// 	m["mouse"] = 50;

// 	m.emplace("keyboard", 25);

//     // m.erase("mouse");  // it will rease the mouse

// 	for (auto p : m) {
// 		cout << p.first << " " << p.second << endl;
// 	}

// 	cout << "count = " << m.count("laptop") << endl;

//     if (m.find("camera") != m.end()) {
// 		cout << "found\n";
// 	} else {
// 		cout << "not-found\n";
// 	}
// }

// output:
// keyboard 25
// laptop 100
// mouse 50
// tv 100
// count = 1
// not-found
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	map<string, int> m;

// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);

// 	for (auto p : m) {
// 		cout << p.first << p.second << endl;
// 	}
// }

// output:
// tv100
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	multimap<string, int> m;

// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);

// 	for (auto p : m) {
// 		cout << p.first << p.second << endl;
// 	}
// }

// output:
// tv100
// tv100
// tv100
// tv100
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	multimap<string, int> m;

// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);

// 	m.erase("tv");  // Erase all occurrences of "tv"

// 	for (auto p : m) {
// 		cout << p.first << p.second << endl;
// 	}
// }

// output:
// 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	multimap<string, int> m;

// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);
// 	m.emplace("tv", 100);

// 	m.erase(m.find("tv"));  // erase one occurrences of "tv"

// 	for (auto p : m) {
// 		cout << p.first << p.second << endl;
// 	}
// }

// output:
// tv100
// tv100
// tv100
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	set<int> s;

// 	s.insert(1);
// 	s.insert(2);
// 	s.insert(3);
// 	s.insert(4);
// 	s.insert(5);

// 	s.insert(1);
// 	s.insert(2);
// 	s.insert(3);

// 	cout << s.size() << endl;
//     cout << "lower bound = " << *(s.lower_bound(4)) << endl;  // if the 4 is not present, then it will return 5.
//     cout << "upper bound = " << *(s.upper_bound(4)) << endl;

// 	for (auto val : s) {
// 		cout << val << " ";
// 	}
// }

// output:
// 5
// lower bound = 4
// upper bound = 5
// 1 2 3 4 5 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	multiset<int> s;

// 	s.insert(1);
// 	s.insert(2);
// 	s.insert(3);
// 	s.insert(4);
// 	s.insert(5);

// 	s.insert(1);
// 	s.insert(2);
// 	s.insert(3);

// 	for (auto val : s) {
// 		cout << val << " ";
// 	}
// }

// output:
// 1 1 2 2 3 3 4 5   // it will print all the occurrences
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	unordered_set<int> s;

// 	s.insert(1);
// 	s.insert(2);
// 	s.insert(3);
// 	s.insert(4);
// 	s.insert(5);

// 	s.insert(1);
// 	s.insert(2);
// 	s.insert(3);

// 	for (auto val : s) {
// 		cout << val << " ";
// 	}
// }

// output:
// 5 4 3 2 1 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int arr[5] = {3, 5, 1, 8, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

// 	sort(arr, arr + n);

// 	for (int val : arr) {
// 		cout << val << " ";
// 	}
// }

// output:
// 1 2 3 5 8
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<int> vec = {3, 5, 1, 8, 2, 4};

// 	sort(vec.begin(), vec.end());

// 	for (int val : vec) {
// 		cout << val << " ";
// 	}
// }

// output:
// 1 2 3 4 5 8 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<int> vec = {3, 5, 1, 8, 2, 4};

// 	sort(vec.begin(), vec.end(), greater<int>());

// 	for (int val : vec) {
// 		cout << val << " ";
// 	}
// }

// output:
// 8 5 4 3 2 1 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

// 	sort(vec.begin(), vec.end());

// 	for (auto p : vec) {
// 		cout << p.first << " " << p.second << endl;
// 	}
// }

// output:
// 2 1
// 3 1
// 5 2
// 7 1
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// bool comparator1(pair<int, int> p1, pair<int, int> p2) {
// 	if (p1.second < p2.second) {
// 		return true;
// 	}

// 	if (p1.second > p2.second) {
// 		return false;
// 	}

// 	if (p1.first < p2.first) {
// 		return true;
// 	} else {
// 		return false;
// 	}
// }

// int main() {

// 	vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

// 	sort(vec.begin(), vec.end(), comparator1);

// 	for (auto p : vec) {
// 		cout << p.first << " " << p.second << endl;
// 	}
// }

// output:
// 2 1
// 3 1
// 7 1
// 5 2
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<int> vec = {1, 2, 3, 4, 5};

// 	reverse(vec.begin(), vec.end());

// 	for (auto val : vec) {
// 		cout << val << " ";
// 	}
// }

// output:
// 5 4 3 2 1 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	vector<int> vec = {1, 2, 3, 4, 5};

// 	reverse(vec.begin() + 1, vec.begin() + 3);

// 	for (auto val : vec) {
// 		cout << val << " ";
// 	}
// }

// output:
// 1 3 2 4 5 
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	string s = "abc";  // bca
// 	next_permutation(s.begin(), s.end());

// 	cout << s << endl;
// }

// output:
// acb
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	string s = "bca";
	
// 	prev_permutation(s.begin(), s.end());
// 	cout << s << endl;
// }

// output:
// bac
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	cout << max(4, 5) << " " << min(6, 10) << endl;
// }

// output:
// 5 6
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a = 5, b = 10;
//     swap(a, b);
//     cout << "a = " << a << endl;
// }

// output:
// 10
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << *(max_element(vec.begin(), vec.end())) << endl;
//     cout << *(min_element(vec.begin(), vec.end())) << endl;
// }

// output:
// 5
// 1
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << binary_search(vec.begin(), vec.end(), 10) << endl;
// }

// output:
// 0 (false)
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 15;
//     long int n2 = 15;
//     long long int n3 = 15;

//     cout << __builtin_popcount(n) << endl;
//     cout << __builtin_popcount(n2) << endl;
//     cout << __builtin_popcount(n3) << endl;
// }

// output:
// 4
// 4
// 4