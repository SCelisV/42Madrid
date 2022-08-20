// write

// https://pubs.opengroup.org/onlinepubs/007904975/functions/write.html

// http://codewiki.wikidot.com/c:system-calls:write

// ssize_t write(int fildes, const void *buf, size_t nbytes);

// int fildes --> indica el descriptor de archivo de donde escribir la salida. 
		// Puede utilizar un descriptor de archivo obtenido de la llamada al sistema open, o puede utilizar 0, 1 o 2, 
		// 0 para referirse a la entrada estándar, 
		// 1 para referirse a la salida estándar o 
		// 2 para referirse a el error estándar

// const void *buf --> Un puntero a un búfer de al menos nbytes bytes, que se escribirá en el archivo.

// size_t nbytes --> El número de bytes a escribir. Si es menor que el búfer proporcionado, la salida se trunca.

// la función devuelve el número de bytes que se han escrito. Si el valor es negativo, la llamada al sistema devuelve un error.

#include <unistd.h>
 
int main(void)
{
    if (write(1, "This will be output to standard out\n", 36) != 36) 
    {
        write(2, "There was an error writing to standard out\n", 44);
        return -1;							// si el valor de bytes que recibe para escribir es negativo devuelve un error
    }
    return 0; 								// si el valor de bytes que recibe para escribir es positivo devuelve el número de bytes que se han escrito
}


        // write(1, "Sonia", 1);               // S
        // write(1, "Sonia", 2);               // So   
        // write(1, "Sonia", 3);               // Son  
        // write(1, "Sonia", 5);               // Sonia
	// write(1, "error \n", 8);            // error y el enter 


	// write(1, &c, 1);			// escribe un char

