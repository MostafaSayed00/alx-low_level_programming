  #include <stdio.h>

   void _puts_recursion(char *s)
   {
   printf("%c\n",*s);
   }
  
int main ()
{

char s = 'f';
 _puts_recursion(&s);

}
              
