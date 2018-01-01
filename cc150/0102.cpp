//
// Created by dong Zhang on 12/25/17.
//
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(char *str){
    char* end=str;
    char tmp;
    if(str){
        while(*end){
            ++end;
        }
        --end;
        while(str<end){
            tmp=*str;
            *str++=*end;
            *end--=tmp;
        }
    }
}