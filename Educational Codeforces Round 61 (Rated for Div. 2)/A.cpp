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
const long long INF = 1000000001;

int main()
{

	// your code here

   long long t1,t2,t3,t4;
   
   cin>>t1;
   cin>>t2;
   cin>>t3;
   cin>>t4;

   if(t1<0||t2<0||t3<0||t4<0){
      cout << 0;
      return 0;

   }

   if(t1>INF || t2>INF||t3>INF||t4>INF)
   {  cout << 0; 
    return 0;
   }

   if(t1==0 && t4 == 0&& t3>0)
   {
      cout<< 0;
      return 0;
   }

   if(t1==t4)
      cout << 1;
   else 
      cout << 0;   

	return 0;
}