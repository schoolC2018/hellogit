//Header 
#ifndef SREPORT_H
#define SREPORT_H


#include<iostream>
#include<string>

using namespace std;

class Sreport
	{
	  private:
		float GPA;
		char grade= ' ';
		string major;
		int iDNO;
	public:

	Sreport(float s, char s1, string s2, int s3);
	
	void setsGPA (float s);
	float getsGPA () const;

	void setsgrade (float s1);
	char getsgrade () const;

	void setsmajor (float s2);
	string getsmajor () const;
	
	void setsiDNO (float s3);
	float getsiDNO () const;

};
#endif//SREPORT_H
