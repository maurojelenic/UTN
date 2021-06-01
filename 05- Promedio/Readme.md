 # Grupo 1
-----------------------
 # 05 – Promedio
-----------------------
 ## Problemas:

     1.Escribir, compilar y ejecutar un programa que permita calcular el promedio de una n cantidad de números.
     2.Escribir, compilar y ejecutar un programa que permita calcular el promedio de una n cantidad de números por año.
-----------------------
 ### 1. Promedio.cpp

#### Modelo IPO:

 #####    R^c --> Promedio --> R
     
#### Léxico:
   
     x ϵ R
     c ϵ N

#### Representación del Algoritmo:

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{120}&space;\bg_white&space;\small&space;\\c:%22Cantidad\,de\,numeros\,ingresados\,en\,total%22\,\in\mathbb{N}^{&plus;}{0}&space;\\A:%22Numeros\,\,ingresados\,\,en\,\,total%22&space;=&space;\left&space;\{\,(&space;a{1},&space;\,a_{2},\,&space;a_{3},\,...\,,\,a_{c})\right\}&space;\in&space;\mathbb{R}&space;^c&space;\\Promedio:A\rightarrow\mathbb{R}&space;/Promedio(x)\begin{cases}\0\&space;\&space;;&space;\&space;c=0\\\frac{\sum_{i=1}^{c}x_{i}}{c};&space;\;&space;e.o.c&space;\end{cases}\\" target="_blank">
<img src="https://latex.codecogs.com/png.latex?\dpi{120}&space;\bg_white&space;\small&space;\\c:%22Cantidad\,de\,numeros\,ingresados\,en\,total%22\,\in\mathbb{N}^{&plus;}{0}&space;\\A:%22Numeros\,\,ingresados\,\,en\,\,total%22&space;=&space;\left&space;\{\,(&space;a{1},&space;\,a_{2},\,&space;a_{3},\,...\,,\,a_{c})\right\}&space;\in&space;\mathbb{R}&space;^c&space;\\Promedio:A\rightarrow\mathbb{R}&space;/Promedio(x)\begin{cases}\0\&space;\&space;;&space;\&space;c=0\\\frac{\sum_{i=1}^{c}x_{i}}{c};&space;\;&space;e.o.c&space;\end{cases}\\" title="\small \\c:%22Cantidad\,de\,numeros\,ingresados\,en\,total%22\,\in\mathbb{N}^{+}{0} \\A:%22Numeros\,\,ingresados\,\,en\,\,total%22 = \left \{\,( a{1}, \,a_{2},\, a_{3},\,...\,,\,a_{c})\right\} \in \mathbb{R} ^c \\Promedio:A\rightarrow\mathbb{R} /Promedio(x)\begin{cases}\0\ \ ; \ c=0\\\frac{\sum_{i=1}^{c}x_{i}}{c}; \; e.o.c \end{cases}\\" /></a>

-----------------------
 ### 2. Promedioporaño.cpp

#### Modelo IPO:

     (RxN)^c --> PromedioPorAño --> (NXR)^d
      
      Siendo c la cantidad de duplas que ingresan y d la cantidad de años diferentes ingresados

#### Léxico:
   
   c, d ϵ N    
   suma ϵ R   
   cantidad ϵ Z    
   anio ϵ N = {2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020}
   promedio ϵ R   
   i ϵ Z   

 ####  Representación del Algoritmo:
        
        1. Se ingresan las duplas (suma; anio)
        2. Se inicializa c en uno
        3. Se declara promedio que es igual a la suma dividido la cantidad
        4. Se retorna anio y promedio
        5. Para cada dupla ingresada:
                  6. Si BuscarIndicePorAnio(Anio) es distinto de -1
                       7. Entonces
                       8. Se declara indice y se lo iguala a BuscarIndicePorAnio(Anio)
                       9. Se iguala la suma correspondiente al indice con la suma
                       10. Se incrementa la cantidad correspondiente al indice en 1 unidad
                  11. Si no
                       12. Se ingresa otra dupla
        13. Se declara i y se lo inicializa en 0
        14. Para i< cantidad de elementos de PromedioPorAnio
                  15. Se muestra PromedioPorAnio en i
                  16. Se incrementa el valor de i en una unidad
      
                  
        
 ####  Representación de BuscarIndicePorAnio:
       
       1. La función recibe un anio
        2. i=o
        3. Para i< cantidad de elementos de PromedioPorAnio
                  4. Si anio= PromedioPorAnio en i
                      5. Se incrementa el valor de i en una unidad
                      6. Devuelve i
                  7. Si no devuelve -1
                  
                  
                  
                  
                  
                  
### 3.PromedioPorAnioPOrRegion.cpp


#### Modelo IPO:

     ((N x N x R)^c) --> PromedioPorAñoPorRegion --> ((N x N x R)^d)
      
     Siendo c la cantidad de duplas que ingresan, d la cantidad de años diferentes ingresados 

### Lexico 
   suma ϵ R   
   cantidad ϵ Z    
   anio ϵ N = {2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020} 
   promedio ϵ R 
   region ϵ N = {0, 1, 2}
   i ϵ Z   
   d, c ϵ N 
   
   
### Representacion   
   
Se declara un array de 2 dimenciones, luego se ingresa el anio, la region y el valor a promediar. declaramos que el anio debe ser entre  2010 y 2020, la region debe ser 0, 1 o 2 y hacemos el promedio sumando los valores ingresados y dividirlos por la cantidad de valores ingresados. Una vez hecho el promedio por anio y por region muestra los resultados.




### 4.PromedioPorAnioPorRegionPorProducto.cpp
  
  
#### Modelo IPO:

     ((N x N x N x R)^c) --> PromedioPorAñoPorRegion --> ((N x N x N x R)^d)
      
     Siendo c la cantidad de duplas que ingresan, d la cantidad de años diferentes ingresados 

### Lexico 
   suma ϵ R   
   cantidad ϵ Z    
   anio ϵ N = {2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020}
   promedio ϵ R
   region ϵ N = {0, 1, 2}
   producto ϵ N = {0, 1}
   i ϵ Z   
   d, c ϵ N 

### Representacion  

Se declara un array de 3 dimensiones, se ingresa el valor, el anio, la region y el producto. Declaramos que el anio debe ser entre 2010 y 2020, la region debe ser 0, 1 o 2, el producto debe ser el 0 o el 1 y hacemos el promedio sumando los valores ingresados y dividirlo por la cantidad de valores ingresados. finalmente muesta el promedio dependiendo el anio, region y producto.

