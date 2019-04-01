
#include <iostream>
#include <dirent.h>

using namespace std;

int main(){
	 
    DIR *direccion;
	dirent *entrada;
		
		if (DIR* direccion = opendir("C:")){
			
				while (dirent* entrada = readdir(direccion)){
				
    	    	char* cadenaOriginal;
    			cadenaOriginal = entrada->d_name;
    		
    			printf("%s\n",cadenaOriginal);
    		
    			char* cadenaNueva=cadenaOriginal;
	 			
 				for(int i = 0; i<strlen(cadenaNueva); i++){

          			cadenaNueva[i] = toupper(cadenaNueva[i]);

 				}      			
    		
    			printf("%s\n",cadenaNueva);
    			rename(cadenaOriginal,cadenaNueva);
    		
    	}
  			closedir (direccion);
}

       return 0;
    }
