i/*****************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdarg.h>
/*void printNum(int counter, ... )
{
   int x = 0;
    va_list count_ptr;
    va_start (count_ptr,counter);
    
    for (x = 0; x < counter; x++)
    printf("%d\n",va_arg(count_ptr,int));
    
    
    va_end (count_ptr);
}*/

/*void printNum2(int counter, ... )
{
   int x = 0;
   char str[500];
    va_list count_ptr;
    va_start (count_ptr,counter);
    
   
    //vprintf("%d\n%d\n%d", count_ptr);
    
   for (x = 0; x < counter*3; x+=3)
   {
       str[x] = '%';
       str[x+1] = 'd';
       str[x+2] = '\n';
   }
   str[x]='\0';
   
    vprintf(str, count_ptr);
    va_end (count_ptr);
}
*/
void myPrintf(char *format, ...)
{
    va_list argPtr;
    va_start(argPtr, format);
    vprintf( format, argPtr);
    va_end(argPtr);
}
int main()
{
    //printNum(5,2,4,3,2,6);
    //printNum2(3, 1,2,3);
    myPrintf("%d, %s, %.2f", 2, "hello", 3.2);

    return 0;
}

