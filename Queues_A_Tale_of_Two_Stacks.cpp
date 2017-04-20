#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stackone, stacktwo; 
        int aux;
        void push(int x) {
            stackone.push(x);
        }

        void pop() {
            while(!stackone.empty()){
            	stacktwo.push(stackone.top());
				stackone.pop();
			}
			stacktwo.pop();	//retira
			while(!stacktwo.empty())
			{
				stackone.push(stacktwo.top());
				stacktwo.pop();
			}
        }

        int front() {
         while(!stackone.empty()){
            	stacktwo.push(stackone.top());
				stackone.pop();
			}
			aux = stacktwo.top();
			while(!stacktwo.empty())
			{
				stackone.push(stacktwo.top());
				stacktwo.pop();
			}
        	return aux;
		}
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

