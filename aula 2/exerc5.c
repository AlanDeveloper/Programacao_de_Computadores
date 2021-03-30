#include <stdio.h>

int main() {
    int day, month, year;
    int dayCurrent, monthCurrent, yearCurrent;

    printf("Digite o dia de seu nascimento: ");
    scanf("%d", &day);
    printf("Digite o mes de seu nascimento: ");
    scanf("%d", &month);
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &year);

    printf("Digite o dia atual: ");
    scanf("%d", &dayCurrent);
    printf("Digite o mes atual: ");
    scanf("%d", &monthCurrent);
    printf("Digite o ano atual: ");
    scanf("%d", &yearCurrent);

    if(day >= 1 && day <= 31 && dayCurrent >= 1 && dayCurrent <= 31) {
        if(month >= 1 && month <= 12 && monthCurrent >= 1 && monthCurrent <= 12) {
            if(year <= yearCurrent) {
                year = yearCurrent - year;
                month = monthCurrent - month;
                day = dayCurrent - day;

                printf("Voce tem %d ano(s) %d mes(es) e %d dia(s)", year, month, day);
            } else {
                printf("Ano incorreto");
            }
        } else {
            printf("Mes incorreto");
        }
    } else {
        printf("Dia incorreto");
    }
    
    return 0;
}
