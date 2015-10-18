/*
Problem Statement

You are given an array of integers of size N. You need to print the sum of the elements in the array.

Input Format 
The first line of input consists of an integer N. 
The next line contains N space-separated integers contained inside the array.

Constraints 
1≤N≤1000 
0≤A[i]≤1000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t = 0, a[1000]={0,},s = 0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++){
        s = s +a[i];
    }
    printf("%d",s);
    return 0;
}
