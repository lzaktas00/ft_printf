
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int   ben;
    int   original;
    char  *str = "Merhaba 42!";
    int   num = -2147483648; // int sınır değeri
    void  *ptr = &num;

    printf("--- 1. KARAKTER TESTI (%%c) ---\n");
    ben = ft_printf("Benimki:  %c\n", 'A');
    original = printf("Orijinal: %c\n", 'A');
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 2. STRING TESTI (%%s) ---\n");
    ben = ft_printf("Benimki:  %s\n", str);
    original = printf("Orijinal: %s\n", str);
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 3. NULL STRING TESTI ---\n");
    ben = ft_printf("Benimki:  %s\n", (char *)NULL);
    char *null_str = NULL;
    orig = printf("Orijinal: %s\n", null_str);
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 4. SAYI TESTI (%%d ve %%i) ---\n");
    ben = ft_printf("Benimki:  %d | %i\n", num, 42);
    original = printf("Orijinal: %d | %i\n", num, 42);
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 5. HEXADECIMAL TESTI (%%x ve %%X) ---\n");
    ben = ft_printf("Benimki:  %x | %X\n", 255, 255);
    original = printf("Orijinal: %x | %X\n", 255, 255);
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 6. POINTER ADRESI TESTI (%%p) ---\n");
    ben = ft_printf("Benimki:  %p\n", ptr);
    original = printf("Orijinal: %p\n", ptr);
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 7. NULL POINTER TESTI (%%p NULL) ---\n");
    ben = ft_printf("Benimki:  %p\n", NULL);
    original = printf("Orijinal: %p\n", NULL);
    printf("Returnler -> Benimki: %d | Orijinal: %d\n\n", ben, original);

    printf("--- 8. YUZDE ISARETI TESTI (%%%%) ---\n");
    ben = ft_printf("Benimki:  %%\n");
    original = printf("Orijinal: %%\n");
    printf("Returnler -> Benimki: %d | Orijinal: %d\n", ben, original);

    return (0);
}
