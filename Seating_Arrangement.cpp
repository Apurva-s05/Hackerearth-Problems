/*Akash and Vishal are quite fond of travelling. They mostly travel by railways. 
They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like
                                      /*Image*/
So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
*/

	
/*Solution*/
#include <iostream>

using namespace std;
 
int main()
{
int T,N;
cin>>T;    //Number of test case
while(T-->0)
{
	cin>>N;  //seat number

	int result;
	result=N%12;    //suppose we enter N=12 then N%12 means 12%12 which gives reminder=0,then we go for case 0

	switch(result)
	{
		case 1: cout<<N+11;
		        cout<<" WS"<<endl;
		break;
		case 2: cout<<N+9;
		        cout<<" MS "<<endl;
		break;
		case 3: cout<<N+7;
		        cout<<" AS "<<endl;
		break;
		case 4: cout<<N+5;
		        cout<<" AS "<<endl;
		break;
		case 5: cout<<N+3;
		        cout<<" MS "<<endl;
		break;
		case 6: cout<<N+1;
		        cout<<" WS "<<endl;
		break;
		case 7: cout<<N-1;
		        cout<<" WS "<<endl;
		break;
		case 8: cout<<N-3;
		        cout<<" MS "<<endl;
		break;
		case 9: cout<<N-5;
		        cout<<" AS "<<endl;
		break;
		case 10: cout<<N-7;
		         cout<<" AS "<<endl;
		break;
		case 11: cout<<N-9;
		        cout<<" MS "<<endl;
		break;
		case 0: cout<<N-11;
		        cout<<" WS "<<endl;
		break;
	}
}
return 0;
}
