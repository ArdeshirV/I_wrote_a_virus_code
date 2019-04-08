/** I_wrote_a_virus_code.c - My own virus against myself! It's just a joke.
 ** Copyright (c) 2019 ardeshirv@protonmail.com, Licensed under GPLv3+  **/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    const char charLine[] = "─";
    char charBuffLine[256] = {'\0'};
    const char charArrOut[] = "\033[1;32m\n ╭%s╮\n │  %s  │\n ╰%s╯\n\033[0m\n";
    char charMsg[] = "q&#>%4q0q'8#$\"q2>54q0608?"
                     "\"%q<(q>&?q2><!$%4#pQQQ���Q��Q";
    for(int i = 0; i < 49; i++)
        strcat(charBuffLine, charLine);
    for(int i = strlen(charMsg); i >= 0; i--)
        charMsg[i] ^= 81;
    printf(charArrOut, charBuffLine, charMsg, charBuffLine);
    return getchar();
}

