#include <iostream>
using namespace std;
void printOut(int k) {
	cout << k<<endl;
}
void printOut(string k) {
	cout << k<<endl;
}
const double PI = 3.14159;
struct Student {
		int id;
		bool isGrad;
	};
int howmany(Student arr[], int N){
	int x=0;
	for(int i=0; (i<=N-1); i++)
	  if(arr[i].isGrad ==true)
		  x++;
	return x;
}
int main() {
	printOut("sup");
	}
	/*printOut(k);
	Student geoff;
	geoff.id = 3;
	geoff.isGrad = true;
	Student mary;
	mary.id = 3;
	mary.isGrad = false;
	Student list[] = {geoff, mary};
	printOut(howmany(list,2));*/
//}
