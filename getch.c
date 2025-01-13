#include <stdio.h>
#include <conio.h> // For getch() function

int main() {
    char ch;
    
    printf("Press any key: ");
    ch = getch(); // Read a single character from the keyboard
    
    printf("\nYou pressed: %c\n", ch);
    
    return 0;
}
