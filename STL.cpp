#include<bits/stdc++.h>
using namespace std;

void PairSTL(){
    // pair includes in std!

    pair<int,int> p1= {1,2};
    cout << p1.first << " " << p1.second << endl;

    // another way to make pair. 
    pair<int,char> p2= make_pair(1, 'x'); 
    cout << p2.first << " " << p2.second << endl;

    // nested pair 
    pair<pair <int ,char>, char> p3 = {{1, 'v'},'b'};
    cout << p3.first.second << " " << p3.second << endl;
}
void VectorSTL(){
    // vector is a dynamic container i.e., it is not a fixed nature
    // we can store any datatype in it like pair, int, char etc
    // it is empty container.
    // we can add any element.
    vector<int> vect;
    vect.push_back(1); 
    vect.push_back(6); 
    // another way to add element 
    vect.emplace_back(9); 

    // to know the current size
    cout << vect.size() << endl;

    // to print vector , we print like an array.
    for (int i =0;i <vect.size();i++){
        cout << vect[i] << " ";
    }
    cout << endl;
    
    // if we dont want to print like this (in loop)
    // we use "ITERATOR" concept.
    // begin means 0
    // using vector iterator, it points the starting
    // and after the ending element adress
    // not the value.!
    // end means "after the last elemnet"
    vector<int>::iterator beginItr = vect.begin(); 
    vector<int>::iterator EndItr = vect.end();
    EndItr = EndItr -1; // now, last element 
    // to print 
    for (vector<int>::iterator i=beginItr;i<=EndItr;i++){
        cout << *i << " "; // *i is derefrencing the pointer
    }
    cout << endl;

    // now to print same thing, we use "auto" keyword instead
    // instead of typing full vector<int>::iterator etc etc.
    // we just need to,
    auto beginItr1 = vect.begin(); 
    auto EndItr1 = vect.end();
    EndItr1 = EndItr1 -1; // now, last element 
    // to print 
    for (auto i=beginItr1;i<=EndItr1;i++){
        cout << *i << " ";
    }
    cout << endl;

    // this is now easy to print :-
    // now to print in simple easy eay we just need to :-
    for (auto i: vect){
        cout << i << " ";
    }   
    cout << endl;

    // "Reverse Iterator"
    auto revBegin = vect.rbegin(); // from last element
    auto revEnd = vect.rend(); // before first element

    // to print 
    for (auto i = revBegin; i< revEnd;i++){
        cout << *i << " l";
    }
    cout << endl;

    // another way to initialize vector
    vector<int> vect2= {1,6,3,2};
    vect2.push_back(7);
    vect2.push_back(9);

    for (auto i: vect2){
        cout << i << " ";
    }
    cout << endl;

    // we can also do something like this:
    vector<int> vect3(3); // it will give 3 zeroes,
    // as there was no variable assigned
    vect3.push_back(6);
    vect3.push_back(2);
    
    for (auto i:vect3){
        cout << i << " ";
    }
    cout << endl;

    // To duplicate vector
    vector<int> dupVector(vect3);
    for (auto i: dupVector){
        cout << i << " ";
    }
    cout << endl;

    // to print from range
    vector<int> dupVector2(vect3.begin()+3, vect3.end()-1);

    for (auto i: dupVector2){
        cout << i << " "; // 6 
    }
    cout << endl;

    //  Alsoo
    vector<int> vect4(3,5); // it will give 3times 5,
    for (auto i:vect4){
        cout << i << " ";
    }
    cout << endl;

    // front , back
    vector<int> vect5 = {5,6,1,4};
    cout << vect5.front() << endl;   // 5 
    cout << vect5.back() << endl;
    vect5.pop_back(); // 4 will be deleted
    cout << vect5.back() << endl;   // 1 as last element is popped out

    // erase 
    vector<int> vect6 = {5,6,1,8,7,4};
    for (auto i: vect6){
        cout << i << " ";
    }
    cout << endl;
        // in erase we can give one or two range
    vect6.erase(vect6.begin()+2 , vect6.end()-1); 
    for (auto i: vect6){
        cout << i << " "; // 8 7 will be erased.!
    }
    cout << endl;

    // we use square brackets to acess elements but,
    // we can acess element by using ".at()" function
    vector<int> vect7 = {5,6,1,8,7,4};
    cout << vect7.at(3) << endl; // 8

    // clear()
    vect7.clear();
    for (auto i: vect7){
        cout << i << " ";
    }
    cout << endl;

    // SWAPPING b/w two vectors by swap()
    vector<int> vect8 = {5,6,1};
    vector<int> vect9 = {8,7,4};
    swap(vect8,vect9);
    for (auto i: vect9){
        cout << i << " "; // 5 6 1
    }
    cout << endl;

    // INSERT , insert()
    vector<int> vectX = {8,1,4,2};
    vectX.insert(vectX.begin()+1,7); // 8 7 1 4 2

    for (auto i: vectX){
        cout << i << " ";
    }

}
void ListSTL(){
    // everything is same in list like as vector. it just has extra feature
    // push_front/emplace_front
    list<int> l1 = {2,4,5};
    l1.push_front(1);
    for (auto i : l1){
        cout << i << " ";
    }
}
void DequeSTL(){
    // behaves same as vector and list
    // for list and deque it works as linked list internally.
    deque<int> d1 = {2,4,5};
    for (auto i: d1){
        cout << i << " ";
    }
}
void StackSTL(){
    // Is is :- Last In First Out (LIFO)
    stack<int> st1;
    // we can also use emplace instead of push.
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    // to print stack 
    while (st1.empty() == false){
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;

    // what if i want to pprint first element
    stack<int> st2 ;
    // we can also use emplace instead of push.
    st2.push(2);
    st2.push(3);
    st2.push(4);
    st2.push(5);

    // size 
    cout << st2.size() << " " ; // 4

    st2.pop();
    st2.pop();
    st2.pop();
    cout << st2.top() << " "; // 2
    st2.pop();
    cout << st2.top() ; // it will not print anything (program will give runtime error)
}
void QueueSTL(){
    // same as stack but follows FIFO  (First In First Out)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    // we use front instead of top in queue.!
    while (q.empty() == false){
        cout << q.front() << " "; // 1 2 3
        q.pop();
    }
}
void PQueueSTL(){
    // it is internally heap..  MAX HEAP
    // by default it priortizes the maximum element .. 
    priority_queue<int> pq ;
    pq.push(71);
    pq.push(52);
    pq.push(223);
    pq.push(3);
    // here we use top function.
    while (pq.empty() == false){
        cout << pq.top() << " ";  // 223 71 52 3
        pq.pop();
    }

    // similarly if we want to priortize the minimum element.. MIN HEAP
    // vector<int> , greater<int> this will help to see min element first
    priority_queue<int , vector<int> , greater<int>> pq2 ;
    pq2.push(71);
    pq2.push(52);
    pq2.push(223);
    pq2.push(3);
    // here we use top function.
    while (pq2.empty() == false){
        cout << pq2.top() << " ";  // 3 52 71 223
        pq2.pop();
    }
}
void SetSTL(){
    // stores only unique elements and in "ascending order"
    // it won't repeat the repeated element that is inserted to emplaced!
    set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(9);
    s.insert(10);
    s.insert(1);
    s.insert(10);
    // to print
    for (auto i: s){
        cout << i << " "; // 1 2 5 9 10
    }
    cout << endl;

    // to find the element ,if it is there , print element else not
    auto i = s.find(12);
    if (i != s.end()){
        cout << *i; 
    }else {
        cout << "Not found" <<endl ;
    }

    // to check the element if it is there or not ..
    // 1= true (found), 0= false (not found) 
    cout << s.count(1) << endl; // 1 i.e., true.
    
    // to ERASE :- within range , using iterator, or element..
    set<int> s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(9);
    s1.insert(1);
    s1.insert(10);
    for (auto i: s1){
        cout << i << " ";  // 1 2 5 9 10
    }
    cout << endl;

    // now to erase an element.
    s1.erase(1); // 1 gets erased
    for (auto i: s1){
        cout << i << " ";  // 2 5 9 10
    }
    cout << endl;

    // now to erase using iterator.
    // as 1 is erased in s1. so first element is 2 and we want to erase suppose 
    // 9 element that is last second element

    auto i1 = s1.end();
    i1--; i1--; // as end is after the last element and we have to erase last second
    s1.erase(i1); // 9 gets erased..
    for (auto i: s1){
        cout << i << " ";  // 2 5 10
    }
    cout << endl;

    // now to "erase within range" .. as there are only 3 element..
    // so i m adding some elements here..
    s1.insert(14);
    s1.insert(12);
    s1.insert(15);
    // now , it has 2 5 10 12 14 15  elements ..
    // we have to remove from  5 to 14 that is 2 15 would be printed so,
    auto it = s1.begin();
    auto it2 = s1.end();
    // start range should be from 2nd position i.e., 5 so,
    it++;
    // end range would be till 15 so,
    it2--;
    s1.erase(it,it2); // start , end range given 
    for (auto i: s1){
        cout << i << " ";  // 2 15
    }
    cout << endl;

    // LOWER BOUND , lower_bound()
    // it returns the iterator pointing to the adress of the element which is
    // >= the element we gave.
    set<int> s2;
    s2.insert(8);
    s2.insert(2);
    s2.insert(50);
    s2.insert(12);
    s2.insert(15);
    // the set we have is , 2 8 12 15 20 , ix = iterator
    auto ix = s2.lower_bound(12);
    cout << *ix <<endl; // 12 as 12 >= "12"
    // if the element is not present i.e., the condition fails then, we have to 
    auto ix2 = s2.lower_bound(72);
    if (ix2 == s2.end()){
        cout << "We are in end" << endl;
    }

    // UPPER BOUND , upper_bound()
    // it does same (also in invalid condition) but condition is > only... like

    auto ix3 = s2.upper_bound(12);
    cout << *ix3 <<endl; // 15 as 15 > "12"
    
}
void MultiSetSTL(){
    // same as set , but it stores repeated elements too in the ascending order.
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(25);
    ms.insert(5);
    ms.insert(6);

    for (auto i: ms){
        cout << i << " "; // 1 1 1 1 2 5 6 25 
    }
    cout << endl;
    // almost everything is same but some functions like :-

    ms.erase(1);  // it will erase all the 1's
    for (auto i: ms){
        cout << i << " "; // 2 5 6 25 
    }
    cout << endl;

    // to erase only 1 --> 1s..
    multiset<int> ms2;
    ms2.insert(1);
    ms2.insert(1);
    ms2.insert(1);
    ms2.insert(1);
    ms2.insert(2);
    ms2.insert(25);
    ms2.insert(5);
    ms2.insert(6);
    ms2.erase(ms2.find(1));
    for (auto i: ms2){
        cout << i << " "; // 1 1 1 2 5 6 25  
    }
    cout << endl;

    // also cout() function is too diff.

    cout << ms2.count(1) << endl; // 3 as there are 3, 1's   
    
    //other then this all are same functions wrt sets.
}
void UnorderedSetSTL(){
    // in this there is no organised set of data, but
    // it will keep only unique data , i.e., no
    // repeated data will be kept.
    // every function is same as set but it won't be able
    // to perform upper and lower bound as they are not
    // sorted. 
    // this set's time complixity is O(1) but in very rare cases
    // when data collides or big amount of data then,
    // Time complexity will be O(N), other then, it
    // is faster.. 
    // we use sets when we want arranged data..
    // we use this for searching the data.. 

    unordered_set<int> uos;
    uos.insert(1);
    uos.insert(2);
    uos.insert(1);
    uos.insert(4);
    uos.insert(11);
    uos.insert(2);
    uos.insert(3);
    uos.insert(33);

    for (auto i: uos){
        cout << i << " "; // 3 4 2 33 11 1 (unordered data)
    }
    cout << endl;
    // searching data:- a
    auto x = uos.find(7);
    if (x != uos.end()){
        cout << *x; 
    }else{
        cout << "Element not found" << endl ;
    }

}
void MapSTL(){
    // maps contains key and value.!
    map<int, string> mpp;
    mpp[1] = "Bhavesh";
    mpp[2] = "Gaurav";
    mpp[2] = "GauraVV";
    mpp[3] = "Sample";
    mpp.insert({4, "Hitman"});

    // to print
    for (auto i : mpp){
        cout << i.first << " => " << i.second << endl; 
    }

    // size
    cout << mpp.size() << endl;

    // to find
    auto it = mpp.find(5);
    if (it != mpp.end()){
        cout << (*it).first << " " << (*it).second << endl;
    }else {
        cout << "Invalid" << endl;
    }

    // lowwer nd upperbound.
    auto ix = mpp.lower_bound(4);
    cout << (*ix).first << " " << (*ix).second << endl;

}
void UnorderedMapSTL(){
    // almost same as  unordered set.. but unique
    unordered_map<int, string> mpp;
    mpp[1] = "Bhavesh";
    mpp[5] = "Gaurav";
    mpp[2] = "GauraVV";
    mpp[3] = "Sample";
    mpp.insert({4, "Hitman"});
    for (auto i : mpp){
        cout << i.first << " => " << i.second << endl; 
    }
    // no lower bound and upper bound, for fast searching
}
void MultiMapSTL(){
    // this will sort all the keys (similar too) in 
    // ascending order. assign value and keys
    // using insert function
    multimap<int, string> mpp;
    mpp.insert({1,"One"});
    mpp.insert({1,"OneE"});
    mpp.insert({1,"OOne"});
    mpp.insert({2,"Two"});
    mpp.insert({2,"TwoO"});
    mpp.insert({3,"Three"});
    mpp.insert({0,"zero"});
    for (auto i: mpp){
        cout << i.first << "=>" << i.second << endl;
    }
    cout << endl;
    // now to find the range where 2 is.. 
    // we will use equal_range() function
    // it returns pair of iterators, first one returns
    // strting range, second returns ending range
    auto it = mpp.equal_range(2);
    for (auto i = it.first; i != it.second; i++){ // we use !=
    // because map doesn't stores in a consecutive order. that's
    // why we use != instead of <=...
        cout << (*i).first << "=> " << (*i).second << endl;
    }
}
void SortFunctionSTL(){
    int arr[5] = {7,4,2,8,0};
    sort(arr, arr+5); // range of sorting, the lst range given will
    // not be included so we have to +1 of the range ..
    for (int i =0 ; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // similarly for vector or any data type..

    vector<int> vect ={7,4,2,8,0};
    sort(vect.begin(),vect.end()); // end() is after the end element.
    for (auto i: vect){
        cout << i << " ";
    }
    cout << endl;

}
void AccumulateFunctionSTL(){
    // it takes 3 argument, starting and ending range..
    // with the integer we want to get summision of 
    // array that will be added.
    int arr[5] = {7,4,2,8,0};
    cout << accumulate(arr,arr+5,1) << endl;
}
void CountFunctionSTL(){
    int arr[6]= {1,5,1,6,8,2};
    // it counts how many times the element is repeating
    // it takes range and the number which has to be counted.
    cout << count(arr,arr+6,1);
    cout << endl;
} 
void FindFunctionSTL(){
    // find is a function which is returns iterator.
    // it takes 3 arg, range and element to be finded out.
    int arr[5] = {1,4,3,6,8};
    auto it= find(arr,arr+5,0);
    if (it == (arr +5) ) {
        cout << "not found";
    }else{
        cout << *it << endl; 
    }
}   
void PermutationSTL(){
    // it works in string ,array or any other datatype.
    // so, there are two types of permutation :- previous and next permutation .. these permutation works in order. like if there is "ABC" then it has 6 permutations , but if we enter "cab" then it would only have 2 permutation as output..
    // lets see next permutation first. we have two arguements , that is ranges
    string x= "abc";
    do {
        cout << x << endl;
    }while (next_permutation(x.begin(),x.end()));  // abc to cba
    cout << endl;

    do {
        cout << x << endl;
    }while (next_permutation(x.begin(),x.begin()+2)); // only ab will be taken, no c will be taken.
    cout << endl;

    // it works in correct order!
    string x2= "cab"; // next possible order will be printed
    do {
        cout << x2 << endl;
    }while (next_permutation(x2.begin(),x2.end())); 
    cout << endl;

    // Similarly there is previous permutation..! it will give output in reverse order 
    cout << "Prev Permutation" << endl;
    string y = "cba";
    do {
        cout << y << endl; // cba to abc.
    }while (prev_permutation(y.begin(),y.end())); 
    cout << endl;
    // similarly here also we will get permutations in ordered manner.!
}
void MaxMinElementSTL(){
    // it also takes args as range but it works using iterator.
    int arr[5] = {10,8,3,5,8};
    auto it = max_element(arr,arr+5);
    cout << *it << endl; // 10
    auto itr = min_element(arr,arr+5);
    cout << *itr << endl; // 3
}
void ReverseSTL(){
    // it reverses the container.!
    int arr[5] = {3,9,1,12,5};
    reverse(arr,arr+5);
    for (int i = 0 ; i<5 ; i++){
        cout << arr[i] << " "; // 5 12 1 9 3
    }
}
void PowerSTL(){
    // it gives power of any number we want.
    cout << pow(5,2) << endl; //25 as 5^2 = 25
}
bool ComparatorSTLx1(int e1, int e2){
    if (e1 < e2) {
        return false;
    } else {
        return true;
    }
}
bool ComparatorSTLx2(pair<int,int> el1 ,pair<int,int> el2){
    if (el1.second < el2.second) return false;
    if (el1.second > el2.second) return true;
    if (el1.first < el2.first) return true;
    return false;

}
void ComparatorMainSTL(){
    // when we use sort function , the function makes easier to sort, but what it does is , it has a internal comparator which compares the elements of the container.. like if element1 < element2 then true else false that means if el1 should be before or after el2.! by taking two elements.
    int arr[6]={5,1,3,7,1,9};
    sort(arr,arr+6, ComparatorSTLx1); // here we will give our comparator that will work according to our logic as third arguement.! and the logic we will be using will be for descending to ascending order
    for (int i=0;i<5;i++){
        cout << arr[i] << " "; // 1 1 3 5 7 
    }
    cout << endl;

// similarly another example.! for pair datatype
    pair<int , int> arr2[] = {{1,3},{5,4},{3,4},{2,3}}; 
    // now i want to arrange these in such a manner that the first will be in ascending and second will be in descending order. that is         {{3,4},{5,4},{1,3},{2,3}}
    sort(arr2,arr2+4, ComparatorSTLx2);
    for (int i=0;i<4;i++){
        cout << "{" << arr2[i].first << "," << arr2[i].second << "}"; 
    }
    cout << endl;

    // comparators are basically our logics that how we want the program to work.
}
int main() {
    // PairSTL();
    // VectorSTL();
    // ListSTL();
    // DequeSTL();
    // StackSTL();
    // QueueSTL();
    // PQueueSTL();
    // SetSTL();
    // MultiSetSTL();
    // UnorderedSetSTL();
    // MapSTL();
    // UnorderedMapSTL();
    // MultiMapSTL();
    // SortFunctionSTL();
    // AccumulateFunctionSTL();
    // CountFunctionSTL();
    // FindFunctionSTL();
    // PermutationSTL();
    // MaxMinElementSTL();
    // ReverseSTL();
    // PowerSTL();
    ComparatorMainSTL();

    return 0;
}