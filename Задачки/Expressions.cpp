#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>

/*
    Да се напише програма, която въвежда от клавиатурата записа без грешка израз от вида
    <израз> ::= <цяло_число> | (<израз><знак><израз>)
    <знак> ::= + | - | *
    и намира и извежда стойността на въведената формула.
    Правилният израз не допуска използването на интервали и табулации.
*/
int evaluateExpression(const char*& expr)
{
    // изразът е правилно записан
    int left, right;

//    cout << "Current symbol: " << *expr << endl;

    // ако в началото на израза имаме +/- или цифра, то изразът
    // трябва да бъде преобразуван в число, резултатът
    if(*expr == '+' || *expr == '-' || (*expr >= '0' && *expr <= '9'))
    {
        const char* pointerToNumber = expr;
        while(*expr && *expr >= '0' && *expr <= '9')
        {
            ++expr;
        }

        return atoi(pointerToNumber);
    }

    // първият символ трябва да е (
    if(*expr != '(')
    {
        cout << "WRONG expression!\n";
        return 0;
    }

    // прескачаме отв. скоба
    ++expr;

    // оценяваме израза вляво
    left = evaluateExpression(expr);

    // четем операция
    char op = *expr;
    ++ expr;

    // оценяваме израза вдясно
    right = evaluateExpression(expr);
    // прескачаме затварящата скоба
    ++expr;

    switch(op)
    {
        case '+': return left + right;
        case '-': return left - right;
        case '*': return left * right;
        default: cout << "WRONG operation!\n" << op << endl; return 0;
    }
}

int main()
{
    const char* expr = "12";
    cout << "Expression: " << expr << endl;
    cout << "The result: " << evaluateExpression(expr) << endl;

    expr = "((21-16)*4)";
    cout << "Expression: " << expr << endl;
    cout << "The result: " << evaluateExpression(expr) << endl;

    expr = "((21-16)*(2+3))";
    cout << "Expression: " << expr << endl;
    cout << "The result: " << evaluateExpression(expr) << endl;
}
