## **Se deberá escribir un pseudocódigo para:**

#Realizar la multiplicación de todos los elementos de un arreglo de entrada de **n** elementos

**Función multiplicación**(A,n)
Entrada: Arreglo de elementos
Salida: Multiplicación de los elementos

1. Multiplicación <- 1
2. for (i = 0:n)
   - Multiplicación <- Multiplicación * A[i]
3. return Multiplicación

#Calcular el **promedio** de un arreglo de **n** números enteros de entrada

**Función promedio**(A,n)
Entrada: Arreglo de elementos
Salida: Promedio de los elementos 

1. Suma <- 0
2. for (i = 0:n)
   - Suma <- Suma + i
3. Promedio <- Suma / n
4. return Promedio

#Obtener el elemento **más pequeño**

**Función más pequeño**(A,n) 
Entrada: Arreglo de elementos
Salida: Elemento más pequeño

1. pequeño = A[0]
2. for (i = 0:n)
   - if  A[i] < pequeño
     - pequeño = A[i]
3. return pequeño

#Obtener el elemento **más grande**

**Función más grande**(A,n)
Entrada: Arreglo de elementos
Salida: Elemento más grande

1. grande = A[0]
2. for (i = 0:n)
   - if A[i] > grande
     - grande = A[i]
3. return grande

#Determinar si un número **es primo** o no lo es

**Función primo**(A,n)
Entrada: Arreglo de elementos, núm
Salida: El número es o no primo

1. CantResiduo = 0
2. for i = 1:núm
    - Residuo <- núm % i 
    - if Residuo == 0
      - CantResiduo = CantResiduo + 1
3. if CantResiduo == 2
   - return El número es primo
4. else return El número no es primo
      
   
