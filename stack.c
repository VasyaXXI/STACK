#include "stdlib.h"
#include "stdio.h"
#define MAXSIZE 20

struct stack
{
    int stc[MAXSIZE];
    int boop;
};
typedef struct stack STACK;
    STACK st;
void push()
{
    int num;
    if (st.boop == MAXSIZE - 1)
    {
        printf("stack is completely filled");

    }
    else
    {
        printf("enter the element:\n");
        scanf("%d", &num);
        st.boop = st.boop + 1;
        st.stc[st.boop] = num;
    }

}
int pop()
{
    int num;
    if (st.boop == -1)
    {
        printf("stack is empty\n");
        return(st.boop);
    }
    else
    {
        num = st.stc[st.boop];
        printf("%d", st.stc[st.boop]);
        st.boop = st.boop - 1;
    }
return num;
}
void display()
{
    int i;
    if (st.boop == - 1)
    {
        printf("stack is empty\n");
        return;
    }
    else
    {
        for (i = st.boop; i >= 0; i--)
        {
            printf("%d ", st.stc[i]);
        }
    }
}
int peek()
{
    int num;
    if (st.boop == -1)
    {
        printf("stack is empty\n");
        return(st.boop);
    }
    else
    {
        num = st.stc[st.boop];
        printf("%d", st.stc[st.boop]);
    }
}
int main()
{
    int pick;
    int option = 1;
    st.boop = -1;
    while (option)
    {
        printf("\n\nChoose command you like execute\n");
        printf("1 Push\n2 Pop\n3 Show numbers from stack\n4 Peek\n5 Exit\n\n");
        scanf("%d", &pick);
        switch(pick)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            default:
            return 0;
        }
    }
return 0;
}
