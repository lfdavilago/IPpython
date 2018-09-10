#include <iostream>
#include <ctime>
#include <stdio.h> 
#include <dos.h> 
using namespace std;


int fiboINT(int n){	
	int i = 0;
	int j = 1; 
	int k = 0;
	
	while( k < n)
	{
		j = i + j;
		i = j - i;
		k++;  	
	}
	return i;
}

unsigned int fiboUnsignedINT(int n){	
	unsigned int i = 0;
	unsigned int j = 1; 
	int k = 0;
	
	while( k < n)
	{
		j = i + j;
		i = j - i;
		k++;  	
	}
	return i;
}
long int fiboLong(int n){	
	long int i = 0;
	long int j = 1; 
	int k = 0;
	
	while( k < n)
	{
		j = i + j;
		i = j - i;
		k++;  	
	}
	return i;
}
unsigned long int fiboUnsignedLong(int n){	
	unsigned long int i = 0;
	unsigned long int j = 1; 
	int k = 0;
	
	while( k < n)
	{
		j = i + j;
		i = j - i;
		k++;  	
	}
	return i;
}
long long int fiboLongLong(int n){	
	long long int i = 0;
	long long  int j = 1; 
	int k = 0;
	
	while( k < n)
	{
		j = i + j;
		i = j - i;
		k++;  	
	}
	return i;
}
unsigned long long int fiboUnsignedLongLong(int n){	
	unsigned long long int i = 0;
	unsigned long long  int j = 1; 
	int k = 0;
	
	while( k < n)
	{
		j = i + j;
		i = j - i;
		k++;  	
	}
	return i;
}
int main(){
	unsigned t0, t1;
	t0=clock();
	fiboLongLong(10000000); //7
	t1 = clock();
 
	double time = (double(t1-t0));
	cout << "Execution Time: " << time << endl;
	
	// INT
	cout << "	INT" << endl;
	cout << "fibo(46) = " << fiboINT(46) // 1836311903
	<< endl << "OverFlow in n = 47" << endl << "fibo(47) = " << fiboINT(47) << endl; // 2971215073
	// Usigned Int
	cout << "	Usigned Int" << endl;
	cout << "fibo(47) = " << fiboUnsignedINT(47) // 2971215073
	<< endl << "OverFlow in n = 48" << endl << "fibo(48) = " << fiboUnsignedINT(48) << endl; //  4807526976
	// Long int 
	cout << "	Long int" << endl;
	cout << "fibo(46) = " << fiboLong(46) // 1836311903
	<< endl << "OverFlow in n = 47" << endl << "fibo(47) = " << fiboLong(47) << endl; // 2971215073
	// Unsigned Long int
	cout << "	Usigned Long int" << endl;
	cout << "fibo(47) = " << fiboUnsignedLong(47) // 2971215073
	<< endl << "OverFlow in n = 48" << endl << "fibo(48) = " << fiboUnsignedLong(48) << endl; //  4807526976
	// Long Long int
	cout << "	Long Long int" << endl;
	cout << "fibo(92) = " << fiboLongLong(92) // 7540113804746346429
	<< endl << "OverFlow in n = 93" << endl << "fibo(93) = " << fiboLongLong(93) << endl; // 12200160415121876738
	// Unsigned Long Long int
	cout << "	Usigned Long Long int" << endl;
	cout << "fibo(93) = " << fiboUnsignedLongLong(93) // 12200160415121876738
	<< endl << "OverFlow in n = 94" << endl << "fibo(94) = " << fiboUnsignedLongLong(94) << endl; //  19740274219868223167
	
	return 0;
}
