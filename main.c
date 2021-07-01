
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <cs50.h>

string ari(string s){
    int chars = 0, words = 0, sens = 0, a;
    float f_1, f_2, t_1, t_2;
    for (int i = 0; i < strlen(s); i++){
        if (isalnum(s[i])){
            chars++;
        }
        if (s[i] == ' '){
            words++;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?'){
            sens++;
        }
    }
    f_1 = (double)chars/words;
    f_2 = (double)words/sens;
    t_1 = 4.71 * f_1;
    t_2 = (0.5 * f_2) - 21.43;
    a = ceil(t_1 + t_2);
    switch (a){
    case 1:
        return "Kindergarten";
    case 2:
        return "First/Second Grade";
    case 3:
        return "Third Grade";
    case 4:
        return "Fourth Grade";
    case 5:
        return "Fifth Grade";
    case 6:
        return "Sixth Grade";
    case 7:
        return "Seventh Grade";
    case 8:
        return "Eight Grade";
    case 9:
        return "Ninth Grade";
    case 10:
        return "Tenth Grade";
    case 11:
        return "Eleventh Grade";
    case 12:
        return "Twelfth Grade";
    case 13:
        return "College student";
    case 14:
        return "Professor";
    }
}
