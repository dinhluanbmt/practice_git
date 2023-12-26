https://programmers.co.kr/ // Korean website similar to hackerrank, leetcode.

// kien thuc bo sung :

+ basic ve c++
https://www.geeksforgeeks.org/c-plus-plus/?ref=shm_outind

+ cac tinh nang moi trong c++ 11,17,20,23..
+ CMake **** ?
+ Linux/Unix *** ?
+ docker
+ CAN
+ Mutex
+ Git command, repository, gui...??
+ TCP/IP...

//============================Cracking The Coding.....Topic=================================================//
1. Array and Strings (ok)
2. Linked Lists (ok)
3. Stacks and Queues (ok)
4. Trees and Graphs  (ok)
5. Bit Manipulation (ok)
6. Math and Logic Puzzles (ok ?)
7. Object-oriented Design (ok ?
8. Recursion and Dynamic programming (ok?)
9. System Design and Scalability
10. Sorting and Searching (ok)
11. Testing (ok)
12. C++ (ok)
13. Java
14. Database
15. Thread and Locks
16. Moderate
17. Hard
//=========================================================================================================//

//====================== Big O and STL DS map, unordered_map, priority_queue, set, unordered_set, --> write note about this on Dev.to 
std::map and std::set ( std::unordered_map and std::unordered_set) share similar time complexity for their basic operations
====  Big O : STD::MAP . 
 - Building time: O(n*log(n))
 - Space complexity: O(n)
 - Find time complexity: O(log n)
 - Insert time complexity: O (log n)
 - Erase O(log n)
 - sorted order items.as default ascending ordered : ex: map<int,bool> my_m = {{2,true},{4,false}};
 - change the default order : ex: map<int,bool,greater<int>> my_m = {{2,true},{4,false}};
 struct People{
	 int age;
	 string name;
	 People(int a = 0, string s=""){
		 age = a;
		 name = s;
	 }
	 bool operator< (const People& p) const // this operator need for the default sorting (acesding order)
	 {
		 return age < p.age || (age == p.age && name < p.name);
	 }
	 bool operator> (const People& p) const // this operator need for the descending order
	 {
		 return age > p.age;
	 }
	 
 };
 std::map<People,bool,std::greater<People>> mm;

==== STD::UNORDERED_MAP =========.
 - Build time : O(n)
 - Space complexity: O(n)
 - find O(1)
 - insert O(1)
 - erase O(1) 
 - unsorted order.
 
=== STD::SET / UNORDERED_SET =====
- similar to map/ unordered_map in time complexity
- set<int> ms(iV.begin(),iV.end()); //ascending order.
- set<int,std::greater<int>> ms(iV.begin(),iV.end());// descending order.

==== STD::PRIORITY_QUEUE =========.
  == default order is Max Heap (max item is on top)
  == Build a priority_queue from a container O(n)
  == push n elements invidually into an empty priority_queue : O(n*log n)
  == push 1 element to a priority_queue with current item is n : O(log n)
  == pop operation O(log n) 
  == top operation O(1)
  
  priority_queue<int> pq(iV.begin(),iV.end()); // O(n) build time. max heap.
  priority_queue<int> pq;
  for(auto i: iV) pq.push(i); // O( n*log n) build time.
  
  priority_queue<int, vector<int>, std::greater<int>>  m_pq(iV.begin(), iV.end()); // O(n) build time, min heap.
  
//==========================================================================================================//

// the header that declares a function should be included in the source file that defines that function
decltype(odd)*
//******** Define vs Declare ?
//******** Parameter vs Argument ?
// Default Argument

//********** ASSERT and NDEBUG preprocessor variable  ********************//
// assert (expr); --> evaluates 'expr' and if the expression is false (i.e., zero) then assert writes
// a message and terminates the program. If the expression is true then assert does nothing.
// the behavior of assert depends on the status of a preprocessor variable name NDEBUG
// if NDEBUG is defined, assert does nothing. By default NDEBUG is not defined, so by default 
// assert performs a run-time check. --> we can "turn off" debugging by providing a #define NDEBUG

//******  Compiler static defined for debugging ******************
//cerr<<__func__<<__FILE__<<__LINE__ <<__DATE__<<__TIME__<<endl;

//============================================================================================================//

//********* Pointer to Function **********//
bool lengthCompare(const string& , const string&);
bool (*pf)(const string&, const string&);
--> pf = lengthCompare;


//*************IO Library *****************//
iostream     read, write from a stream
fstream      read, write from a file
sstream      read, write from a string

//***********Multibyte vs Unicode ***********//
- ASCII --> 8bit (1byte) --> 128 characters
- ASCII Extended --> 16Bits (2Bytes)--> 256 characters
- Unicode --> more than 256 characters...
//==========================================//
string word ="abc def";
stringstream ss(word)
string temp;
int count = 0;
while(ss>>temp)
	count++;

//*********** character in string *******//
isalnum(c) --> is a letter or a digit ?
isalpha(c) --> is a letter ?
isdigit(c) --> is a digit ?

//************ string add 
string str;
string str1;
str.append(str1); // -- append (add) str1 to str from back.
// try to use str.append instead of str +=str1;
char c;
str.push_back(c);
// string to i, double,...
stoi, stod
// int, double to string
string str_val = std::to_string(val);
//string sub = str.substr(0,5);
size_t pos = str.find(str1); // find_first_of....
         
//*****  string rotation check ************                       ************************
// a string str= "abcdefgh"   consider x ="abcd" y="efgh"  --> str = xy;
// a rotation of str is efghabcd mean yx; 
// we know that --> str + str (xyxy); --> we can find yx (rotation) in xyxy (str+str)

//****************matrix n*n rotation 90 clockwise ****************************************
  1. swap all items from both side of diagonal line (top left to bottm down)
  2. swap all items in row (most left, most right)
  
//**************** check whether 2 links list have intersect
 1. check whether they have same last item.(address, value)
 
 
 
  
...
int a = 'c' - 'b';
char  achar = '0' + 5; //be careful  achar = 5 - '0' will return difference val;   **********
char c = '8';
int val_c = c - '0';

//LeetCode problem: 
  - Multiply string
  - Add Strings

//****************** std map  *************//
map<int,int> m_map //--> by default short key increasing order
m_map.insert(make_pair(1,2)).second 
map<int,int,greater<int>> m_map // short key in descending order
unordered_map<Node*,int> // unordered map - not sort key.
//by the way : priority_queue default is in descending order (max heap)

if only check a key is in map or not USE map.find(key) or map.count(key) ***********
// map[key] will automatic insert key into map if key not in map---> slowdown speed, in crease map size
 
// LeetCode problem:
 - Linked List Cycle
 - Copy List with Random Pointer
 
 //***************std::move from <utility>, not the std::move from <algorithm>
 lvalue reference
rvalue reference
“l-value” refers to a memory location that identifies an object. 
“r-value” refers to the data value that is stored at some address in memory
// Declaring lvalue reference
int& lref = a;

// Declaring rvalue reference
int&& rref = 20;

Prior to C++11, if you had a temporary object, 
you could use a "regular" or "lvalue reference" to bind it, but only if it was const:
const string& name = getName(); // ok
string& name = getName(); // NOT ok

void printReference(const string& str) //func 1
{
    cout << " function const string& str : " << str << endl;
}
void printReference(string&& str) //func 2
{
    cout << "function string&& str :" << str << endl;
}
string getName()
{
    return "alex";
}
//ex: 
string me( "alex" );
// calls the first printReference function, taking an lvalue reference (func 1)
printReference(  me ); 
// calls the second printReference function, taking a mutable rvalue reference (func 2)
printReference( getName() ); 

//************  Move constructor and move assignment operator  **************************************
Move semantics and the standard library
Going back to our original example--we were using a vector, 
and we don't have control over the vector class 
and whether or not it has a move constructor or move assignment operator. 
Fortunately, the standards committee is wise, and move semantics has been added to the standard library.
This means that you can now efficiently return vectors, maps, strings 
and whatever other standard library objects you want, taking full advantage of move semantics.

Move semantics and rvalue reference compiler support
Rvalue references are supported by GCC, the Intel compiler and MSVC.

Moveable objects in STL containers
In fact, the standard library goes one step further. 
If you enable move semantics in your own objects by 
 -creating move assignment operators 
 - and move constructors, 
 when you store those objects in a container, 
the STL will automatically use std::move, 
automatically taking advantage of move-enabled classes to eliminate inefficient copies.

Copy semantics
Before C++11, the instantiation of unnecessary temporary objects was a problem. 
It usually slows downs the program and acquires extra space in memory. 
The instantiation of temporary objects usually occurs 
when we pass an object to a function by value or return an object through a function by value. 
It uses copy semantics which copies the actual data of the existing object 
and assigns it to the new temporary object. 
Copy semantics uses copy constructor and l-value references.

The intuition here is that you cannot use a "mutable" reference because,
 if you did, you'd be able to modify some object that is about to disappear,
 and that would be dangerous. 
 Notice, by the way, that holding on to a const reference to a temporary object 
 ensures that the temporary object isn't immediately destructed. 
 This is a nice guarantee of C++,
 but it is still a temporary object, so you don't want to modify it.
 
Copy Semantics (Copy Constructor)
Move Semantics, Move Constructors and Move Assignment Operators

In particular, std::move produces an xvalue expression that identifies its argument t. 
It is exactly equivalent to a static_cast to an rvalue reference type.
 
 //**************** std vector, multi-dimention vector ******/
 -- pass a function to algorithms/ customize, custom objects
 -- lambda expression
 // fast remove item in vector (case of not keep order)  ***************
   vector<int> iV;
   //remove item at pos  
   iV[pos] = std::move(iV.back());
   iV.pop_back();
           // insert item to sorted arrary and keep order         ***************
    auto it = lower_bound(iV.begin(),iV.end(), val);
	iV.insert(it,val);
// sorted vector/array algorithms
 - binary_search
 
 //Leetcode problem: 
  - word search
  - Insert Interval
  - Single Number II
  
 //**************** bitwise operation **********************//
 //LeetCode problem 
 - Bitwise ORs of Subarrays
 - Design Bitset
 - Prime Number of Set Bits in Binary Representation
 - Sort Integers by The Number of 1 Bits
 // ************customizing operation ***********************//
 bool isShorter(const string& s1, const string& s2)
 {
	 return s1.length() > s2.length();
 }
 sort(words.begin(),words.end(),isShorter);
 sort(nodeVec.begin(), nodeVec.end(), [](const Node* n1, const Node* n2){return n1->val > n2->val;});
 //LeetCode problem
   - Sort Integers by The Number of 1 Bits
  
 
  //************** generic algorithms ***********************//
  - find
  -sort
  - accumulate
  - equal
  - fill 
  - replace
 
 //**********overloading operator + < = *********//
 struct mSt{
	 int a;
	 mSt()
	 {
		 a = 0;
	 }
	 ~mSt()
	 {
		 
	 }
	 bool operator < (const mSt& obj)
	 {
		 return a < obj.a;
	 }
	 mSt& operator = (const mSt& obj)
	 {
		 a = obj.a;
		 return *this;
	 }
 };
 // set, unordered_set, queue,dqueue, priority_queue, stack, list ??
 std::set<int> mS; // set of unique item/
 std::pair<std::set<int>::iterator,bool> sp = mS.insert(val);
 mS.insert(val).second == false ; //--> item already existed;
 
 mS.find(val) != mS.end();// --> item already in set;
 
 + reference &, lval, rval ? function return as a reference ? default constructor vs assigment operator?
 vector pusk_back function operation ?
 
 
 + template< class T>, template<typename T> ???
  --- a template class, and for C++, the definitions of templates must be in the header file 
  (there are a few other options, but that is the easiest solution).
 
 //========** Random Crash App  ??????
 - Random variable ???
 - Uninitialized Variable
 - leak memory
 - External Dependencies
 
 //=====******* load test a web or append --> check maximum operating capacity.
  -- bottlenecks. ?
  - response time
  - throughtput
  - Resource utilization
  - maximum load that the system can bear.
  
  --> writing multi-thread program with thousand of threads which loading the page/app..
 //=====** test a pen : who, what, where, when, how, why ??
 Remember that a good tester understands exactly what he/she is testing before starting the work.
 //====== basic about Classes and Inheritance
 - virtual method
 virtual void test();
         void test_will_not_overight();// without virtual keyword
- pure virtual function
  virtual int pure_virtual_function() = 0;// must be define in each derived class.(all)
   // pure virtual function make class become abstract --> can not instantiate.
- virtual Destructor method of base class.
  // if not use virtual keyword when define Destructor of base class---> 
     -> the destructor of derived class will not called.
- a virtual function depends on a 'vtable' or 'virtual table'. if any function of a class is declared
to be virtual a vtable is constructed which stores address of the virtual functions of this class
-- if create a virtual metod in base class  then overide that method in derived class 
    we do not need to use virtual keyword in derived class .
	
- default paremeter function
  // int default_parmater_function(int a, int b = 0); declares
    // 
	default_parmater_function(int a, int b ) // define
	{
		/*.....*/
	}
- operator  overloading  +, <, >, = , == 
 ex: BookShelf BookShelf::operator+(const BookShelf& bs);
     bool BookShelf::operator= (const BookShelf& bs);
	 
- pointer and reference
 // int a* = new int; --> sizeof(a) --> in 32 bit System vs 64 bit System are difference
   *a = 123;
   int b = 100;
   a = &b;
   
   int* arr = new int[1024];
   
//- shallow copy vs deep copy ********************
struct test{
	char* ptr;
};
// shallow copy should be used very carefully.(potential of runtime error,creation, deletion
// two pointer share same memory address...
void shallow_copy( Test& src, Test& dest)
{
  dest.ptr = src.ptr;
}
void deep_copy(Test& str, Test& dest)
{
  dest.src = (char*)malloc(strlen(src.prt)+1);
  strcpy(des.ptr,src.ptr);
}
 // ----- volatile keyword in C *********************************
 the key word volatile inform the compiler that the value of variable it is applied to
 can change from the outside, without any update done by the code. this maybe done by the OS
 hardware, or another thread.because the value cang change unexpectedly, the compiler will
 therefor reload the value each time from memory
 int volatile x;
 volatile int x;
 volatile int* x;
 volatile variables are also useful when multi-threaded programs have global variables
 and any thread can modify these shared variables.
 
 //------------ Virtual Base class - Destructor in base class need to be declared virtual ********
 
 //****TREES and GRAPHS
 - In-order : left - current - right
 - Pre-order : current - left - right
 - Post : left - right - current
 
 //*********Increment (++) and Decrement (–) Operator Overloading in C++
 
 // forward declaration ???
 
 //next_permutation //
 
 The same program can also be implemented without using STL. Below is the code snippet for the same. 

The Idea is Based on the Following Facts: 

A sequence sorted in descending order does not have the next permutation. For example “edcba” does not have the next permutation.
For a sequence that is not sorted in descending order for example “abedc”, we can follow these steps.  
a) Traverse from the right and find the first item that is not following the ascending order. 
For example in “abedc”, the character ‘b’ does not follow the ascending order.
b) Swap the found character with the closest greater (or smallest greater) element on the right side of it. 
In the case of “abedc”, we have ‘c’ as the closest greater element. 
After swapping ‘b’ and ‘c’, the string becomes “acedb”.
c) After swapping, reverse the string after the position of the character found in step a. 
After reversing the substring “edb” of “acedb”, we get “acbde” which is the required next permutation. 
Optimizations in steps b) and c) 
a) Since the sequence is sorted in decreasing order, we can use binary search to find the closest greater element. 

