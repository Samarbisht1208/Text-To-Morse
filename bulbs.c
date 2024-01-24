#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO

    string s = get_string("Meassage: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        int bin[BITS_IN_BYTE];
        int decimal = s[i];

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            bin[j] = decimal % 2;
            decimal = decimal / 2;
        }

        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(bin[k]);
        }

        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
