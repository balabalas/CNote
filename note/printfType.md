#BASIC PRINTF CONVERSIONS  基本输出类型
   
CHARACTER(字符)   ARGUMENT TYPE; PRINTED AS
    d,i           int; decimal number. ()    
    o             unsigned int; unsigned octal number (without a leading zero).
    x,X           unsigned int; unsigned hexadecimal number (without a leading 0x or 0X),using abcdef or ABCDEF for 10,...,15.
    u             unsigned int; unsinged decimal number.
    c             int; single character.
    s             char *; print characters from the string until a '\0' or the number of characters given by the precision.
    f             double;[-]m.ddddd, where the number of d's is given by the precision(default 6);
    e,E           double;[-]m.ddddde+/-xx or [-]m.ddddddE+/-xx, where the number of d's is given by the precision(default 6).
    g,G           double; use %e or %E if the exponent is less than -4 or greater than or equal to the precision; otherwise use %f. Trailing zeros and a trailing decimal point are not printed.
    p             void *; pointer (implementation-dependent representation).
    %             no argument is converted; print a %.