c) Since the sequence is already sorted in decreasing order (even after swapping as we swapped with the closest greater), 
we can get the sequence sorted (in increasing order) after reversing it. 
#include <iostream>
 
using namespace std;
 
void swap(char* a, char* b)
{
    if (*a == *b)
        return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
void rev(string& s, int l, int r)
{
    while (l < r)
        swap(&s[l++], &s[r--]);
}
 
int bsearch(string& s, int l, int r, int key)
{
    int index = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (s[mid] <= key)
            r = mid - 1;
        else {
            l = mid + 1;
            if (index == -1 || s[index] >= s[mid])
                index = mid;
        }
    }
    return index;
}
 
bool nextpermutation(string& s)
{
    int len = s.length(), i = len - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        --i;
    if (i < 0)
        return false;
    else {
        int index = bsearch(s, i + 1, len - 1, s[i]);
        swap(&s[i], &s[index]);
        rev(s, i + 1, len - 1);
        return true;
    }
}
 
// Driver code
int main()
{
    string s = { "gfg" };
    bool val = nextpermutation(s);
    if (val == false)
        cout << "No Word Possible" << endl;
    else
        cout << s << endl;
    return 0;
}

 //=== trang 48 stl 17
 1. handle ambiguity.
 being asked an object-oriented design question, you should inquire who is going to use it and how they are going to use it
 who, what, where, when, how, why.
 2. define the core Objects
 3. analyze relationships
 analyse the relationships between the objects. which objects are members of which other objects,
 do any objects inherit from any others? are relationships many to many or one to many....
 4. investigate actions.
 -- Singleton and Factory pattern
 
 //=====Recursive and Dynamic  Programming
 
 
 //가속기 기술
 1. if else vs switch
 2. Move constructor and move assignment operator in C++11
 A C++ 03 compiler always calls the copy constructor when it needs to make a copy of an object.
 This can be wasteful in scenarios where the object being copied is a temporary
 3. Pass structure/class object to function by reference not by value\
 
 
 + communicate : a key goal of system design questions is to evaluate your ability to communicate
 stay engaged with the inteviewer. Ask them questions. Be open about the issues of your system.
 + Go broad first: don't dive straight in to the algorithm part or get excessively focused on one part
 + Use the whiteboard
 + Acknowledge interviewer concerns: interviewer will likely jump in with concerns. don't brush them off;
 validate them.
 + be careful about assumptions: an incorrect assumption can dramatically change the problem
 + state your assumptions explicitly
 + estimate when necessary
 + drive: as the candidate, you should stay in the driver's seat. this doesn't mean you don't talk
 Design Step - by - Step
 scope the problem.
 you can't design a system if you don't know what you are designing.  scoping the problem is important because you
 want to ensure that you're building what the interviewer wants and 
 make reasonable assumption
 Draw the major components
 ask question
 scope the problem
 make reasonable assumptions
 draw the major components
 identify  the key issues 
 redesign for the key issues
 
 processes can be thought of as an instance of a program in execution
 a process is an independent entity to which system resources
 each process executed in a seperate address space, one process can not access the variables and datastructure
 of another process, inter-process communications. pipes, files, socket...
 a thread exists with in a process and shares the process' resource (including heap space
 
 
 #include <iostream>
