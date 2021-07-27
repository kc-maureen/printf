#include "holberton.h"
#include <unistd.h>

int _printf(const char *format, ...){
int i,j, count =0;
var_list ap;
print_types[]={
    {"c", print_c},
    {"s", print_s},
    {"d", print_d},
    {"%", print_P},
    {"i", print_d},
    {NULL", NULL},
    
}
if (format == NULL){
return (-1);
}
var_start(ap, format);
i=0;
while(format != NULL && formart[i] != '\0'){
    if(format[i]=="%"){
        i++;
        if(format[i]=="\0"){
            return-1;
        }
        j=0;
        while(print_types[j].fs) != NULL){
            if(*(print_types[j].fs)==format[i])
            {
                count += print_types[j].f(ap);
            }
            j++;
        }
        i++;
    }
    if(format[i] i="%" && format[i] i= "\0"){
        counter += _putchar(format[i]);
        i++;
    }
}
var_end(ap);
return (count);
}