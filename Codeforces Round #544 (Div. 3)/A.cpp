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

   int t1Hour, t2Hour, t1Min, t2Min;
   int midHour,midMin;

   string time1, time2;
   cin >> time1;
   cin>>time2;

   //cout<< stoi(time1.substr(time1.find(':')+1,time1.length()-1));;

   t1Hour=stoi(time1.substr(0,time1.find(':')));
   t1Min=stoi(time1.substr(time1.find(':')+1,time1.length()-1));
    
   // cout<< time2.substr(0,time2.find(':'));
   t2Hour=stoi(time2.substr(0,time2.find(':')));
   t2Min=stoi(time2.substr(time2.find(':')+1,time2.length()-1));
   
  // cout << t1Hour << t1Min << "  " << t2Hour <<t2Min;
    int totalmin=0;
    if(t1Hour<=t2Hour){
    midHour =t2Hour-t1Hour ;
    midMin = t2Min - t1Min ;
    totalmin = midHour * 60 + midMin;
    //cout<<totalmin<<endl;
    totalmin =totalmin/2;  

    midHour = totalmin/60;
    midMin = totalmin - midHour*60;
    midHour=(t1Hour+midHour)%24;
    midMin=t1Min+midMin;
    if(midMin>60){
       midHour++;
       midMin -=60;

    } 
    }
    else{

      totalmin=(24-t1Hour)*60 - t1Min;
      totalmin += (t2Hour*60 + t2Min);
     // cout<<totalmin<<endl;
      totalmin=totalmin/2;
      midHour = (t1Hour + totalmin/60 + ((t1Min==0)? 0 : 1 ))%24 ;
      midMin= totalmin%60; 
      midMin=t1Min+midMin;
    if(midMin>60){
       midHour++;
       midHour=midHour%24;
       midMin -=60;

    } 
    }


   if(midHour<10)
      cout<<'0';

   cout <<midHour;
   cout<<':' ;

   if(midMin<10)
      cout<<'0';

    cout << midMin;  
   return 0;
}