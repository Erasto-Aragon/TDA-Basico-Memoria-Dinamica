# TDA-Basico, Memoria dinamica

Empecemos definiendo conceptos:

**¿Que es la memoria**
Es un espacio lógico para guardar información, se refiere a parte de los componentes que forman parte de una computadora. Son dispositivos que retienen datos informáticos durante algún intervalo de tiempo. Las memorias de computadora proporcionan unas de las principales funciones de la computación moderna, la retención o almacenamiento de información.

**¿Que es la memoria estatica?**
Las técnicas de asignación de memoria estática son sencillas, la asignación de memoria puede hacerse en tiempo de compilación y los objetos están vigentes desde que comienza la ejecución del programa hasta que termina.

**¿Que es la memoria dinamica?**
Es un espacio de almacenamiento que se solicita en tiempo de ejecución. De esa manera, a medida que el proceso va necesitando espacio para más líneas, va solicitando más memoria al sistema operativo para guardarlas. El medio para manejar la memoria que otorga el sistema operativo, es el puntero, puesto que no podemos saber en tiempo de compilación dónde nos dará huecos el sistema operativo.

![765129](https://user-images.githubusercontent.com/71147346/95814772-d9ba3980-0ce0-11eb-8952-a3ef37bf1fc6.png)

A continuacion se presenta el ejercicio planteado por el docente:

**Implementar la memoria dinamica, al pedir datos al usuario**

Al analizar este ejercicio seguimos el ejercicio del docente donde iniciaba con una estructura para conocer los componentes que se iban a pedir al usuario, lo primero seria preguntar al usuario cuantos alumnos va registras en la base de datos, para asi conocer el numero e iniciar el bucle for pidiendo los datos dentro de la estructura, prosegimos asignando un valor para llamar a la estructura y asi guardando los elementos que vaya introduciendo el usuario, recordando que estos valores se añaden a la estructura antes declarada, se empiezan a pedir datos y se observa como se van guardando.

![1](https://user-images.githubusercontent.com/71147346/95816755-74b51280-0ce5-11eb-9e9c-828488463976.JPG)

Finalmente se cierra el for donde se pidio los datos al usuario, ahora seria momento de mostrar en pantalla dicho datos, para eso proceguimos con un for, primero ponemos en formar horizontal los elementos que apareceran abajo y solo queda concatenar los datos y dando asi por terminado el ejercicio sobre memoria dinamica.

![2](https://user-images.githubusercontent.com/71147346/95816754-741c7c00-0ce5-11eb-9869-4c0c619f140d.JPG)

En conclusion, nos surgieron muchas dudas y errores al estar procesando de que forma realizar, pero finalmente llegamos a rescatar esa importancia del uso de memoria, puesto que el programa en ocaciones no usa toda la memoria es por eso que existe este metodo y segun los libros "El programador debe saber cuando almacenar memoria y una vez finalizado el programa liberar dicha memoria".