#include <thread>
#include <functional>
#include <mutex>
#include <condition_variable>
using namespace std::placeholders;
class Application
{
  std::mutex m_mutex;
  std::condition_variable m_condVar;
  bool m_bDataLoaded;
public:
  Application()
  {
    m_bDataLoaded = false;
  }
  void loadData()
  {
   // Make This Thread sleep for 1 Second
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   std::cout<<"Loading Data from XML"<<std::endl;
   // Lock The Data structure
   std::lock_guard<std::mutex> guard(m_mutex);
   // Set the flag to true, means data is loaded
   m_bDataLoaded = true;
   // Notify the condition variable
   m_condVar.notify_one();
  }
  bool isDataLoaded()
  {
    return m_bDataLoaded;
  }
  void mainTask()
  {
    std::cout<<"Do Some Handshaking"<<std::endl;
    // Acquire the lock
    std::unique_lock<std::mutex> mlock(m_mutex);
    // Start waiting for the Condition Variable to get signaled
    // Wait() will internally release the lock and make the thread to block
    // As soon as condition variable get signaled, resume the thread and
    // again acquire the lock. Then check if condition is met or not
    // If condition is met then continue else again go in wait.
    m_condVar.wait(mlock, std::bind(&Application::isDataLoaded, this));
    std::cout<<"Do Processing On loaded Data"<<std::endl;
  }
};
int main()
{
   Application app;
   std::thread thread_1(&Application::mainTask, &app);
   std::thread thread_2(&Application::loadData, &app);
   thread_2.join();
   thread_1.join();
   return 0;
}
condition_variable cd_V;

unique_lock<mutex> unqL(mt1);
cd_V.wait(unqL);
//cd.wait(unqL,bind(&Test::function,this));
cd_V.notify_one();

//===============SQL Query ================//
sql query
inner join
count(*)
group by
order 2(column idx) DESC/ASC
left JOIN 
isnull(column, 0)
ifnull(column, 0)

having count(*) > 1
ifnull(count(*), 0) as nCount


select Orders.OrderID, Customers.CustomerName
From Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID 
Normalize chuan hoa
denormalize

select working_area, count(*)
from agents
group by working_area
order by 2 DESC

Slect Student.StudentName, count(*)
from Students
Inner Join StudentCoures on
Studens.StudentID = StudentCourses.StudentID
group by students.StudentID
not in / in

update Requests
Set Status = 'close'
where Requests.AptID in (
select Apartments.AptID
from Apartments
where Apartments.BuildingID = '11'
and 
)
//=========== sqltest.net ====//
CREATE TABLE Students ( 
StudentID INT(6), 
firstname VARCHAR(30) NOT NULL, 
lastname VARCHAR(30) NOT NULL,  
email VARCHAR(50), 
reg_date TIMESTAMP 
); 

CREATE TABLE StudentCourses ( 
CourseID INT(6), 
StudentID INT(6)
); 

create table Courses(
CourseID INT(6),
courseName varchar(30) NOT NULL,
TeacherID INT(6)
);

create table Teachers(
TeacherID INT(6),
TeacherName varchar(30) NOT NULL
);

INSERT INTO `Courses` (`CourseID`, `courseName`, `TeacherID`) VALUES ('1', 'course1', '1'); 
INSERT INTO `Courses` (`CourseID`, `courseName`, `TeacherID`) VALUES ('2', 'course2', '2'); 
INSERT INTO `Courses` (`CourseID`, `courseName`, `TeacherID`) VALUES ('3', 'course3', '3'); 
INSERT INTO `Courses` (`CourseID`, `courseName`, `TeacherID`) VALUES ('4', 'course4', '4'); 

INSERT INTO `Teachers` (`TeacherID`, `TeacherName`) VALUES ('1', 'Teacher 1');
INSERT INTO `Teachers` (`TeacherID`, `TeacherName`) VALUES ('2', 'Teacher 2');
INSERT INTO `Teachers` (`TeacherID`, `TeacherName`) VALUES ('3', 'Teacher 3');
INSERT INTO `Teachers` (`TeacherID`, `TeacherName`) VALUES ('4', 'Teacher 4');

INSERT INTO `Students` (`StudentID`, `firstname`, `lastname`, `email`, `reg_date`) VALUES ('1', 'John1', 'Doe1', '1john.doe@sqltest.net', CURRENT_TIMESTAMP); 
INSERT INTO `Students` (`StudentID`, `firstname`, `lastname`, `email`, `reg_date`) VALUES ('2', 'John2', 'Doe2', '2john.doe@sqltest.net', CURRENT_TIMESTAMP); 
INSERT INTO `Students` (`StudentID`, `firstname`, `lastname`, `email`, `reg_date`) VALUES ('3', 'John3', 'Doe3', '3john.doe@sqltest.net', CURRENT_TIMESTAMP); 
INSERT INTO `Students` (`StudentID`, `firstname`, `lastname`, `email`, `reg_date`) VALUES ('4', 'John4', 'Doe4', '4john.doe@sqltest.net', CURRENT_TIMESTAMP); 
INSERT INTO `Students` (`StudentID`, `firstname`, `lastname`, `email`, `reg_date`) VALUES ('5', 'John5', 'Doe5', '5john.doe@sqltest.net', CURRENT_TIMESTAMP); 
INSERT INTO `Students` (`StudentID`, `firstname`, `lastname`, `email`, `reg_date`) VALUES ('6', 'John1', '6666', '66666@sqltest.net', CURRENT_TIMESTAMP); 

INSERT INTO `StudentCourses` (`CourseID`,`StudentID`) VALUES ('1', '1');
INSERT INTO `StudentCourses` (`CourseID`,`StudentID`) VALUES ('1', '2');
INSERT INTO `StudentCourses` (`CourseID`,`StudentID`) VALUES ('1', '5');
INSERT INTO `StudentCourses` (`CourseID`,`StudentID`) VALUES ('2', '1');
INSERT INTO `StudentCourses` (`CourseID`,`StudentID`) VALUES ('2', '4');
INSERT INTO `StudentCourses` (`CourseID`,`StudentID`) VALUES ('3', '5');

select Students.StudentID, Students.firstname, T.numsCourse 
from
(select Students.StudentID, count(StudentCourses.CourseID) as numsCourse
from Students
left join StudentCourses on
Students.StudentID = StudentCourses.StudentID
group by Students.StudentID) T
inner join Students on
Students.StudentID = T.StudentID

//==========//
CREATE TABLE Apartments ( 
AptID INT(6), 
UnitNumber VARCHAR(30) NOT NULL, 
BuildingId INT(6) 
); 

CREATE TABLE Buildings (
BuildingID INT(6),
ComplexID INT(6),
BuildingName VARCHAR(30),
BuildingAddress VARCHAR(50)
);
CREATE TABLE Requests(
RequestID INT(6),
Status VARCHAR(30),
AptID INT(6),
Description VARCHAR(50)
);

CREATE TABLE Complexes(
ComplexID INT(6),
ComplexName VARCHAR(50)
);
CREATE TABLE AptTenants(
TenantID INT(6),
AptID    INT(6)
);
CREATE TABLE Tenants (
TenantID INT(6),
TenantName VARCHAR(30)
);
INSERT INTO `Tenants` (`TenantID`, `TenantName`) VALUES ('1', 'Tenant1'); 
INSERT INTO `Tenants` (`TenantID`, `TenantName`) VALUES ('2', 'Tenant2'); 
INSERT INTO `Tenants` (`TenantID`, `TenantName`) VALUES ('3', 'Tenant3'); 
INSERT INTO `Tenants` (`TenantID`, `TenantName`) VALUES ('4', 'Tenant4'); 
INSERT INTO `Tenants` (`TenantID`, `TenantName`) VALUES ('5', 'Tenant5'); 

INSERT INTO `AptTenants` (`TenantID`, `AptID`) VALUES ('1', '1');
INSERT INTO `AptTenants` (`TenantID`, `AptID`) VALUES ('2', '2');
INSERT INTO `AptTenants` (`TenantID`, `AptID`) VALUES ('1', '3');

// list all tenants who rent >1 apt *******************************************
select T.TenantID, T.TenantName, Tb.nApts
from Tenants as T inner join
(select AT.TenantID, count(AT.AptID) as nApts
from AptTenants as AT
group by AT.TenantID
having count(AT.AptID) > 1 ) Tb 
on Tb.TenantID = T.TenantID

