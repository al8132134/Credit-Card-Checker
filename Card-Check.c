#include <cs50.h>
#include <stdio.h>

int sumcheck(long number)
{
    int count = 0;
    bool mode = false;
    while (number > 0)
    {
        if (mode == true)
        {
            int digit = number % 10;
            if (2 * digit < 10)
            {
                count = count + 2 * digit;
            }
            else
            {
                count = count + (2 * digit) / 10 + (2 * digit) % 10;
            }
        }
        mode = !mode;
        number = number / 10;
    }
    return count;
}
int numcheck(long number)
{
    int count = 0;
    bool mode = true;
    while (number > 0)
    {
        if (mode == true)
        {
            int digit = number % 10;
            count = count + digit;
        }
        mode = !mode;
        number = number / 10;
    }
    return count;
}
int checklength(long number)
{
    int length = 0;
    while (number > 0)
    {
        number = number / 10;
        length += 1;
    }
    return length;
}
int firsttwonumber(long number)
{
    long first = number;
    while (first > 100)
    {
        first = first / 10;
    }
    return first;
}

int main(void)
{
    long num;
    do
    {
        num = get_long("Number: ");
    }
    while (num < 1);

    int length = checklength(num);

    int sum = sumcheck(num);

    int total = numcheck(num) + sum;

    int firsttwo = firsttwonumber(num);

    if (total % 10 == 0)
    {
        if (length == 16)
            if ((firsttwo / 10) == 4)
            {
                printf("VISA\n");
            }
            else if ((firsttwo > 50) && (firsttwo < 56))
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        else if (length == 15)
        {
            if ((firsttwo == 34) || (firsttwo == 37))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (length == 13)
        {
            if ((firsttwo / 10) == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}