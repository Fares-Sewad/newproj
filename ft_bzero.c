
#include <strings.h>
#include <stdio.h>
#include <stddef.h>

void ft_bzero(void *s, size_t n)
{   
    unsigned char *ptr;
    ptr = s;
    //size_t i = 0;
    while(n--)
        *ptr++ = '\0';
}


int main()
{
    char str[] = "Hello, world!";
    ft_bzero(str,5);
    printf("\n\nsize of  = %lu\n", sizeof(str));
    for (size_t i = 0; i < sizeof(str); i++)
    {
        printf("str[%zu] = %d (ASCII)\n", i, (unsigned char)str[i]);
    }
    

    return 0;
}

/*
#include <stdio.h>
#include <stddef.h> // من أجل تعريف size_t

// تصريح الدالة الأصلية للمترجم يدوياً ليتعرف عليها في Windows
void bzero(void *s, size_t n);

int main(void)
{
    char str[] = "Hello, world!";

    // تصفير أول 5 بايتات (مرر 5 مباشرة وليس sizeof(5))
    bzero(str, 5);

    // 1. إذا طبعت str مباشرة، لن يظهر شيء لأن أول بايت أصبح '\0'
    printf("الطباعة العادية من البداية: '%s'\n", str);

    // 2. طباعة ما تبقى من النص بعد الـ 5 بايت المصفّرة:
    printf("باقي النص بعد التصفير: '%s'\n", str + 5);

    // 3. طباعة كل البايتات كأرقام ASCII لرؤية الأصفار بعينك:
    printf("محتوى الذاكرة بالكامل:\n");
    for (size_t i = 0; i < sizeof(str); i++)
    {
        printf("str[%zu] = %d (ASCII)\n", i, (unsigned char)str[i]);
    }

    return 0;
}
*/
