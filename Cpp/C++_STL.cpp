#include <bits/stdc++.h> 
using namespace std; 

struct node {
	string str; 
	int num;
	double doub; 
	char x; 

	node(str_, num_, doub_, x_) {
		str = str_; 
		num = num_; 
		doub = doub_; 
		x = x_; 
	}
};
array<int, 3> arr; // -> {0, 0, 0} 

// max size of 10^7 -> int, double, char 
int arr[10000000];

// max size of 10^8 -> bool
	bool arr[100000000];  
int main() {

	// max size of 10^6 -> int, double, char 
	int arr[1000000]; 


	// max size of 10^7 -> bool
	bool arr[10000000]; 

	double val = 10.0;
	cout << val << endl; // prints 10.0 

	cout << raj::getVal() << endl; // prints 50 


	int 
	double 
	char
	

	// create a data type where you store 
	{string, int, double, char} 


    // wrong way of defining 
	node raj; 
	raj.str = "striver"; 
	raj.num = 79; 
	raj.doub = 91.0; 

	node *raj = new node("striver", 79, 91.0, ""); 
	node raj = node("striver", 79, 91.0, ""); 

	{arr[], int, double}; 



	// Arrays -> int arr[100]; 


	array<int, 3> arr;  // -> {?, ?, ?}

		
	array<int, 5> arr = {1}; // -> {1, 0, 0, 0, 0}
 

	int arr[10000] = {0}; 



	array<int, 5> arr; 
	arr.fill(10); -> /// {10, 10, 10, 10, 10} 


	arr.at(index); 

	for(int i = 0;i<5;i++) {
		cout << arr.at(i) << " "; 
	}


	// iterators 
	// begin(), end(), rbegin(), rend() 

	// 

	array<int, 5> arr = {1, 3, 4, 5, 6}; 
	for(auto it = arr.begin(); it!=arr.end();it++) {
		cout << *it << " "; 
	}



	for(auto it = arr.rbegin(); it>arr.rend();it++) {
		cout << *it << " "; 
	}

	for(auto it = arr.end() - 1; it>=arr.begin();it--) {
		cout << *it << " "; 
	}

	// for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}

	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c:s) {
		cout << c << " "; 
	}


	// size 
	cout << arr.size(); 

	// front 
	cout << arr.front(); // arr.at(0); 

	// back
	cout << arr.back(); // arr.at(arr.size() - 1); 




	// VECTOR 

	int arr[50];

	// segmentation fault if you push_back 10^7 times

	vector<int> arr; // -> {}
	cout << arr.size() << endl; // -> print 0 
	arr.push_back(0); // {0}
	arr.push_back(2); // {0,2}
	cout << arr.size() << endl; // -> print 2
	arr.pop_back(); // {0}
	cout << arr.size() << endl; // print 1  

	arr.push_back(0); // {0,0}
	arr.push_back(2); // {0,0,2}


	vec.clear(); // --> erase all elements at once {}


	vector<int> vec1(4, 0); // -> {0,0,0,0}
	vector<int> vec2(4, 10); // -> {10,10,10,10}

	// copy the entire vec2 into vec3
	vector<int> vec3(vec2.begin(), vec2.end()); // -> [)
	vector<int> vec3(vec2); 



	vector<int> raj;
	raj.push_back(1); // raj.emplace_back(1); // emplace_back takes lesser time than push back 
	raj.push_back(3); 
	raj.push_back(2); 
	raj.push_back(5); // -> {1, 3, 2, 5} 

	vector<int> raj1(raj.begin(), raj.begin() + 2);  // -> {1, 3}  


	// lower bound , upper bound 

	// swap swap(v1, v2) 
	// begin(), end(), rbegin(), rend() 


	// to defining 2d vectors 

	vector<vector<int>> vec; 

	vector<int> raj1;
	raj1.push_back(1); 
	raj1.push_back(2); 

	vector<int> raj2;
	raj2.push_back(10); 
	raj2.push_back(20); 

	vector<int> raj3;
	raj3.push_back(19); 
	raj3.push_back(24); 
	raj3.push_back(27); 

	vec.push_back(raj1); 
	vec.push_back(raj2); 
	vec.push_back(raj3); 

	// it is vector itself 
	for(auto vctr: vec) {
		for(auto it: vctr) {
			cout << it << " "; 
		}
		cout << endl; 
	}


	for(int i = 0;i<vec.size();i++) {
		for(int j = 0;j<vec[i].size();j++) {
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}


	// define 10 x 20 
	vector<vector<int>> vec(10, vector<int> (20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints

	vec[2].push_back(1); 


	vector<int> arr[4]; 
	arr[1].push_back(0); 


	// 10 x 20 x 30 // int arr[10][20][30] 
	vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int> (30, 0));)



	// 2nd day 

	// arrays vectors struct 

	// set map 

	// set 

	// given n elements, tell me the number of unique elements 
	arr[] = {2, 5, 2, 1, 5} // 3 unique elements -> {1. 2. 5}

	set<int> st; 
	int n;
	cin >> n;
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x; 
		st.insert(x); 
	}

	cout << st.size(); 

	// st -> {1, 2, 5}
	// erase functionality 
	// log n 
	st.erase(st.begin()); // st.erase(iterator) // st -> {2, 5}

	// log n 
	// 77777777777
	st.erase(st.begin(), st.begin() + 2); // -> [)
	// st.erase(startIterator, endIterator) 

	st.erase(5) // st.erase(key) // delete the 5 -> {1, 2}


	set<int> st = {1, 5, 7, 8}; 

	auto it = st.find(7); // log n // it will be iterator to 7

	auto it = st.find(9); // it = st.end(); 

	st.emplace(6); // st.insert(6) 

	cout << st.size() << endl; 


	set<int> st; 
	st.insert(5); // -> {5}
	st.insert(5); // -> {5}

	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}

	for(auto it : st) {
		cout << it << endl; 
	}

	// delete the entire set 
	st.erase(st.begin(), st.end()); // makes sure the entire set is deleted 



	unordered_set<int> st; 

	st.insert(2); 
	st.insert(3);
	st.insert(1); 

	// average time complexity is O(1) 
	// tle -> switch to set 
	// but the worst case is linear in nature, O(set size)

	multiset<int> ms; 

	ms.insert(1); 
	ms.insert(1); 
	ms.insert(2); 
	ms.insert(2); 
	ms.insert(3); // ms.emplace(3) 
	// st -> {1, 1, 2, 2, 3}

	ms.erase(2); // all the instances will be erased 

	auto it = ms.find(2); // returns an iterator pointing to the first element of 2 
	ms.clear(); // deleted the entire set 
	ms.erase(ms.begin(), ms.end()); // deletes the entire set 
	// log n in size  


	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}

	for(auto it : st) {
		cout << it << endl; 
	}
	// finds how many times 2 occurs 
	st.count(2); 


	ms.erase(ms.find(2)); 
	ms.erase(ms.find(2), ms.find(2) + 2); 




	// Key Value 
	// raj -> 27 
	// hima -> 31 
	// sandeep -> 67 
	// tank -> 89 
	// map only stores unique keys 
	// log n is the tc of map 
	map<string, int> mpp; 
	mpp["raj"] = 27; 
	mpp["hima"] = 31; 
	mpp["praveer"] = 31;
	mpp["sandeep"] = 67; 
	mpp["tank"] = 89; 
	mpp["raj"] = 29; 
	mpp.emplace("raj", 45); 
	mpp.erase("raj"); // mpp.erase(key) 
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.clear(); // entire map is cleaned up
	mpp.erase(mpp.begin(), mpp.begin()+2); // cleans up a given range
	auto it = mpp.find("raj"); // points to where raj lies 
	auto it = mpp.find("simran"); // points to end since she does not exists 

	if(mpp.empty()) {
		cout << "Yes it is empty"; 
	}
	mpp.count("raj"); // always returns 1 as it stores only 1 
	// instance of raj 

	pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10; 

	// printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}

	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}

	// does not stores in any order 
	unordered_map<int,int> mpp; 
	// unordered_map<pair<int,int>,int> mpp; xxxxxx
	// o(1) in almost all cases
	// o(n) in the worst case, where n is the container size 


	// Pair class 
	pair<int,int> pr = {1,2}; 
	pair< pair<int,int>, int> pr = {{1,2}, 2}; 
	cout << pr.first.second << endl;
	pair<pair<int,int>, pair<int,int>> pr = {{1,2},{2, 4}};
	cout << pr.first.first; -> 1 
	cout << pr.second.second; -> 4 

	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 



	multimap<string, int> mpp;
	mpp.emplace("raj", 2); 
	mpp.emplace("raj", 5); 




	// Stack and Queue 
	stack<int> st; // lifo ds 
	// pop 
	// top 
	// size 
	// empty 
	// push and emplace 

	st.push(2); 
	st.push(4); 
	st.push(3); 
	st.push(1); 


	cout << st.top() // prints 2 
	st.pop(); // deletes the last entered element 
	cout << st.top(); // prints 3 
	st.pop(); 
	cout << st.top(); 

	bool flag = st.empty(); // returns true if stack is empty, or false

	// deleted the entire stack 
	while(!st.empty()) {
		st.pop(); 
	}

	cout << st.size() << endl; // number of elements in the stack 

	stack<int> st; 
	if(!st.empty()) {
		cout << st.top() << endl; // throw error 
	}


	// queue // fifo operation ds 
	// push 
	// front
	// pop 
	// size 
	// empty 

	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 

	cout << q.front();; // prints 1 
	q.pop(); 
	cout << q.front(); // prints 5 

	// linear time 
	while(!q.empty()) {
		q.pop(); 
	}
	queue<int> q;
	for(int i = 0;i<10;i++) q.push(i); 



	// priority_queue 
	// push 
	// size 
	// top pop empty 
	priority_queue<int> pq;
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 

	cout << pq.top(); // print 6 
	pq.pop(); 
	cout << pq.top(); // print 5 

	priority_queue<pair<int,int>> pq;
	pq.push(1, 5); 
	pq.push(1, 6); 
	pq.push(1, 7); 

	priority_queue<int> pq;
	pq.push(-1); // pq.push(-1 * el); 
	pq.push(-5); 
	pq.push(-2); 
	pq.push(-6); 

	cout << -1 * pq.top() << endl; // prints 1

	// min priority queue is 
	priority_queue<int, vector<int>, greater<int>> pq; 
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 

	cout << pq.top() << endl; // prints 1 



	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 


	dequeue<int> dq; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 


	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); -> // o(1) operation 



	// given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 

	// output 
	// 3


	int n;
	cin >> n; 
	map<int,int> mpp; 
	int maxi = 0; 
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << x << endl; 



	// given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 

	// output 
	// 2 3 3 5 6 6 

	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}

	for(auto it : ms) {
		cout << it << endl; 
	}

}





