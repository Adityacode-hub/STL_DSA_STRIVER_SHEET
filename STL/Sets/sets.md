## the value of the elements in the sets are uinque and serve as the key  values according to which data is automatically ordered.

the value of an element in a set may not be changed directly ,instead you must delete old value and insert an element with new value.
  

  methods
  ---------------------------------------------------------------
  insert()
  empty()
  find()
  count()
  begin()
  end()
  cbegin()
  cend()
  erase()
  swap()
  clear()


--------------------------------------------------------------|
pair<int, int> p = {1, 2};   // Access with p.first, p.second |
vector<pair<int, int>> vp;   // Common in graph & sorting     |
tuple<int, int, char> t = {1, 2, 'a'};  // tie() to unpack    |
--------------------------------------------------------------|
//comperator

---------------------------------------------------------

bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.second < b.second;
}
sort(v.begin(), v.end(), cmp);

----------------------------------------------
//remove duplicate 
----------------------------------------------
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

//frequency count
----------------------------------------------

unordered_map<int, int> freq;
for (int x : v) freq[x]++;
---------------------------------------------
2d vector
--------------------------------------------
vector<vector<int>> mat(n, vector<int>(m));

|        Syntax                                           |       Meaning            |
| ------------------------------------------------ | ------------------------- |
| `vector<vector<int>> v;`                         | Empty 2D vector           |
| `vector<vector<int>> v(n);n rows, empty each     |
| `vector<vector<int>> v(n, vector<int>(m));`                                                  | |
| `vector<vector<int>> v(n, vector<int>(m, val));n x m filled with `val` ` |   |
