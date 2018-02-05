//implementation
//Sreport.cpp

#include "Sreport.h"

Sreport::Sreport(float s, char s1, string s2, int s3)
	{
		GPA= s;
		grade =s1;
		major = s2;
		iDNO =s3;
       }

	void Sreport::setGPA (float s)
 	{
	   GPA =s;
	}

	float Sreport::getGPA() const
	{
	   return GPA;
	}

	void Sreport::setgrade (char s1)
 	{
	   grade =s1;
	}

	char Sreport::getgrade() const
	{
	   return grade;
	}

	void Sreport::setmajor (std:: string s2)
 	{
	   major =s2;
	}

	string Sreport::getmajor() const
	{
	   return major;
	}

	void Sreport::setiDNO (int s3)
 	{
	   GPA =s3;
	}

	int Sreport::getiDNO() const
	{
	   return iDNO;
	}



	