//query to list all tenants and their rent apts 
select T.TenantID, T.TenantName, ifnull(Tb.nApts,0)
from Tenants as T LEFT join
(select AT.TenantID, count(AT.AptID) as nApts
from AptTenants as AT
group by AT.TenantID ) Tb 
on Tb.TenantID = T.TenantID
order by Tb.nApts ASC

//
update Requests
set Status ='close'
where AptID in (select AptID from Apartments where BuildingID =11)


//Leetcode problem: 
 - word search
 - Insert Interval
 - Single Number II
 - Bitwise ORs of Subarrays
 - Design Bitset
 - Prime Number of Set Bits in Binary Representation
 - Sort Integers by The Number of 1 Bits
 - Design Bitset
 - Sqrt(x)
 - Find Kth Bit in Nth Binary String
 - Remove Duplicates from Sorted Array II
 - Linked List Cycle
 - Word Break
 - Sort Colors
 - Design HashMap
 - Count Unreachable Pairs of Nodes in an Undirected Graph
 - Is Graph Bipartite?
 - Even Odd Tree


- Communicate
- Go broad first 
- Use the whiteboard
- Acknowledge interviewer concerns
- becareful about assumptions 
- State your assumptions explicitly
- Drive
Design: Step-by-Step
1. Scope the Problem
2. Make reasonable assumptions
3. Draw the major components
4. Identify the key issues
5. Redesign for the key issues

Database Denormalization: Denormalization means adding redundant information  into database 
to speed up reads.
Database Partioning : split the data across multiple machines.



4.1 character in string, 
4.2 vector<char/string> is(simple map)
4.3 Char <-> int (only character from '0' - '9')
4.4 copy constructor, assignment operator
4.5 copy semantics, move semantic, move assignment operator
4.6 overloadding << operator 
4.7 fast erase vector item (order of items in vector is not important)
4.8 insert value to sorted array and keep oder
4.9 big size data structure/class/object --> use reference
4.10 use switch instead of complex if else
4.11 virtual function, abstract class
4.12 virtual destructor
4.13 map default sort order - ascending
4.14 priority_queue default sort order - descending
4.15 set defaut sort order - ascending
4.16 map vs [] operator
4.17 static obj, variable, member - shared object of classess
4.18 shallow copy vs deep copy
4.19 use sorted data to create map (fast)
4.20 bitwise operator
4.21 data size in windows vs linux
4.22 binary search smallest bigger in descending vector segment
4.23 next permutation
4.24 LRUCache with map and double link list
4.25 hash function in c++
4.26 remove all (value = val) in vector/string 
4.27 overloadding vs overriding
4.28 Code your own SmartPointer class
4.29 Lambda expression with struct 
4.30 Lambda expression with Class , friend function
...

//========================================//
//========= Design Pattern ========//

//---Basic Principle---//
a design guru thinks about how to create flexible designs that are maintainable
and that can cope with change.

not all of subclasses should have flying or quacking behavior, so inheritance isnot the right answer

when we need to change it, we could do so with the least possible impact on the existing code?

the one constant in software development : no matter how well you design an application
over time an application must grow and change or it will die.
we might want to instantiate a new MallardDuck instance
and initialize it with a specific type of flying behavior
and why not make sure that we change the behavior of duck dynamically, 
In other words, we should include behavior setter methods in Duck classes so that we can,
say, change the MallardDuck's flying behavior at runtime 
the point is to exploit polymorphism by programming to a supertype so that the actual
runtime object isn't locked into the code.

with this design, other types of objects can reuse our fly and quack behaviors because these behaviors
are no longer hiddend away in our Duck classes.
and we can add new behaviors without modifying any of existing behavior classes or touching any of Duck classes
that use flying behaviors 
so we can get the benefit of REUSE without all the baggage that comes along with inheritance.

Design Patterns are higher level than Libraries. Design Patterns tell us how to structure classes and objects
to solve certain problems,  and it is our job to adapt those designs to fit our particular application

Good OO designs are reusable, extensible, and maintainable 
most pattern alow some part of a system to vary independently of all other parts.
we often try to take what varies in a system and encapsulate it.
by coding t concrete implementations we have no way to add or remove other display elements without
making changes to the program.
publisher (Subject) -> Subscriber (Observers)

Subject Interface: 
each subject can have many observers.
Objects use this interface to register as observers and also to remove themselves from being observers
Subject have folowing methods: 
registerObserver()// register to become Observers, to get update 
removeObserver()// remove from being observer, not recive notify anymore
notifyObservers();// notify to all observers about the changes
 all potential observers need to implement the Observer interface. 
 a concrete subject always implements the subject interface.
 In addition to register and remove methods, the concrete subject implements a notifyObservers()
with Observer pattern, the Subject is the object that contains the state of controls it.
One Subject to Many Observers. 
because the subject is the sole owner of that data, the observers are dependent on the subject to update
them when the data changes 

the power of Loose Coupling. when two objects are loosely coupled. They can interact,
but have very litle knowledge of each other.
the Observer Pattern provides an object design where subjects and observers are loosely coupled.
the only thing the subject knows about an observer is that it implements a certain interface.
we can add new observers at any time.

Encapsulate what varies.
Favor composition over inheritance.
program to interfaces, not implementations
when i inherit behavior by subclassing, that behavior is set statically at compile time.
In addition, all subclasses must inherit the same behavior. however, I can extend an object's behavior
through composition, then i can do this dysnamically at runtime.

our goal is to allow classes to be easily to extended to incorporate new behavior
without modifying existing code.
Designs that are resilient to change and flexible enough to take on new
functionality to meet changing requirements
so here we're using inheritance to achive the type matching but we aren't  using 
inheritance to get behavior.

typing your code to a concrete class can make it more fragile and less flexible

No variable should hold a reference to a concrete class.
NO class should derived from a concrete class.
no method should override an implemented method of any of its base classes.

class PizzaStore{
public:
		virtual shared_ptr<Pizza> createPizza() = 0;
		shared_ptr<Pizza> orderPizza(){
			shared_ptr<Pizza> pizza = createPizza();
			pizza.bake();
			pizza.cut();
			pizza.box();
			return pizza;
		}
}

No variable should hold a reference to a concrete class.
No class should derive from concrete class.
No method should override an implemented method of any of it base classes.

Singleton pattern is a convention for ensuring one and only one object is instantiated
for a given class.

The command pattern allows you to decouple the requester of an action from the object 
that actually performs the action.
so, here the requester would be the remote control and the object that performs the action
would be an instance of one of your vendor classes.
command objects.
a command object encapsulates a request to do something(like turn on a light)
on specific object( the living room light object). 
Command object 
the RemoteControl manages a set of Command objects, one per button.
when button is pressed, the corresponding ButtonwasPushed method is called
which invokes the excute() method on the command,
that is the full extent of the remote's knowledge of the class it's is invoking as the Command object
the RemoteLoader creates a number of Command Objects that are loaded into the slots
of the RemoteControl. Each Command object encapsulates a request of a home automation device.
more uses of the command pattern: queuing request
commands give us away to package a piece of computation ( a receiver and a set of actions)
now, the computation itself may be invoked long after some client application creates the command object.
In fact, it may even be invoked by a different thread. we can take this scenario and apply it to 
many useful applications such as schedulers, thread pools and job queues
Imageine a job queue: you add commands to the queue on one end, an on the other end sit a group of threads.
command encapsulates a request as an object, thereby letting you parameterlize clients with different requests
the command pattern decouples an object, make a request from the one that knows how to perform it.
an invoker makes a request of a command object by calling its execute() method, which invokes those actions on the receiver

Invokers can be parameterized with Commands, even dynamically at runtime.

commands may support undo
macro command are a simple extention of command that allow multiple commands to be invoked.
1 implement the interface of the type you are adapting to. this is the interface your client
expects to see.
2. get a reference to the object that we are adapting.
3. implement all methods in the interface, the quack() translation between classes is easy.

facade pattern take a complex subsystem and make it easier to use by implementing a Facade class
facade not only simplifies an interface, it decouple a client from a subsystem of components
facade intent is to simplify
this principle prevents us from creating designs that have a large number of classes
coupled together so that change in one part of the system cascade to other parts
when you build a lot of dependencies between many classes, you are building a fragile system
that will be costly to maintain and complex for others to understand.
object passed parameter
least knowledge reduces the dependencies between objects and studies ahve shown this reduces software
maintenance

