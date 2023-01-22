#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct var{
    char *c;
    void (*fptr)(va_list op);
}opstruc;

int _strlen(const char * const format)
{
        int len = 0;

        while (format[len])
                len++;
        return (len);
}

void _char(va_list op)
{
    printf("%c",va_arg(op,int));
}
void _int(va_list op)
{
    printf("%d", va_arg(op, int));
}
void _float(va_list op)
{
    printf("%lf", va_arg(op, double));
}
void _str(va_list op)
{
    char *nstr = va_arg(op, char*);
    if (nstr)
        printf("%s",nstr);
    else
        printf("(nil)");
}

void print_all(const char * const format, ...)
{
        int i, j, len, _switch = 0;
        va_list op;
        opstruc _func[] = {
            {"c", &_char},
            {"i", &_int},
            {"f", &_float},
            {"s", &_str},
        };

        va_start(op, format);
        len = _strlen(format);
        i = 0;
        while(format[i])
        {
		j = 0;
            while (j < 4)
            {
                if(format[i] == *(_func[j].c))
                    {
                      if (_switch == 1) 
                        printf(", ");
			_func[j].fptr(op);
			_switch = 1;
                    }
		j++;
            }
            i++;
        }
        printf("\n");
        va_end(op);
}

int main(void)
{
    print_all("ceisszv", 'B', 3, NULL, "stSchool");
    return (0);
}
