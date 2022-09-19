/******************************************************************************

Code does bit manipulation using bit mask that alters just the third bit.

*******************************************************************************/

#include <stdio.h>
#define BITMSK (0x2)

static int a = 0;


void set_bit3(void) {

a |= BITMSK;
}

void clear_bit3(void) {

a &= ~BITMSK;
}

int main()
{
    printf("Value before bit alteration:  %d\n",a);
    set_bit3();
    printf("Setting third bit:  %d\n",a);
    
    clear_bit3();
    printf("Clearing third bit:  %d\n",a);

    return 0;
}
