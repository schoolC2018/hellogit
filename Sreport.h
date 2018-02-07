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

	Sreport();
	Sreport(float s, char s1, string s2, int s3);
	
	void setGPA (float s);
	float getGPA () const;

	void setgrade (char s1);
	char getgrade () const;

	void setmajor (string s2);
	string getmajor () const;
	
	void setiDNO (int s3);
	int getiDNO () const;

};
#endif//SREPORT_H
