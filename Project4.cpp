/*
Class: CPSC 122 - 01
Paul De Palma
TM1: Wesley Muehlhausen
TM2: Tanner Franz
Submitted By: Wesley
GU Username: wmuehlhausen
File Name: project4N.cpp
Selection Sort, I/O
To Build: g++ project4N.cpp
To Execute: ./a.out project4N.in 7 project4.out
*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int comparison(char *, char *);
void swap(char *, char *, int);
///////////////////////////////////////////////////////
int main(int argc, char * argv[])
	{
		ifstream fin;
		ofstream fout;

		fin.open("project4N.in");
 		fout.open("project4N.out");

 //does the sorting part enough times to where even if the numbers
 //were in the most out of order state possible, it could still fix it
 		for(int i = 0; i < 7; i++)
			{
  			for(int j = 0; j < 7; j++)
				{
    			swap(argv[j], argv[j], comparison(argv[j], argv[j+1]));
  				}
			}

 //put it into the outfile
		for(int i = 0; i < 7; i++)
			{
  			fout.put(argv[i]);
			}

 		fin.close();
 		fout.close();
		return 0;
	}
///////////////////////////////////////////////////////
 

void swap(char * str1, char * str2, int trigger)
	{
		int size = 7;
		char * temp[80];
		for(int i = 0; i < size; i++)
			{
				bool continueW = true;
   			while(i > 0 && continueW = true)
					{
   					if(trigger == 1)
    					//if the second string is bigger			
    						{
    							for(int i = 0; i < 7; i++)
    																//goes through all of the spaces and swithes the strings
    								{
    									temp[i] = str1[i];
    									str1[i] = str2[i];
    									str2[i] = temp[i];
    								}
   						}
					}
			}
	}

//////////////////////////////////////////////////////
int comparison(char * str1, char * str2);
	{
	//Comparing Lengths
	int length1, length2;
	int setLength, returnValue;
	length1 = strlen(str1);
	length2 = strlen(str2);
	if (length1 > length2)
		{
			setLength = length1;
		}
	else if(length1 < length2;)
		{
			setLength = length2;
		}
	else
		{
			setLength = 1;
		}

 //Convert to lowercase
	for(int i = 0; i < length1; i++)
			str1[i] = tolower(str1[i]);
	for(int i = 0; i < length2; i++)
			str2[i] = tolower(str1[i]);
 //comparing the two values
	for(int i = 0; i < setLength; i++)
 		{
			if ((int)str1[0] < (int)str2[0])
 				{
					returnValue = -1; break;
				}
			else if((int)str1[0] > (int)str2[0])
				{
					returnValue = 1; break;
				}
		}
	if(returnValue != -1 && returnValue != 1)
	{
		returnValue = 0;
	}
	return returnValue;	
}
