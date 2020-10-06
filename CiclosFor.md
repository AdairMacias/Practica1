## **Se deberá escribir un pseudocódigo para:**

#Realizar la multiplicación de todos los elementos de un arreglo de entrada de **n** elementos

**Función multiplicación**(A,n)
Entrada: Arreglo de elementos
Salida: Multiplicación de los elementos

1. Multiplicación <- 1
2. for (i = 0:n)
   2.A Multiplicación <- Multiplicación * A[i]
3. return Multiplicación

#Calcular el **promedio** de un arreglo de **n** números enteros de entrada

**Función promedio**(A,n)
Entrada: Arreglo de elementos
Salida: Promedio de los elementos 

1. Suma <- 0
2. for (i = 0:n)
   2.A Suma <- Suma + i
3. Promedio <- Suma / n
4. return Promedio

#Obtener el elemento **más pequeño**

**Función más pequeño**(A,n) 
Entrada: Arreglo de elementos
Salida: Elemento más pequeño

1. pequeño = A[0]
2. for (i = 0:n)
   2.A. if  A[i] < pequeño
   2.B.pequeño = A[i]
3. return pequeño

#Obtener el elemento **más grande**

**Función más grande**(A,n)
Entrada: Arreglo de elementos
Salida: Elemento más grande

1. grande = A[0]
2. for (i = 0:n)
   2.A. if A[i] > grande
   2.B. grande = A[i]
3. return grande

#Determinar si un número **es primo** o no lo es

**Función primo**(A,n)
Entrada: Arreglo de elementos, núm
Salida: El número es o no primo

Residuo = 0
i = 1
for i <= núm
  Residuo <- núm % i 
   if Residuo == 0
      Residuo = Residuo + 1
 if Residuo == 2
  return El número es primo
 else return El número no es primo
      
   
