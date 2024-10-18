#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    char stack1[10];

    Stack() {
        top = -1;
    }

    void push(char);
    char pop();
    int isFull();
    int isEmpty();
};

void Stack::push(char x) {
    if (!isFull()) {
        top++;
        stack1[top] = x;
    }
}

char Stack::pop() {
    if (!isEmpty()) {
        char s = stack1[top];
        top--;
        return s;
    }
    return '\0';
}

int Stack::isFull() {
    return top == 9;
}

int Stack::isEmpty() {
    return top == -1;
}

int main() {
    Stack s1;
    char exp[20];

    cout << "Parenthesis checker....!!!" << endl;
    cout << "Enter the expression to check whether it is well-formed or not: " << endl;
    cin >> exp;

    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];
        switch (ch) {
            case '(': 
            case '{':
            case '[':
                s1.push(ch);
                break;

            case ')':
                if (s1.isEmpty() || s1.pop() != '(') {
                    cout << "The expression is invalid!!!" << endl;
                    return 0;
                }
                break;

            case '}':
                if (s1.isEmpty() || s1.pop() != '{') {
                    cout << "The expression is invalid!!!" << endl;
                    return 0;
                }
                break;

            case ']':
                if (s1.isEmpty() || s1.pop() != '[') {
                    cout << "The expression is invalid!!!" << endl;
                    return 0;
                }
                break;
        }
    }

    if (s1.isEmpty()) {
        cout << "The expression is well parenthesized." << endl;
    } else {
        cout << "The expression is invalid!!!" << endl;
    }

    return 0;
}
