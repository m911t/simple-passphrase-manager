#include <iostream>
#include <string>
#include <fstream>

int max (int word1, int word2)
{
	if (word2 > word1)
	{
		return 1;
	}
	return 0;
	
}

void orderWords (std::ifstream toOrder)
{
	std::string temp[2] = ""; 
	getline(std::cin,temp[0]);
	while (temp[0][0] && temp[1][0]) // enough to know if we reach EOF
	{
		int longest = max(temp[0].length(), temp[1].length());
		int currChar = 0;
		for (; currChar < temp[longest].length(); currChar++)
		{
			
		}
		
	}
	
}

void readFile(std::string filename)
{
	std::ifstream toRead;
	toRead.open(filename);
}

int main()
{
	std::string filename = "";
	std::cout << "Enter the file name of the language file to order: ";
	getline(std::cin,filename);
}
