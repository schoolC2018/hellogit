//client

#include<iostream>
#inlcude<string>
#inlcude<vector>
#include "Sreport.h"

using namespace std;

int main()
	{

	  Sreport r1;

	  Sreport r2 = {3.38, 'A', Information_Technology, 6183247};

	  Sreport r3 = {4.0, Information_Technology};

	   vector<Sreport> info;

	info.push_back(r2);

	info.push_back(r1);

	info.push_back(r3);

	info.push_back({4.0, 'B+', Accounting, 4270062;

	count << " Student Report Transcript";
	int transcript;
	cin>>transcript;

	for(int i=0; i<info.size(); i++)
	{
	  cout<< info[i].getsGPA()<<" "<< info[i].getsgrade()<< " "<< info[i].getsmajor()<<" "<< 		  info[i].getsiDNO()<<endl;
       }



