#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ZenEye()
{
    printf(
    "███████╗███████╗███╗   ██╗    ███████╗██╗   ██╗███████╗\n"
    "╚══███╔╝██╔════╝████╗  ██║    ██╔════╝╚██╗ ██╔╝██╔════╝\n"
    "  ███╔╝ █████╗  ██╔██╗ ██║    █████╗   ╚████╔╝ █████╗  \n"
    " ███╔╝  ██╔══╝  ██║╚██╗██║    ██╔══╝    ╚██╔╝  ██╔══╝  \n"
    "███████╗███████╗██║ ╚████║    ███████╗   ██║   ███████╗\n"
    "╚══════╝╚══════╝╚═╝  ╚═══╝    ╚══════╝   ╚═╝   ╚══════╝\n"
    "\n"
    );
}




int main()
{
    system("clear");
    ZenEye();
    int minuti;
    printf("\n");
    printf("\033[1;32mBenvenuto a ZenEye, il timer fatto appositamente per la protezione dei tuoi occhi durante una sessione stressante di lavoro / studio.\n\033[0m");
    
    printf("\n");
    
    printf("\033[1;32mQuando hai finito di lavorare/studiare, premi CRTL + C per chiudere il programma\n\033[0m");
    
    printf("\n");
    
    printf("Scrivi qua quanti minuti vuoi mettere al timer: ");
    scanf("%d",&minuti);
    
    int secondi = minuti * 60;
    int secondi_riposo;
    
    printf("Scrivi quanti secondi di riposo ti servono di riposo: "); 
    scanf("%d",&secondi_riposo);
    if (minuti != 1)
    {
        printf("Il timer per la protezione occhi è stato avviato, ti avviserò ogni %d minuti.\n",minuti);
    }
    else
    {
        printf("Il timer per la protezioni occhi è stato avviato, ti avviserò ogni %d minuto.\n",minuti);
    }
    
    while(1)
    {
        sleep(secondi);
        printf("\033[1;36mE' TEMPO DI FARE UNA PAUSA, GUARDA UN OGGETTO PER %d SECONDI!\n\033[0m",secondi_riposo);
        system("afplay /System/Library/Sounds/Glass.aiff");
        
        sleep(secondi_riposo);
        
        if (minuti != 1)
        {
          
          printf("Timer di %d minuti avviato di nuovo\n",minuti);
        
        }
        else
        {
            printf("Timer di %d minuto avviato di nuovo\n",minuti);
        }
    
    }


    return 0;

}
