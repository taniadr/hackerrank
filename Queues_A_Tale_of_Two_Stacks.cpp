/*Problem: Stacks: Queues: A Tale of Two Stacks
Level: Medium
Link: https://www.hackerrank.com/challenges/ctci-queue-using-two-stacks
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

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
        stack<int> stack_em_ordem, stack_reversa; 
        int first;
        
        void push(int x) {
			stack_em_ordem.push(x);
        }

        void pop() {			
			if (stack_reversa.empty()){			
         	   while(!stack_em_ordem.empty()){
            		stack_reversa.push(stack_em_ordem.top());
					stack_em_ordem.pop();
				}
			}//pilha em ordem is empty. só inserimos na reversa quando acabar os elementos da reversa!!	
			stack_reversa.pop(); 
    	}
    	
		int front() {	
			if (stack_reversa.empty()){			
         	   while(!stack_em_ordem.empty()){
            		stack_reversa.push(stack_em_ordem.top());
					stack_em_ordem.pop();
				}
			}
			first = stack_reversa.top();
        	return first;
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
    return 0;
}

