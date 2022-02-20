#include<iostream>
using namespace std;
int GetValueFromASM() {
asm("movl $250, %eax");
}
int main() {
	cout<<"ASM said "<<GetValueFromASM()<<endl;
	return 0;
}
