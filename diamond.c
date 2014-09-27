#include<stdio.h>

void diamond(int line, char* str);
void printSymbol(int symbol_num,int total_line,char* symbol);

void diamond(int line, char* str)
{
   int i;
   for(i=1; i<=(line+1)/2; i++)
   {
      //printf("1");
      printSymbol(2*i-1, line, str);
   }
   for(i=(line-1)/2; i>=1; i--) 
   {
      //printf("2");
      printSymbol(2*i-1, line, str);
   }
}

void printSymbol(int symbol_num,int total_line,char* symbol)
{
    char * sep = "   ";
    char * empty_symbol = " ";
    int emp_num = (total_line - symbol_num)/2;
    int i;
    for(i=0; i<emp_num; i++)
    {
        printf("%s%s", empty_symbol, sep);
    }
    for(i=0; i<symbol_num; i++)
    {
        printf("%s%s", symbol,sep);
    }
    printf("\n");
}

int main()
{
    char* ch = "$";
    diamond(9,ch);
    //printSymbol(3,5,"*");
}