Comand pattern. Command pattern, RemoteControl, buttons with on/off functions.
command( object which execute
boil water
brewCoffeeGrinds()
pourInCup()
addSugarandMilk()
The template Method defines the steps of algorithm and 
allows subclasses to provide the implementation for one or more steps.
Template Method Pattern defineds the skeleton aof and algorithm in a method, deferring
some steps to subclasses.
the template method pattern defines the skeleton of an algorithm in a method,  deferring some steps
to subclasses. Template method lets subclasses redefine certain steps of an algorithm without 
changing the algorithm 's structure
The Abstract Class contains the template Method. the final templatemethod use the abstract operations
concreteclasses which implement the specific operations
The Hollywood Principle: Don't call us, We'll call you.

The composite Pattern allows us to build structures of objects in the form of trees that
contain both 
the state pattern alows an object to alter its behavior when it interal state changes.

#define FUNCTION(name, operator) void name(int& current, int candidate){!(current operator candidate) ? current = candidate : false;}
#define foreach( v, i) for(int i = 0; i< v.size();i++)
#define io(v) cin>> v 

overload
friend ostream& operator<<(ostream& out, const Complex& obj)
{
	out<<obj.a<<"+i"<<obj.b<<endl;
	return out;
}
Complex&

//===========
Assignment operator vs _BLOCK_TYPE_IS_VALID(pHead->nBlockUse)
The Assignment operator is simple and if a class do not have any pointers, the default assigment operater created by Compiler
is good enough. In my case, I have been using c++ for long time, but I did not really care about assigment operator until I got 
_BLOCK_TYPE_IS_VALID , with higher version of Visual studio you might get other exception, or in Linux environment just got dump value.
now, with chatGPT we can easy to find out what cause the error, but I still want to note this out, just to remind that we need define our own assigment operator 

when the class does not contain any pointers, the default assignment provided by Compiler is sufficient even it just performs a shadow copy.
but dealing with classes that contain pointers we can get _BLOCK_TYPE_IS_VALID(pHead->nBlockUse).
This error often occurs in Visual Studio when memory corruption or invalid memory access is encountered.
Similarly, in a Linux environment, you may encounter dump values or other exceptions.

it took me several hours of googling to figure out the reason

Available_Workshops*

include <vector>
#include <iostream>
typedef pair<int,int> p;
typedef vector<p> Available_Workshops;
Available_Workshops* initialize(int *start_time, int *duration, int n) {
    auto aw = new Available_Workshops(n);
    for(int i = 0; i < n; i++){
        aw->at(i).first = start_time[i];
        aw->at(i).second = start_time[i]+duration[i];
    }
    return aw;
}
int CalculateMaxWorkshops(Available_Workshops* data) {
    sort(data->begin(),data->end(), [](const p &a, const p &b) { return a.second < b.second; });
    int f = 0, res = 0;
    for(int i = 0; i < data->size(); i++){
        if(data->at(i).first >= f){
            res++;
            f = data->at(i).second;
        }
    }
    return res;
}

class Base{
	public:
	virtual ~Base(){}
};

class Derived : public Base{
	public:
	void display(){
		cout<<"display...."<<endl;
	}
};

Base* d = new Derived();
Derived* pt = dynamic_cast<Derived*>(d);

int intValue = 10;
double doubleValue = static_cast<double>(intValue);  // Implicit numeric conversion

Base* basePtr = new Derived;
Derived* derivedPtr = static_cast<Derived*>(basePtr);  // Pointer downcasting

int num = static_cast<int>(3.14);  // Explicit conversion from double to int

void* voidPtr = static_cast<void*>(basePtr);  // Pointer conversion to void*

Frostbite* s = dynamic_cast<Frosbite*>(spell);
if(s =="fire"){
	spell = new Fireball(power);
}
return spell;

Frosbite* s = dynamic_cast<Frosbite*>(spell);
show what you did, how you did it, and what the results were.
Communicate: a key goal of system design questions is to evaluate your ability to communicate.
stay enggaged with the interviewer. Ask them questions. be open about the issues of your system.

go broad first.

#include <iostream>
#include <typeinfo> // for typeid 
using namespace std;
class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
};

int main() {
    Base* basePtr = new Derived();

    if (typeid(*basePtr) == typeid(Derived)) {
        cout << "basePtr is an instance of Derived class" << std::endl;
    } else {
        cout << "basePtr is not ..." << std::endl;
    }
    delete basePtr;
    return 0;
}


Patterns are often used together and combined within the same design solution 
a compound pattern combines two or more patterns into a solution that solves a recurring or general problem.

who is going to use it and how they are going to use it,who, what, where, when how why 
handle ambiguity
define the core objects
analyse relationships 
analyse the relationships between objects. which objects are members of which other objects.
which objects inherit from any others. are relationships many to one or one to many, has a , is a.

intestigate the actions
we

we have many good reasons to use Singleton pattern( restricts the creation of multiple instances of a class and ensures that only one instance exists throughout the lifetime of an application)

sometimes, we 

for many reasons we want only one instance of a class exists thoughout the lifetime of an application
that is Singleton pattern


#pragma pack(push, 1)
struct MyStruct {
    // Structure members
};
#pragma pack(pop)



The #pragma pack directive is used in C and C++ to control the alignment of data structures in memory. 
It specifies how the compiler should align the members of a structure in memory. 
This is particularly important when working with structures that need to be packed tightly, 
such as when interacting with hardware or when dealing with file formats that have specific memory layouts.

=====================>>> #pragma pack(push, 1):
The push variant of #pragma pack is used to save the current packing setting onto a stack before changing it. 
This allows you to later restore the original packing setting using #pragma pack(pop).
#pragma pack(push, 1) sets the alignment to the specified value (in this case, 1) 
while saving the previous alignment setting on the stack.
This is useful when you want to temporarily change the packing for a specific section of code
 and then revert to the previous packing afterward.

===================> #pragma pack(1):
The #pragma pack directive without the push keyword 
directly sets the alignment to the specified value (1 in this case) without saving the previous alignment setting.
This can be used to change the alignment for the entire scope in which it is placed, 
but it does not provide a way to later revert to a previous packing setting.

//https://leetcode.com/problem-list/top-interview-questions

//======================================
* sort : time complexity O( nlog(n) )

* priority_queue (max heap).  the highest element  is on top. but not mean all items are sorted.
only quarantee that the highest element is on the top.
building time : O(n). 
pop   --> remove the highest element, and reorder the  queue. time complexity is O(log(n))

