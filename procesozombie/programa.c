#include <stdio.h>
#include <stdlib.h> // for exit()
#include <unistd.h> // for fork(), and sleep()


int main() 
{
    //creando el proceso hijo
    int pid = fork();
    printf("Id del proceso: %d\n", pid);

    if (pid > 0) // True para el proceso Padre
        sleep(20);
    else if (pid == 0) // True para el proceso hijo
    {
        printf("\nProceso Zombie creado con éxito!");
        printf("\nEstará activo durante 20 segundos\n");
        exit(0);
    }
    else {
        printf("\nLo sentimos! El proceso hijo no pudo ser creado...");
    }
    return 0;
}
