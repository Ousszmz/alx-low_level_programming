int main(void) {
/**
 * main - Entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
    int i, j, k;
    for (i = 0; i <= 7; i++) {
        for (j = i+1; j <= 8; j++) {
            for (k = j+1; k <= 9; k++) {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);
                if (i != 7 || j != 8 || k != 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}
