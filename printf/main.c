#include "ft_printf.h"

int main(void) {
    int num = -42;
    char *str = "Hello, World!";
    void *ptr = (void *)str;

    // Test character
    ft_printf("Character: %c\n", 'A');
    
    // Test string
    ft_printf("String: %s\n", str);
    
    // Test pointer
    ft_printf("Pointer: %p\n", ptr);
    
    // Test decimal integer
    ft_printf("Decimal: %d\n", num);
    
    // Test unsigned decimal
    ft_printf("Unsigned: %u\n", (unsigned int)num);
    
    // Test hexadecimal
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    
    // Test percent sign
    ft_printf("Percent: %%\n");

    return 0;
}

