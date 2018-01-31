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

	void Sreport::setsGPA (float s)
 	{
	   GPA =s;
	}

	float Sreport :: getsGPA() const
	{
	   return GPA;
	}

	void Sreport::setsgrade (char s1)
 	{
	   grade =s1;
	}

	char Sreport :: getsgrade() const
	{
	   return grade;
	}

	void Sreport::setsmajor (string s2)
 	{
	   major =s2;
	}

	string Sreport :: getsmajor() const
	{
	   return major;
	}

	void Sreport::setsiDNO (int s3)
 	{
	   GPA =s3;
	}

	int Sreport :: getsiDNO() const
	{
	   return iDNO;
	}
}


	}






