#include<vector>
#include<iostream>
#include<algorithm>
#include<cstdio>


using namespace std;

int maximum(int a,int b)
{
    if(a>b)return a;
    else return b;
}

int main()
{

	// your code here

	int testcases;
	char inputNum[10];
     
    int nStudents,mSchools,kChoosens;
	cin >> nStudents;
    cin >> mSchools;
    cin >> kChoosens;
    
    vector<int> powers(nStudents);
    vector<int> schoolsMax(mSchools,0);  //id ,students max power
    vector<int> studentSchool(nStudents);

	for(int i=0;i<nStudents;i++)
        cin>>powers.at(i);

    
    int school=0;

    for(int i=0;i<nStudents;i++) {
          cin >> school;
          studentSchool[i]=school-1;
         schoolsMax[school-1]=maximum(schoolsMax.at(school-1),powers.at(i));
    }
      


    int choosen=0,notAvailable=0;
    std::vector<int>::iterator it,it2;
    for(int i=0;i<kChoosens;i++)
    { 
      cin >> choosen;
      it=find(schoolsMax.begin(),schoolsMax.end(),choosen);
      //it2=find(powers.begin(),powers.end(),choosen);

      if(it==schoolsMax.end())
      {
            notAvailable++;
      }
      
    }

    cout<<notAvailable<<endl;
	return 0;
}