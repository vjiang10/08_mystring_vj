#include <stdio.h>
#include "mystring.h"

int mystrlen(char *s) {
    int len = 0;
    while (*(s+len)) len++;
    return len;
}

char *mystrcpy(char *dest, char *source) {
    int len_s = mystrlen(source);
    int i = 0;
    while (i < len_s) {
        dest[i] = source[i];
        i++;
    }
    return dest;
}

char *mystrncpy(char *dest, char *source, int n) {
    int i = 0;
    while (i < n && source[i]) {
        dest[i] = source[i];
        i++;
    }
    return dest;
}

char *mystrcat(char *dest, char *source) {
    int len_d = mystrlen(dest);
    int len_s = mystrlen(source);
    int i = 0;
    while (i < len_s) {
        dest[len_d+i] = source[i];
        i++;
    }
    return dest;
}

char *mystrncat(char *dest, char *source, int n) {
    int len_d = mystrlen(dest);
    int i = 0;
    while (i < n && source[i]) {
        dest[len_d+i] = source[i];
        i++;
    }
    return dest;
}

char *mystrchr(char *s, int c) {
    while(*s) {
        if (*s == c) return s;
        s++;
    }
    if (*s == c) return s; 
    return NULL;
}

int mystrcmp(char *s1, char *s2) {
    while (*s1 || *s2) {
        if (*s1 > *s2) return 1;
        if (*s1 < *s2) return -1;
        s1++;
        s2++;
    }
    return 0;
}