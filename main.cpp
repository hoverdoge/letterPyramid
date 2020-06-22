#include <iostream>
#include <string>
using namespace std;

int main() 
{
	//gets input
	cout << "Enter the string you would like to be turned into a pyramid" << endl;
	string input;
	cin >> input;
	//handles how many spaces to put before each line
	int spaces = input.size() - 1;
	//layerNum keeps track of the pyramid layer the loop is currently on. 1 is the top, bottom = the string's length
	for (int layerNum = 1; layerNum <= input.size(); layerNum++)
	{
		//adds spaces to center text and create pyramid
		for (int i = 0; i <= spaces; i++)
		{
			cout << " ";
		}
		spaces --;
		//signifies the amount of elements in a given layer. eg: for layer 2, the amount of elements would be 2*2-1=3
		int elementAmount = layerNum * 2 - 1;
		//this loop prints the numbers up to where the order reverses
		for (int strElement = 0; strElement < layerNum; strElement++)
		{
			cout << input.at(strElement);
		}
		//starts on the first reverse letter to be printed and prints the rest
		for (int strElement = layerNum - 2; strElement > -1; strElement--)
		{
			cout << input.at(strElement);
		}
		cout << endl;
	}
}
