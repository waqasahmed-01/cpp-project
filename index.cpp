#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string determineNotation(string expression)
{
    stack<char> st;
    int operators = 0;
    int operands = 0;

    for (char c : expression)
    {
        if (isOperator(c))
        {
            operators++;
        }
        else if (isalnum(c))
        {
            operands++;
        }
    }

    if (operators == 1 && operands == 2)
    {
        return "Prefix Notation";
    }
    else if (operators == 1 && operands == 2)
    {
        return "Postfix Notation";
    }
    else
    {
        return "Infix Notation";
    }
}

int main()
{
    string expression;
    cout << "Enter a mathematical expression: ";
    cin >> expression;

    string notation = determineNotation(expression);
    cout << "The expression is in " << notation << endl;

    return 0;
}
