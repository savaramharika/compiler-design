#include<stdio.h>
#include<conio.h>
#include<string.h>

char input[100];
int i = 0; 
int len;   

int E();
int EP();
int T();
int TP();
int F();

int main() {
    printf("\nRecursive descent parsing for the following grammar\n");
    printf("\nE -> TE'\nE' -> +TE'/@\nT -> FT'\nT' -> *FT'/@\nF -> (E)/ID\n");

    printf("\nEnter the string to be checked:");
    gets(input);

    len = strlen(input); // Calculate length of input string

    if (E() && i == len) {
        printf("\nString is accepted");
    } else {
        printf("\nString is not accepted");
    }

    getch();
    return 0;
}

int E() {
    if (T()) {
        if (EP())
            return 1;
        else
            return 0;
    } else
        return 0;
}

int EP() {
    if (i < len && input[i] == '+') {
        i++;
        if (T()) {
            if (EP())
                return 1;
            else
                return 0;
        } else
            return 0;
    } else
        return 1;
}

int T() {
    if (F()) {
        if (TP())
            return 1;
        else
            return 0;
    } else
        return 0;
}

int TP() {
    if (i < len && input[i] == '*') {
        i++;
        if (F()) {
            if (TP())
                return 1;
            else
                return 0;
        } else
            return 0;
    } else
        return 1;
}

int F() {
    if (i < len && input[i] == '(') {
        i++;
        if (E()) {
            if (i < len && input[i] == ')') {
                i++;
                return 1;
            } else
                return 0;
        } else
            return 0;
    } else if ((i < len && (input[i] >= 'a' && input[i] <= 'z')) || (input[i] >= 'A' && input[i] <= 'Z')) {
        i++;
        return 1;
    } else
        return 0;
}
