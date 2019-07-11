# ICPC用資料

```bash
chmod +x file
```
```bash
g++ ${1}.cpp -std=gnu++14 -o out -O2
```
```bash
(./out < A) > A.out
```
```bash
cp -i template.cpp ${1}.cpp
```
```.vimrc
syntax enable
imap jk <Esc>
set autoindent cindent tabstop=4 softtabstop=0 shiftwidth=4 smarttab noexpandtab
set backspace=indent,eol,start
set incsearch hlsearch
nmap j gj
nmap k gk
```
```c++
#include <iostream> // cin, cout, cerr, clog
#include <algorithm> // minmax, sort, swap
#include <numeric> // iota, accumulate, inner_product
#include <cstdio> // printf, scanf
#include <climits> // INT_MIN, LLONG_MIN
#include <cmath> // long, trig, pow
#include <string> // string, stoi, to_string
#include <vector> // vector
#include <queue> // queue, priority_queue
#include <deque> // deque
#include <stack> // stack
#include <map> // key-value pairs sorted by keys
#include <set> // set
#include <unordered_map> // hashed by keys
#include <unordered_set> // hashed by keys
#include <iomanip> // cout<<setprecision(n)
#include <functional> // std::function<void(int)>

#define rep(i,n) for(int i = 0; i < n; i++)
#define ENDL "\n"
#define print(i) std::cout << (i) << "\n"

#define int long long // at least int64 > 9*10^18
#define all(v) v.begin(), v.end()

signed main() {
	return 0;
}
```
```c++
signed main() {
	while(std::cin.eof()) {
		std::cin >> x;
	}
	return 0;
}
```
## 準備しておくべきライブラリ
- UnionFind
- gcd
- modpow
- fastio
- sortindexes
- Segment tree
- dijkstra
