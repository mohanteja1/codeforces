// PROBLEM:
// AIM : given something find something.
// CONSTRAINTS:
/* TEST CASES:  INPUT   SOLUTION
        1            -->
        2           -->
 */

/* ALGORITHM1:
              1.READ INPUT AS STRING TO REDUCE THE MEMORY
              2.
              3.
              4.
   */
//COMPLEXITY:              MEMORY:

//BY MOHANTEJA
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>
using namespace std;

#define DEBUG if(0)
#define PAUSE system("pause")
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define ALL(c) c.begin(), c.end()
#define PB(x) push_back(x)
#define UB(s, e, x) upper_bound(s, e, x)
#define LB(s, e, x) lower_bound(s, e, x)
#define REV(s, e) reverse(s, e);
#define SZ(c) c.size()
#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define MEM(p, v) memset(p, v, sizeof(p))
#define ll long long
#define ff first
#define ss second
#define i64 long long
#define FS "%lld"

template< class T > T sq(T &x) { return x * x; }
template< class T > T abs(T &n) { return (n < 0 ? -n : n); }
template< class T > T max(T &a, T &b) { return (!(a < b) ? a : b); }
template< class T > T min(T &a, T &b) { return (a < b ? a : b); }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template< class T > T mod(T &a, T &b) { return (a < b ? a : a % b); }
template< class T > bool inside(T &a, T &b, T &c) { return a<=b && b<=c; }
template< class T > void setmax(T &a, T b) { if(a < b) a = b; }
template< class T > void setmin(T &a, T b) { if(b < a) a = b; }


const int INF = 1000000001;
const double EPS = 1e-10;
const int MAX = 100001;

using namespace std;



ll findMaximumWorkSection(vector<pair<pair<ll,ll>,ll>> *workList,ll noOfWorkers,string workersMap,string sectionsMap){
  
if(noOfWorkers<=0)
  return 0;
   
  ll maxCount=0;
    
  for(ll i=0;i<noOfWorkers;i++)
  {
      
         


  }


   


    
}


int main()
{

	// your code here
	ll noOfSec,noOfWorkers;
     
     cin >> noOfSec;
     cin >> noOfWorkers;

    vector<pair<pair<ll,ll>,ll>> workSection(noOfWorkers);

    string sections(noOfSec,'1'),workersMap(noOfWorkers,'1');   


    ll startPos=0,EndPos=0;

    for(ll i=0;i<noOfWorkers;i++)
    {
        cin >> startPos;
        cin >> EndPos;
        workSection.at(i).first.first=startPos;
        workSection.at(i).first.second=EndPos;
        workSection.at(i).second=llabs(EndPos-startPos);
    }

    cout << findMaximumWorkSection(&workSection,noOfWorkers-2,workersMap,sections);
     

	return 0;
}