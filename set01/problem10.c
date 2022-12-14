#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
   char string1[100], string2[100];
   int result=0;
    input_two_strings(string1, string2);
    result=stringcompare(string1, 
    string2);
    output(string1, string2, result);
     return 0;
}
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}

}

void output(char *string1,char *string2,int result){
  if(result ==10)
  {printf("Both words are equal");}
  else{
    if(result ==1){printf("%s is greater than %s",
      string1,string2);}
    else{printf("%s is greater than %s",string2,string1);}}
  }