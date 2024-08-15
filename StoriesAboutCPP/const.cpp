#include<iostream>
using namespace std;
int main(){
    const int num=0;
    // int * const ptr=&num; //const指针必须初始化！且const指针的值不能修改
    // *ptr = 4;

    int * const * ptr= &num;
    cout<<*ptr<<endl;
    int * t = &num;
    *t = 1;
    cout<<*ptr<<endl;
}
