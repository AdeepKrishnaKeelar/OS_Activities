#include<iostream>
using namespace std;
extern "C" int GetValueFromASM();
int main() {
	cout<<"ASM said "<<GetValueFromASM()<<endl;
	return 0;
}
