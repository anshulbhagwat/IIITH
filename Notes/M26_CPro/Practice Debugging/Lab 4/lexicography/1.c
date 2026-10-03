#include <stdio.h>
#include <string.h>
int main(void)
{
    char input[1001];
    scanf("%s",input);
    int n = strlen(input);
    char output[n+1];
    strcpy(output,input);
    char min[n+1];
    char max[n+1];
    strcpy(min,input);
    strcpy(max,input);
    char temp1=output[0];
    
    for (int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            
                output[i]=output[i+1];
                
                
            
        }
        output[n-1] = temp1;
        if (strcmp(min, output) > 0)
        {
            strcpy(min, output);
        }
        if (strcmp(max, output) < 0)
        {
            strcpy(max,output);
        }

    }
    printf("%s\n", min);
    printf("%s", max);
}