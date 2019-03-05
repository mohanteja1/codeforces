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

int main()
{

	// your code here
	long long noOfChocolates=0,noOfCoupons=0;
    
    cin >> noOfChocolates;
    vector<long long> chocolatesCost(noOfChocolates);
     long long totalCost=0,currentCost;
    for(long long i=0;i<noOfChocolates;i++){ 
        cin >> currentCost;
        chocolatesCost.at(i)=currentCost;
        totalCost += currentCost;
    }
    cin >> noOfCoupons;
    
    vector<long long> coupons(noOfCoupons);

    
    for(long long i=0;i<noOfCoupons;i++)
      cin >> coupons.at(i);

    sort(chocolatesCost.begin(),chocolatesCost.end());
    
    // for(int i=0;i<noOfChocolates;i++)
    // {
    //     cout<<chocolatesCost.at(i)<<endl;
    // }


     long long currentCoupon,index=0;
     currentCost=0;   
    for(long long i=0;i<noOfCoupons;i++)
    {
         currentCoupon=coupons.at(i);
          
         currentCost=totalCost-chocolatesCost.at(noOfChocolates-currentCoupon);
        cout << currentCost<<endl;

    }

    

       

	return 0;
}