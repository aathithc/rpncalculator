#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//int stack[10];
int top = -1;

void push(int value, int *stack)
{
    if(top<9)
    {
        if (top < 0)
        {
            stack[0] = value;
            top = 0;
        }
        else
        {
            stack[top+1] = value;
            top++;
        }
    }
    else
    {
        printf("Stackoverflow!!!!\n");
    }
}

int pop(int *stack)
{
    if(top >= 0)
    {
        int n = stack[top];
        top--;
        return n;
    }
    else
        return 0;
}

/*int Top()
{
    return stack[top];
}*/

/*int isempty()
{
    return top<0;
}*/

void display(int *stack)
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",stack[i]);
    }
}

int i;

int main(int argc, char *argv[]) {
    int length = strlen(argv[1]);
    int *stack;
    stack = malloc(length*sizeof(int*));

    int w;
    int j;
    char arr[100];
    arr[0]=0;

        for (j = 0; j < strlen(argv[1]); j++) {
        
        char check = argv[1][length - 1];
        int a = isdigit(check);

        if (a > 0) {
            return EXIT_FAILURE;
        }


        if((argv[1][j] != '+') && (argv[1][j] != '-') && (argv[1][j] != 'x') && (argv[1][j] != '/')) {
        if (argv[1][j] != ',') {

            strncat(arr,&argv[1][j],1);
        
        }
        else {
            w = atoi(arr);
            push(w, stack);
            strcpy(arr, "");

        }

    }

    else {
    
        if (argv[1][j] == '+') {
            if(strcmp(arr,"")!=0){

                w=atoi(arr);

                push(w, stack);

                strcpy(arr, "");
            }
            
            int value1 = pop(stack);

            int value2 = pop(stack);
            int total = value2+value1;
            push(total, stack);
    
        }
        if (argv[1][j] == '-') {
            if(strcmp(arr,"")!=0){

                w=atoi(arr);

                push(w, stack);

                strcpy(arr, "");
            }

            int value1 = pop(stack);

            int value2 = pop(stack);
            int total = value2 - value1;
            push(total, stack);
        }
        if (argv[1][j] == 'x') {
            if(strcmp(arr,"")!=0){

                w=atoi(arr);

                push(w, stack);

                strcpy(arr, "");
            }
            
            int value1 = pop(stack);

            int value2 = pop(stack);
            int total = value2 * value1;
            push(total, stack);
    
        }
        if (argv[1][j] == '/') {
            if(strcmp(arr,"")!=0){

                w=atoi(arr);

                push(w, stack);

                strcpy(arr, "");
            }
            
            int value1 = pop(stack);

            int value2 = pop(stack);

            if(value1 == 0) {
                return EXIT_FAILURE;
            }
    
            int total = value2/value1;
            push(total, stack);
    
        }
    }
    }
    display(stack);
    free(stack);
   
}


