#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } 
    if (op == '*' || op == '/') {
        return 2;
    } 
    if (op == '^') {
        return 3;
    }
    return 0;
}

string fun(string infix) {
    stack<char> st;
    string postfix = ""; // Make sure postfix is declared and initialized
    
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        
        // Skip spaces if any
        if (c == ' ') continue;

        // If the character is an operand, add it to the output string
        if (isalnum(c)) {
            postfix += c;
        } 
        // If the character is '(', push it to the stack
        else if (c == '(') {
            st.push(c);
        } 
        // If the character is ')', pop and output from the stack until '(' is encountered
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // Pop the '('
            }
        } 
        // If an operator is scanned
        else {
            while (!st.empty() && st.top() != '(' && 
                  (precedence(st.top()) > precedence(c) || 
                  (precedence(st.top()) == precedence(c) && c != '^'))) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix = "A+B+C-D";
    cout << "infix string is : " << infix << endl;
    cout << "postfix string is : " << fun(infix) << endl;
    return 0;
}