 #include <stdio.h>
#include <string.h>

int value(char ch)
{
    if(ch == 'I')
        return 1;
    else if(ch == 'V')
        return 5;
    else if(ch == 'X')
        return 10;
    else if(ch == 'L')
        return 50;
    return 0;
}

int main()
{
    char str[20];
    printf("Enter the Roman numeral: ");
    scanf("%19s", str);

    int sum = 0;
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        int num1 = value(str[i]);

        if(i == len - 1)
        {
            sum += num1;
        }
        else
        {
            int num2 = value(str[i + 1]);

            if(num1 < num2)
            {
                sum += (num2 - num1);
                i++;
            }
            else
            {
                sum += num1;
            }
        }
    }

    printf("Decimal value = %d\n", sum);

    return 0;
}