* multimap & * map. items are sorted in ascending order. (red-black tree)
 building time O( n*log(n) )
 space O(n)
 find(key) O(log(n)
* unordered_map . not sorted.  (hash table)
  building time O(n)
  find(key) O(1)
  space O(n)
* set building time complexity O( nlog(n) ), sorted order. ascending. red-black tree
  find O( log(n))
  space O(n)
* unordered_set ( hash table) . building time complexity O(n), not sorted
	finding time complexity O(1)

//======================================

* Principle : 
Standard Multiple Choice :
POE : Process of Elimination ( Phuong phap loai tru )
1. Quantitative Comparison : 
Compare, Don't Calculate 
2. set up and solve equation

Trap Answers :  If problem seems way to easy, be careful and double-check your work.

Fraction = numerator / denominator . Phan so = tu so / mau so


denominator. denominator.

Digit refers to the numbers that make up other numbers. 0,1,2,3,4,5,6,7,8,9. 
every number is made up of one or more digits.
the number 10897  has five digits.
* 7 is the ones (units) digit.
* 9 is the tens digit.
* 8 is the hundreds digit.
* 0 is the thousands digit.
* 1 is the ten-thousands digit.

* An Integer is divisible by 2 if its units digit is divisible by 2.
* An Integer is divisible by 3 if the sum of its digits is divisible by 3.
   2145 == 2 + 1 + 4 + 5 = 12 . and 12 is divisible by 3 ==> 2145 is divisible by 3.
* An Integer is divisible by 4 if its last TWO digits form a number that's divisible by 4
    712 --> 12 is divisible by 4 ==> 712 is divisible by 4.
	
* An Integer is divisible by 5 if its units digit is either 0 or 5.
* An Integer is divisible by 6 if it is divisible by both 2 and 3.

* An Integer is divisible by 9 if sum of its digits is divisible by 9.

* Plug In : try all answers to find the correct one.( its good if we can eliminate before)

* Quadratic Equations : aX2 + bX + c = 0 ==> delta = b2 - 4ac. 
  delta < 0. no x sastified
  delta = 0 . x = -b/2a
  delta > 0 . x1 = (-b + sqrt(delta))/2a.   x2 = (-b -sqrt(delta))/2a .
  
  or just try to factoring an quadric equation to (x  )(x  ) = 0. ==> then solve the equation.
  
  
  
  
  
  //==========
  Computing is pop culture. []pop culture holds a disdain for history. Pop culture is all about
  idenity and feeling like you're participating.
  
  figure1-1 gives a glimpse of what this may look like ( we will go into detail in later chapter)
  those factors depend very much on the situation
  reliability
  you get variation random additional latency could be introduced by a context switch to a background process the loss of a network packet and TCP retransmission
  a garbage collection pause, a page fault forcing a read from disk, mechanical vibration in the server rack
  yet unfortunately, many people working on software systems dislike maintenance of so-called legacy systems.
  perhaps it involves fixing other people's mistakes, or working with platform that are now outdated, or systems that were forced to do things
  they were never intended for.
  monitoring the health of the system and quickly restoring service if it goes into bad state
  Keeping software and platforms up to date, including security patches.
  Keeping tabs on how different systems affect each other
  anticipating future problems and solving them before they occurs
  establishing good practices and tools for deployment,
  peforming complex maintenance taks, such as moving an application from one platform to another 
  preserving the organization's knowledge about the system, even as individual people come and go.
  hierarchical hierarchical hierarchical
  Different applications have different requirements, and the best choice of technology for one use case may well
  be different from the best choice for another use case.
  curly bracket, curly braces.
  
  //=========
  인맥 정리. 인맥 다이어트
  친하지 않는 사람들을 
  인맥에서 빼는 행동을 인맥 다이어트라고 볼수 있다. 스트레스
  vector<int> ret;
  TreeNode* node = root;
  stack<TreeNode*> mst;
  while( node || !mst.empty()){
	  while(node){
		  mst.push(node);
		  node = node->left;
	  }
	  node = mst.top();
	  mst.pop();
	  ret.push_back(node->val);
	  node = node->right;
  }
  
  I 1
  V 5
  X 10
  L 50
  
  unordered_map<char, int> um = {{'I',1},{'V', 5}};
  
  bool isPrime(int n){
	  if( n < 2) return false;
	  int i;
	  for(i = 2; i < sqrt(n); i++){
		  if(n%i == 0) return false;
	  }
	  return true;
  }
  
  void crossOff(vector<bool>& flags, int prime){
	  for(int i = prime* prime; i< flags.size(); i += prime){
		  flags[i] = false;
	  }
  }
  int getNextPrime(vector<bool>& flags, int prime)
  {
	  int next = prime +1;
	  while(next < flags.size() && !flags[next]) next++;
	  return next;
  }
  void generate(int max)
  {
	  vector<bool> primeVec(max+1,true);
	  int prime = 2;
	  while(prime <= sqrt(max)){
		  crossOff(primeVec,prime);
		  prime = getNextPrime(primeVec,prime);
	  }
  }
  
  bool getBit(int n, int i){
	  return ((n & (1<<i)) != 0);
  }
  sort(tv.begin(),tv.end(),[](const ListNode* a, const ListNode* b){ return a->val < b->val;});
  
  Two players are playing a game of Tower Breakers!,  Player 1 always moves first.
  and both players always play optimally. the rules of the game are as follows
  Initially, there are n Towers
  Each Tower is of height m.
  players move in alternating turns
  in each turn, a player can choose a tower of height x and reduce its height to y, where 1<=y<x and y evenly divides x
  if the current player is unable to make a move, they lose the game.
  Given the values of n and m, determine which player will win. if the first player wins, return 1. Otherwise, return 2.
  
  void travel(Node* root, vector<int>& inoder){
	  if(!root) return;
	  travel(root->left, inorder);
	  inorder.push_back(root);
	  travel(root->right,inorder);
  }
  
error C2672: 'pcl::Grabber::registerCallback': no matching overloaded function found
error C2784: 'boost::signals2::connection pcl::Grabber::registerCallback(const std::function<_Fty> &)': could not deduce template argument for 'const std::function<_Fty> &' from 'test_velodyne_vpl16::<lambda_94a931b1da96b3dcd1cdec73172d5ffb>'
message : see declaration of 'pcl::Grabber::registerCallback'

error C2072: 'viewer_cb': initialization of a function
error C2065: 'viewer_cb': undeclared identifier



vtk version vtk-9.3

pcl verion 

//
 visualise point cloud data
Exception thrown at 0x00007FFD6D5501B9 (vtkCommonCore-9.3.dll) in PCL_Test_proj.exe: 0xC0000005: Access violation reading location 0x000000000000003F 



//=============
#include <pcl/io/vlp_grabber.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <boost/asio/ip/address.hpp>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <vtkPCLConversions.h>

int test_velodyne_vpl16()
{
    // Create a Velodyne VLP-16 Grabber to capture data from the sensor at the specified IP address and port.
    boost::asio::ip::address ipAddress = boost::asio::ip::address::from_string("192.168.22.201");
    pcl::VLPGrabber grabber(ipAddress, 2368);

    vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    renderWindow->AddRenderer(renderer);
    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    renderWindow->SetInteractor(renderWindowInteractor);

    void viewerCallback(const pcl::PointCloud<pcl::PointXYZI>::ConstPtr & cloud)
    {
        vtkSmartPointer<vtkPolyData> polydata = vtkSmartPointer<vtkPolyData>::New();
        pcl::toPCLPointCloud2(*cloud, polydata);

        vtkSmartPointer<vtkPCLConversions> converter = vtkSmartPointer<vtkPCLConversions>::New();
        vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();

        converter->PCL2ToVTK(polydata, actor);
        renderer->AddActor(actor);
        renderWindow->Render();
    }

    // Register the callback function.
    grabber.registerCallback(&viewerCallback);

    // Start capturing data from the sensor.
    grabber.start();

    renderWindowInteractor->Start();

    // Stop the data capture and release resources when done.
    grabber.stop();

    return 0;
}

//=============

int test_pcl16() {
   // pcl::VLPGrabber grabber("192.168.22.201", 2368); // Replace with the correct IP address and port of your sensor
    boost::asio::ip::address ipAddress = boost::asio::ip::address::from_string("192.168.22.201");
    pcl::VLPGrabber grabber(ipAddress, 2368);  

    // Define a const std::function for the callback
    const std::function<void(const pcl::PointCloud<pcl::PointXYZI>::ConstPtr&)> callbackFunction = cloudCallback;

    grabber.registerCallback(callbackFunction);

    grabber.start();

    std::cout << "Listening for VLP-16 data. Press Ctrl-C to exit." << std::endl;

    while (true) {
        // You can add other processing here as needed
    }

    grabber.stop();

    return 0;
}


///

Exception thrown: read access violation.
_Scary->**_Myhead** was 0x6.


2023-11-07 13:35:05.760 (   0.419s) [                ]        vtkPolyData.cxx:990    ERR| vtkPolyData (000001F00D62A270): Only vtkCellLinks are currently supported.
2023-11-07 13:35:05.799 (   0.457s) [                ]        vtkPolyData.cxx:990    ERR| vtkPolyData (000001F00D62A270): Only vtkCellLinks are currently supported.
2023-11-07 13:35:05.809 (   0.466s) [                ]vtkDataSetAttributes.cx:1608  WARN| vtkPointData (000001F00D5BABD0): Can not set attribute Scalars. This attribute must be a subclass of vtkDataArray.
2023-11-07 13:35:05.826 (   0.483s) [                ]vtkWin32OpenGLRenderWin:267    ERR| vtkWin32OpenGLRenderWindow (000001F00AEE45D0): wglMakeCurrent failed in MakeCurrent(), error: ?碩벶?[1;0m
2023-11-07 13:35:05.831 (   0.489s) [                ]vtkWin32OpenGLRenderWin:267    ERR| vtkWin32OpenGLRenderWindow (000001F00AEE45D0): wglMakeCurrent failed in MakeCurrent(), error: 承먣텏품
2023-11-07 13:35:05.846 (   0.503s) [                ]vtkWin32OpenGLRenderWin:267    ERR| vtkWin32OpenGLRenderWindow (000001F00AEE45D0): wglMakeCurrent failed in MakeCurrent(), error: 雙蓆듖?[1;0m
2023-11-07 13:35:05.854 (   0.511s) [                ]   vtkShaderProgram.cxx:437    ERR| vtkShaderProgram (000001F00D65BD40): 1: #version 150
2: #ifndef GL_ES
3: #define highp
4: #define mediump
5: #define lowp
6: #endif // GL_ES
7: #define attribute in
8: #define varying out
9:
10:
11: /*=========================================================================
12:
13:   Program:   Visualization Toolkit
14:   Module:    vtkPolyData2DVS.glsl
15:
16:   Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
17:   All rights reserved.
18:   See Copyright.txt or http://www.kitware.com/Copyright.htm for details.
19:
20:      This software is distributed WITHOUT ANY WARRANTY; without even
21:      the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
22:      PURPOSE.  See the above copyright notice for more information.
23:
24: =========================================================================*/
25:
26: // all variables that represent positions or directions have a suffix
27: // indicating the coordinate system they are in. The possible values are
28: // MC - Model Coordinates
29: // WC - WC world coordinates
30: // VC - View Coordinates
31: // DC - Display Coordinates
32:
33: in vec4 vertexWC;



2023-11-07 13:35:06.414 (   1.071s) [                ]   vtkShaderProgram.cxx:438    ERR| vtkShaderProgram (000001F00D65D6C0): Could not create shader object.
2023-11-07 13:35:06.435 (   1.092s) [                ]vtkOpenGLVertexArrayObj:265    ERR| vtkOpenGLVertexArrayObject (000001F00DD0D7E0): attempt to add attribute without a program for attribute ndCoordIn
2023-11-07 13:35:06.457 (   1.114s) [                ]vtkOpenGLQuadHelper.cxx:70    WARN| Error binding ndCoords to VAO.
2023-11-07 13:35:06.478 (   1.136s) [                ]vtkOpenGLRenderWindow.c:1062   ERR| vtkWin32OpenGLRenderWindow (000001F00AEE45D0): Couldn't build the shader program for resolving msaa.
2023-11-07 13:35:06.501 (   1.158s) [                ]vtkWin32OpenGLRenderWin:267    ERR| vtkWin32OpenGLRenderWindow (000001F00AEE45D0): wglMakeCurrent failed in MakeCurrent(), error: 罌먣텏품
2023-11-07 13:35:06.523 (   1.181s) [                ]   vtkShaderProgram.cxx:437    ERR| vtkShaderProgram (000001F00D65C180): 1: #version 150

Error in VtkPolyData.cxx line 990 only vtkCellLinks are currently supported




fromHandlersToScreen] PointCloud <cloud> requested with an invalid color handler (PointCloudColorHandlerGenericField)!
[fromHandlersToScreen] PointCloud <cloud> requested with an invalid color handler (PointCloudColorHandlerGenericField)!
[fromHandlersToScreen] PointCloud <cloud> requested with an invalid color handler (PointCloudColorHandlerGenericField)!

//===

#include <iostream>
#include <string>
#include <vector>

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/vlp_grabber.h>
#include <pcl/console/parse.h>
#include <pcl/visualization/pcl_visualizer.h>

// Point Type
// pcl::PointXYZ, pcl::PointXYZI, pcl::PointXYZRGBA
typedef pcl::PointXYZI PointType;

int main()
{
    

    std::string ipaddress( "192.168.1.70" );
    std::string port( "2368" );
    

    // Point Cloud
    pcl::PointCloud<PointType>::ConstPtr cloud;

    // PCL Visualizer
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer( new pcl::visualization::PCLVisualizer( "Velodyne Viewer" ) );
    viewer->addCoordinateSystem( 3.0, "coordinate" );
    viewer->setBackgroundColor( 0.0, 0.0, 0.0, 0 );
    viewer->initCameraParameters();
    viewer->setCameraPosition( 0.0, 0.0, 30.0, 0.0, 1.0, 0.0, 0 );

    // Point Cloud Color Hndler
    pcl::visualization::PointCloudColorHandler<PointType>::Ptr handler;
    const std::type_info& type = typeid( PointType );
    if( type == typeid( pcl::PointXYZ ) ){
        std::vector<double> color = { 255.0, 255.0, 255.0 };
        boost::shared_ptr<pcl::visualization::PointCloudColorHandlerCustom<PointType>> color_handler( new pcl::visualization::PointCloudColorHandlerCustom<PointType>( color[0], color[1], color[2] ) );
        handler = color_handler;
    }
    else if( type == typeid( pcl::PointXYZI ) ){
        boost::shared_ptr<pcl::visualization::PointCloudColorHandlerGenericField<PointType>> color_handler( new pcl::visualization::PointCloudColorHandlerGenericField<PointType>( "intensity" ) );
        handler = color_handler;
    }
    else if( type == typeid( pcl::PointXYZRGBA ) ){
        boost::shared_ptr<pcl::visualization::PointCloudColorHandlerRGBField<PointType>> color_handler( new pcl::visualization::PointCloudColorHandlerRGBField<PointType>() );
        handler = color_handler;
    }
    else{
        throw std::runtime_error( "This PointType is unsupported." );
    }

    // Retrieved Point Cloud Callback Function
    boost::mutex mutex;
    boost::function<void( const pcl::PointCloud<PointType>::ConstPtr& )> function =
        [ &cloud, &mutex ]( const pcl::PointCloud<PointType>::ConstPtr& ptr ){
            boost::mutex::scoped_lock lock( mutex );

            /* Point Cloud Processing */

            cloud = ptr;
        };

    // VLP Grabber
    boost::shared_ptr<pcl::VLPGrabber> grabber;
    if( !pcap.empty() ){
        std::cout << "Capture from PCAP..." << std::endl;
        grabber = boost::shared_ptr<pcl::VLPGrabber>( new pcl::VLPGrabber( pcap ) );
    }
    else if( !ipaddress.empty() && !port.empty() ){
        std::cout << "Capture from Sensor..." << std::endl;
        grabber = boost::shared_ptr<pcl::VLPGrabber>( new pcl::VLPGrabber( boost::asio::ip::address::from_string( ipaddress ), boost::lexical_cast<unsigned short>( port ) ) );
    }

    // Register Callback Function
    boost::signals2::connection connection = grabber->registerCallback( function );

    // Start Grabber
    grabber->start();

    while( !viewer->wasStopped() ){
        // Update Viewer
        viewer->spinOnce();

        boost::mutex::scoped_try_lock lock( mutex );
        if( lock.owns_lock() && cloud ){
            // Update Point Cloud
            handler->setInputCloud( cloud );
            if( !viewer->updatePointCloud( cloud, *handler, "cloud" ) ){
                viewer->addPointCloud( cloud, *handler, "cloud" );
            }
        }
    }

    // Stop Grabber
    grabber->stop();

    // Disconnect Callback Function
    if( connection.connected() ){
        connection.disconnect();
    }

    return 0;
}





cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(pcd_write)
find_package(PCL 1.2 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})
add_executable (pcd_write pcd_write.cpp)
target_link_libraries (pcd_write ${PCL_LIBRARIES})

//==========

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/hdl_grabber.h>
#include <pcl/visualization/point_cloud_color_handlers.h>
#include <pcl/visualization/cloud_viewer.h>
#include <pcl/console/parse.h>
  
using namespace std::chrono_literals;
using namespace pcl::console;
using namespace pcl::visualization;
 
 class SimpleHDLViewer
 {
   public:
     typedef pcl::PointCloud<pcl::PointXYZI> Cloud;
     typedef Cloud::ConstPtr CloudConstPtr;
 
     SimpleHDLViewer (pcl::Grabber& grabber,
         pcl::visualization::PointCloudColorHandler<pcl::PointXYZI> &handler) :
         cloud_viewer_ (new pcl::visualization::PCLVisualizer ("PCL HDL Cloud")),
         grabber_ (grabber),
         handler_ (handler)
     {
     }
 
     void cloud_callback (const CloudConstPtr& cloud)
     {
       std::lock_guard<std::mutex> lock (cloud_mutex_);
       cloud_ = cloud;
     }
 
     void run ()
     {
       cloud_viewer_->addCoordinateSystem (3.0);
       cloud_viewer_->setBackgroundColor (0, 0, 0);
       cloud_viewer_->initCameraParameters ();
       cloud_viewer_->setCameraPosition (0.0, 0.0, 30.0, 0.0, 1.0, 0.0, 0);
       cloud_viewer_->setCameraClipDistances (0.0, 50.0);
 
       std::function<void (const CloudConstPtr&)> cloud_cb =
           [this] (const CloudConstPtr& cloud) { cloud_callback (cloud); };
       boost::signals2::connection cloud_connection = grabber_.registerCallback (
           cloud_cb);
 
       grabber_.start ();
 
       while (!cloud_viewer_->wasStopped ())
       {
         CloudConstPtr cloud;
 
         // See if we can get a cloud
         if (cloud_mutex_.try_lock ())
         {
           cloud_.swap (cloud);
           cloud_mutex_.unlock ();
         }
 
         if (cloud)
         {
           handler_.setInputCloud (cloud);
           if (!cloud_viewer_->updatePointCloud (cloud, handler_, "HDL"))
             cloud_viewer_->addPointCloud (cloud, handler_, "HDL");
 
           cloud_viewer_->spinOnce ();
         }
 
         if (!grabber_.isRunning ())
           cloud_viewer_->spin ();
 
        std::this_thread::sleep_for(100us);
      }
 
       grabber_.stop ();
 
       cloud_connection.disconnect ();
     }
 
   pcl::visualization::PCLVisualizer::Ptr cloud_viewer_;
 
    pcl::Grabber& grabber_;
    std::mutex cloud_mutex_;

    CloudConstPtr cloud_;
    pcl::visualization::PointCloudColorHandler<pcl::PointXYZI> &handler_;
};

int main (int argc, char ** argv)
{
  std::string hdlCalibration, pcapFile;

  parse_argument (argc, argv, "-calibrationFile", hdlCalibration);
  parse_argument (argc, argv, "-pcapFile", pcapFile);

  pcl::HDLGrabber grabber (hdlCalibration, pcapFile);

  pcl::visualization::PointCloudColorHandlerGenericField<pcl::PointXYZI> color_handler ("intensity");

  SimpleHDLViewer v (grabber, color_handler);
  v.run ();
  return (0);
}

//Interface: \Device\NPF_{F5D4C3E5-CFC1-4923-ADE7-142E9F46A50E} (Realtek PCIe GBE Family Controller)


Interface: \Device\NPF_{C53D63EE-5A90-41CB-9F1F-012269DD0619} (WAN Miniport (Network Monitor))
Interface: \Device\NPF_{75DDA576-671C-4370-80BF-1603BF72B046} (WAN Miniport (IPv6))
Interface: \Device\NPF_{6E97D618-EC42-4888-B3D6-BDC9F78D6C32} (WAN Miniport (IP))
Interface: \Device\NPF_{F5D4C3E5-CFC1-4923-ADE7-142E9F46A50E} (Realtek PCIe GBE Family Controller)
Interface: \Device\NPF_{56887D31-2AB0-4685-B4D4-F41538E525B4} (VirtualBox Host-Only Ethernet Adapter)
Interface: \Device\NPF_Loopback (Adapter for loopback traffic capture)


//=====

/*
 * Use pcap_open_live() to open a packet capture device.
 * Use pcap_dump() to output the packet capture data in
 * binary format to a file for processing later.
 */
 
#include <unistd.h>
#include <stdio.h>
#include <pcap.h>
#include <netinet/in.h>
#include <sys/socket.h>

#define IFSZ 16
#define FLTRSZ 120
#define MAXHOSTSZ 256
#define PCAP_SAVEFILE "./pcap_savefile"

extern char *inet_ntoa();

int
usage(char *progname)
{
        printf("Usage: %s <interface> [<savefile name>]\n", basename(progname));
        exit(11);
}

int
main(int argc, char **argv)
{
        pcap_t *p;               /* packet capture descriptor */
        struct pcap_stat ps;     /* packet statistics */
        pcap_dumper_t *pd;       /* pointer to the dump file */
        char ifname[IFSZ];       /* interface name (such as "en0") */
        char filename[80];       /* name of savefile for dumping packet data */
        char errbuf[PCAP_ERRBUF_SIZE];  /* buffer to hold error text */
        char lhost[MAXHOSTSZ];   /* local host name */
        char fltstr[FLTRSZ];     /* bpf filter string */
        char prestr[80];         /* prefix string for errors from pcap_perror */
        struct bpf_program prog; /* compiled bpf filter program */
        int optimize = 1;        /* passed to pcap_compile to do optimization */
        int snaplen = 80;        /* amount of data per packet */
        int promisc = 0;         /* do not change mode; if in promiscuous */
                                 /* mode, stay in it, otherwise, do not */
        int to_ms = 1000;        /* timeout, in milliseconds */
        int count = 20;          /* number of packets to capture */
        u_int32 net = 0;         /* network IP address */
        u_int32 mask = 0;        /* network address mask */
        char netstr[INET_ADDRSTRLEN];   /* dotted decimal form of address */
        char maskstr[INET_ADDRSTRLEN];  /* dotted decimal form of net mask */
        int linktype = 0;        /* data link type */
        int pcount = 0;          /* number of packets actually read */

        /*
         * For this program, the interface name must be passed to it on the
         * command line. The savefile name may be optionally passed in
         * as well. If no savefile name is passed in, "./pcap_savefile" is
         * used. If there are no arguments, the program has been invoked
         * incorrectly.
         */
        if (argc < 2)
                usage(argv[0]);

        if (strlen(argv[1]) > IFSZ) {
                fprintf(stderr, "Invalid interface name.\n");
                exit(1);
        }
        strcpy(ifname, argv[1]);

        /*
         * If there is a second argument (the name of the savefile), save it in
         * filename. Otherwise, use the default name.
         */
        if (argc >= 3)
                strcpy(filename,argv[2]);
        else
                strcpy(filename, PCAP_SAVEFILE);

        /*
         * Open the network device for packet capture. This must be called
         * before any packets can be captured on the network device.
         */
        if (!(p = pcap_open_live(ifname, snaplen, promisc, to_ms, errbuf))) {
                fprintf(stderr, "Error opening interface %s: %s\n",
                        ifname, errbuf);
                exit(2);
        }

        /*
         * Look up the network address and subnet mask for the network device
         * returned by pcap_lookupdev(). The network mask will be used later 
         * in the call to pcap_compile().
         */
        if (pcap_lookupnet(ifname, &net, &mask, errbuf) < 0) {
                fprintf(stderr, "Error looking up network: %s\n", errbuf);
                exit(3);
        }

        /*
         * Create the filter and store it in the string called 'fltstr.'
         * Here, you want only incoming packets (destined for this host),
         * which use port 69 (tftp), and originate from a host on the
         * local network.
         */

        /* First, get the hostname of the local system */
        if (gethostname(lhost,sizeof(lhost)) < 0) {
                fprintf(stderr, "Error getting hostname.\n");
                exit(4);
        }

        /*
         * Second, get the dotted decimal representation of the network address
         * and netmask. These will be used as part of the filter string.
         */
        inet_ntop(AF_INET, (char*) &net, netstr, sizeof netstr);
        inet_ntop(AF_INET, (char*) &mask, maskstr, sizeof maskstr);

        /* Next, put the filter expression into the fltstr string. */
        sprintf(fltstr,"dst host %s and src net %s mask %s and udp port 69",
                lhost, netstr, maskstr);

        /*
         * Compile the filter. The filter will be converted from a text
         * string to a bpf program that can be used by the Berkely Packet
         * Filtering mechanism. The fourth argument, optimize, is set to 1 so
         * the resulting bpf program, prog, is compiled for better performance.
         */
        if (pcap_compile(p,&prog,fltstr,optimize,mask) < 0) {
                /*
                 * Print out appropriate text, followed by the error message
                 * generated by the packet capture library.
                 */
                fprintf(stderr, "Error compiling bpf filter on %s: %s\n",
                        ifname, pcap_geterr(p));
                exit(5);
        }

        /*
         * Load the compiled filter program into the packet capture device.
         * This causes the capture of the packets defined by the filter
         * program, prog, to begin.
         */
        if (pcap_setfilter(p, &prog) < 0) {
                /* Copy appropriate error text to prefix string, prestr */
                sprintf(prestr, "Error installing bpf filter on interface %s",
                        ifname);
                /*
                 * Print error to screen. The format will be the prefix string,
                 * created above, followed by the error message that the packet 
                 * capture library generates.
                 */
                pcap_perror(p,prestr);
                exit(6);
        }

        /*
         * Open dump device for writing packet capture data. In this sample,
         * the data will be written to a savefile. The name of the file is
         * passed in as the filename string.
         */
        if ((pd = pcap_dump_open(p,filename)) == NULL) {
                /*
                 * Print out error message if pcap_dump_open failed. This will
                 * be the below message followed by the pcap library error text,
                 * obtained by pcap_geterr().
                 */
                fprintf(stderr,
                        "Error opening savefile \"%s\" for writing: %s\n",
                        filename, pcap_geterr(p));
                exit(7);
        }

        /*
         * Call pcap_dispatch() to read and process a maximum of count (20)
         * packets. For each captured packet (a packet that matches the filter
         * specified to pcap_compile()), pcap_dump() will be called to write
         * the packet capture data (in binary format) to the savefile specified
         * to pcap_dump_open(). Note that packet in this case may not be a
         * complete packet. The amount of data captured per packet is
         * determined by the snaplen variable which is passed to
         * pcap_open_live().
         */
        if ((pcount = pcap_dispatch(p, count, &pcap_dump, (char *)pd)) < 0) {
                /*
                 * Print out appropriate text, followed by the error message
                 * generated by the packet capture library.
                 */
                sprintf(prestr,"Error reading packets from interface %s",
                        ifname);
                pcap_perror(p,prestr);
                exit(8);
        }
        printf("Packets received and successfully passed through filter: %d.\n",
                pcount);

        /*
         * Get and print the link layer type for the packet capture device,
         * which is the network device selected for packet capture.
         */
        if (!(linktype = pcap_datalink(p))) {
                fprintf(stderr,
                        "Error getting link layer type for interface %s",
                        ifname);
                exit(9);
        }
        printf("The link layer type for packet capture device %s is: %d.\n",
                ifname, linktype);

        /*
         * Get the packet capture statistics associated with this packet
         * capture device. The values represent packet statistics from the time
         * pcap_open_live() was called up until this call.
         */
        if (pcap_stats(p, &ps) != 0) {
                fprintf(stderr, "Error getting Packet Capture stats: %s\n",
                        pcap_geterr(p));
                exit(10);
        }

        /* Print the statistics out */
        printf("Packet Capture Statistics:\n");
        printf("%d packets received by filter\n", ps.ps_recv);
        printf("%d packets dropped by kernel\n", ps.ps_drop);

        /*
         * Close the savefile opened in pcap_dump_open().
         */
        pcap_dump_close(pd);
        /*
         * Close the packet capture device and free the memory used by the
         * packet capture descriptor.
         */     
        pcap_close(p);
}

/// iterations

//===// logic to view pcap file
#include <iostream>
#include <pcl/io/pcap_io.h> // ===> file not exist
#include <pcl/visualization/cloud_viewer.h>

int main() {
    // Read the .pcap file
    pcl::PcapReader<pcl::PointXYZ> reader;
    reader.open("your_pcap_file.pcap");

    if (reader.isOpen()) {
        pcl::PointCloud<pcl::PointXYZ>::ConstPtr cloud(new pcl::PointCloud<pcl::PointXYZ>);

        // Fetch the point cloud data from the .pcap file
        while (!reader.isEOF()) {
            reader.getNextFrame(*cloud);
            // Visualize the point cloud
            pcl::visualization::CloudViewer viewer("PCL .pcap Visualizer");
            viewer.showCloud(cloud);
            while (!viewer.wasStopped()) {
            }
        }
    } else {
        std::cerr << "Error opening .pcap file" << std::endl;
        return -1;
    }

    return 0;
}


///

Are you using CMake to generate your own projects? We don't support generate project without CMake.
Please refer to this tutorial about how to using PCL in your own project.

The CMakeLists.txt of HDLGrabber tutorial page is incorrect. Please use the following.
(@taketwo Can you rewrite this tutorial page?)

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(pcl_hdl_viewer_simple)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(pcl_hdl_viewer_simple hdl_viewer_simple.cpp)
target_link_libraries(pcl_hdl_viewer_simple ${PCL_LIBRARIES})
Please see here about how to build PCL with enable WITH_PCAP option on Windows.