#include <iostream>

using namespace std;

// declaring functions
void printArray(int a[], int len);
double average(int b[], int len);

int main() 
{
	int d[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
	
	cout << "Size of the array in memory: " << sizeof(d) << endl;
	cout << "Size of the 1st element: " << sizeof(d[0]) << endl;
	cout << "Lenght of the array in memory: " << sizeof(d)/sizeof(d[0]) << endl;
	
	cout << "My array " << endl;
	printArray(d, 10);
	
	cout << "your average is: " << average(d, 10) << endl;
	
  return 0;
}

void printArray(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

double average(int b[], int len)
{
	double avg;
	for (int i = 0; i < len; i++)
	{
		avg += b[i];
	}
	return avg/len;
}