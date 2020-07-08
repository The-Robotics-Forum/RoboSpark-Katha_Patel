

#include <iostream> 
#include <string.h> 

using namespace std; 


class String 
{ 
    public: 
    
        char str[100]; 
 
        String() {} 

        String(char str[100]) 
        { 
            strcpy(this->str, str); 
        } 
 
        String operator+(String &str2); 
}; 

String String :: operator+(String &str2)
{    
    String temp; 

    strcat(this->str, str2.str); 
    strcpy(temp.str, this->str); 

    return temp; 
}

int main() 
{ 
	char str1[100] = {"Rohan"}; 
	char str2[100] = {"Joshi"}; 

	String s1(str1); 
	String s2(str2); 
	String s3; 
 
	s3 = s1 + s2; 
	cout << s3.str;

	return 0; 
} 
