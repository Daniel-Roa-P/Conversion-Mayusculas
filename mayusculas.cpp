
#include <iostream>
#include <dirent.h>

using namespace std;

int main(){
	 
    DIR *direccion;
	dirent *entrada;
		
		if (DIR* direccion = opendir("C:")){
			
				while (dirent* entrada = readdir(direccion)){
				
    	    	char* cadenaOriginal;
    			cadenaOriginal = entrada->d_name;//Se toma el nombre de cada uno de los archivos
    		
    			printf("%s\n",cadenaOriginal);//Se muestra el nombre de los archivo
    		
    			char* cadenaNueva=cadenaOriginal;
	 			
 				for(int i = 0; i<strlen(cadenaNueva); i++){

          			cadenaNueva[i] = toupper(cadenaNueva[i]); //Funcion que devuelve la misma cadena pero en mayuscula

 				}      			
    		
    			printf("%s\n",cadenaNueva); //Se muestra el nuevo nombre de los archivo
    			rename(cadenaOriginal,cadenaNueva); //Funcion que renombra el archivo
    		
    	}
  			closedir (direccion); //cierra el flujo de directorio
}

       return 0;
    }
