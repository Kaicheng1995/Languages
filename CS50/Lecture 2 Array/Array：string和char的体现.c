#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[3];
    names[0]= "EMMA";
    names[1]= "KAI";
    names[2]= "TIAN";
    printf("%s\n",names[0]);
    printf("%c%c%c%c\n",names[0][0],names[0][1],names[0][2],names[0][3]);
    printf("%c%c%c%c%i\n",names[0][0],names[0][1],names[0][2],names[0][3],names[0][4]);
}
 

//最后一行可打出0（即休止符\0