  //JOYADDAR MD JOBAYER
  //1731833
#include <iostream> 
using namespace std; 
  
 
class Stack  
{  
    public: 
    int top;  
    unsigned capacity;  
    char* array;  
};  
  
 
Stack* createStack(unsigned capacity)  
{  
    Stack* stack = new Stack(); 
    stack->capacity = capacity;  
    stack->top = -1;  
    stack->array = new char[(stack->capacity * sizeof(char))];  
    return stack;  
}  
  

int isFull(Stack* stack)  
{ return stack->top == stack->capacity - 1; }  
  

int isEmpty(Stack* stack)  
{ return stack->top == -1; }  
  

void push(Stack* stack, char item)  
{  
    if (isFull(stack))  
        return;  
    stack->array[++stack->top] = item;  
}  
  

char pop(Stack* stack)  
{  
    if (isEmpty(stack))  
        return -1;  
    return stack->array[stack->top--];  
}  
  
void reverse(char str[])  
{  
     
    int n = strlen(str);  
    Stack* stack = createStack(n);  
  
    
    int x;  
    for (x = 0; x < n; x++)  
        push(stack, str[x]);  
  
     
    for (x = 0; x < n; x++)  
        str[x] = pop(stack);  
}  
   
int main()  
{  
    char str[] = "LabTest";  
  
    reverse(str);  
    cout << "Reversed string is " << str;  
  
    return 0;  
}  
  

