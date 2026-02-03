#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>



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




void Linux()
{
    system("clear");
    ZenEye();
    int minuti;
    printf("\n");

    printf("Scrivi quanti minuti vuoi mettere al timer: ");
    scanf("%d",&minuti);
    
    int secondi = minuti * 60;
    int secondi_riposo;

    printf("Scrivi quanti secondi di riposo ti servono: ");
    scanf("%d",&secondi_riposo);

    if(minuti!=1)
    {
        printf("Il timer per la protezione occhi e' stato avviato, ti avvisero' ogni %d minuti.\n" ,minuti);

    }
    else
    {
        printf("il timer per la protezione occhi e' stato avviato, ti avvisero' ogni %d minuto.\n",minuti);

    }

    while(1)
    {
        sleep(secondi);
        printf("E' TEMPO DI FARE UNA PAUSA, GUARDA UN OGGETTO PER %d SECONDI!\n",secondi_riposo);
        system("canberra-gtk-play --id=\"message-new-instant\"");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
        sleep(secondi_riposo);

        if(minuti != 1)
        {
            printf("Timer di %d minuti avviato di nuovo\n",minuti);
        }
        else
        {
            printf("Timer di %d minuto avviato di nuovo\n",minuti);
        }
    }
}


void MacOS()
{
    system("clear");
    ZenEye();
    int minuti;
    printf("\n");
    printf("Scrivi quanti minuti vuoi mettere al timer: ");
    scanf("%d",&minuti);
    
    int secondi = minuti * 60;
    int secondi_riposo;

    printf("Scrivi quanti secondi di riposo ti servono: ");
    scanf("%d",&secondi_riposo);

    if(minuti!=1)
    {
        printf("Il timer per la protezione occhi e' stato avviato, ti avvisero' ogni %d minuti.\n" ,minuti);

    }
    else
    {
        printf("il timer per la protezione occhi e' stato avviato, ti avvisero' ogni %d minuto.\n",minuti);

    }

    while(1)
    {
        sleep(secondi);
        printf("E' TEMPO DI FARE UNA PAUSA, GUARDA UN OGGETTO PER %d SECONDI!\n",secondi_riposo);
        system("afplay /System/Library/Sounds/Glass.aiff");
        sleep(secondi_riposo);

        if(minuti != 1)
        {
            printf("Timer di %d minuti avviato di nuovo\n",minuti);
        }
        else
        {
            printf("Timer di %d minuto avviato di nuovo\n",minuti);
        }
    }
}



int main()
{
    system("clear");
    ZenEye();
    printf("\033[1;33mBenvenuto a ZenEye, il timer creato appositamente per la protezione dei tuoi occhi durante una attivita' impegnativa\n\033[0m");
    printf("\n");
    printf("\033[1;33mPer chiudere il programma basta premere CRTL + C\n\033[0m");
    printf("\n");
    int tipo_os;
    printf("Scrivi che tipo di sistema operativo usi:\n");
    printf("\033[1;36m[1]\033[0m Linux\n");
    printf("\033[1;36m[2]\033[0m MacOS\n");
    printf("\033[1;36m==> \033[0m");
    scanf("%d",&tipo_os);

    if(tipo_os == 1)
    {
        Linux();
    }

    else
    {
        MacOS();
    }

    return 0;
}