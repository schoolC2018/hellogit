//client

#include<iostream>
#include<string>
#include<vector>
#include"Sreport.h"

using namespace std;

int main()
	{

	  Sreport r1;

	  Sreport r2 = {3.38,'A',"Information_Technology",6183247};

	  Sreport r3 = {4.0,'C',"Information_Technology",9874521};

	   vector<Sreport> info;

	info.push_back(r2);

	info.push_back(r1);

	info.push_back(r3);

	info.push_back({4.0,'B',"Accounting",4270062});

	cout << " Student Report Transcript ";
	int transcript;
	cin>>transcript;

	for(int i=0; i<info.size(); i++)
	{
	  cout<< info[i].getGPA()<<" " << info[i].getgrade()<< " "<< info[i].getmajor()<<" "<< 		  info[i].getiDNO()<<endl;
       }
}


