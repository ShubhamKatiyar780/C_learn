// #include<stdio.h>
#include<windows.h>
int main () {
COORD c;
c.X=20;
c.Y=9;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("Hello World");
    getch ();
}
