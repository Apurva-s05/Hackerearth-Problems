/*
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .1000000000+7

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo .1000000000+7
*/

#include <iostream>

using namespace std;

int main() {
	long num;
	cin >>num ;

	long size[num];
	long long answer=1;
	for(int i=0;i<num;i++){
		cin >> size[i];
		 answer=(answer*size[i])%(1000000000+7);
		}
		cout<<""<<answer<<endl;

	return 0;
}
