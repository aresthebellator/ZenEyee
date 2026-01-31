#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int minuti;
    printf("Scrivi qua quanti minuti vuoi mettere al timer: ");
    scanf("%d",&minuti);
    int secondi = minuti * 60;

    printf("Il timer per la protezione occhi è stato avviato, ti avviserò ogni %d min.\n",minuti);
    while(1)
    {
        sleep(secondi);
        printf("\a\n[!] E' TEMPO DI FARE UNA PAUSA, GUARDA UN OGGETTO PER 20 SECONDI!\n");
        system("canberra-gtk-play --id=\"message-new-instant\"");
        
        sleep(20);
        
        printf("Timer di %d min avviato di nuovo\n",minuti);
        
    }


    return 0;


}
