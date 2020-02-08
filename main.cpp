#include <iostream>
#include <stack>
#include <iomanip>
#include<ostream>


using namespace std;
ostream &tab(ostream &ostream1){
    return cout<<"\t";
}
int main() {
    stack<int> stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack<int> stack2 =stack1;


    while (!stack1.empty()){
        cout<<stack1.top()<<tab;
        stack1.pop();
    }

    stack2.pop();
    cout<<endl;
    while (!stack2.empty()){
        cout<<stack2.top()<<tab;
        stack2.pop();
    }

    return 0;
}
