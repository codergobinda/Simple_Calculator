#include<stdio.h>
char Take_Operator();
int Check_Operator(char);
void Addition(float, float);
void Substraction(float, float);
void Multiplication(float, float);
void Division(float, float);
void Print_Result(float);
int main()
{
    float num_1, num_2;
    char operator;
    operator = Take_Operator();
    printf("Enter Values (Operands) :");
    scanf("%f%f",&num_1, &num_2);

    switch (operator)
    {
    case '+':
        Addition(num_1, num_2);
        break;
    case '-':
        Substraction(num_1, num_2);
        break;
    case '*':
        Multiplication(num_1, num_2);
        break;
    case '/':
        Division(num_1, num_2);
        break;
    }


    return 0;
}

char Take_Operator()
{
    char op;
    int Input_Check;
    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%c",&op);
    Input_Check = Check_Operator(op);
    if(Input_Check==1)
        return op;
    Take_Operator();//Recursion
}

int Check_Operator(char op)
{
    int IC;
    IC = op=='+' || op == '-' || op == '*' || op == '/' ? 1:0;
    return IC;
}

void Addition(float num_1, float num_2)
{
    float Add;
    Add = num_1 + num_2;
    Print_Result(Add);
}

void Substraction(float num_1, float num_2)
{
    float Diffrence;
    Diffrence = num_1 - num_2;
    Print_Result(Diffrence);
}

void Multiplication(float num_1, float num_2)
{
    float Multi;
    Multi = num_1 * num_2;
    Print_Result(Multi);
}

void Division(float num_1, float num_2)
{
    float Div;
    Div = num_1 / num_2;
    Print_Result(Div);
}

void Print_Result(float result)
{
    printf("%.2f",result);
}