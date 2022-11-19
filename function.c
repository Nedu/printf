/******PRINT CHAR****/
/**
* print_string-print a string
* 0types:list a of arguments
* 0buffer:buffer array to handle print
* 0flags: calculates active flags
* 0width: get width
* 0precision: precision specification
* 0size: size specifier
* Return: number of chars printed
*/
int print _string(va_list types, char buffer[],int flags, int width, int precision, int size)