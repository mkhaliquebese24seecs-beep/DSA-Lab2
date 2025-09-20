#include<iostream>
using namespace std;
// part a 
// first function void analyze_pointer(int *ptr)
void analyze_pointer(int *ptr)
{
// this funtions does two things 
// prints the value of the pointer and prints the value 0f memory location 
cout<< "memory location" <<  ptr<< endl;
cout<< "value of the integer " <<  *ptr<< endl;
}
// part b 
// the stack one 
int main(){
    cout << "the stack value "<<endl;
int Stack_Value= 21;
analyze_pointer( &Stack_Value);
// part b 
// the heap one 
cout << "the heap value "<<endl;
int *heap_Value = new int;
*heap_Value  = 99; 
analyze_pointer(heap_Value);
delete  heap_Value;
return 0;
}
