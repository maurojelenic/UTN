
# Modelo IPO

 ![alt text](https://github.com/utn-frba-aed/2019-051-01/blob/master/04-Triangulo/IPO_Triangulo.png)
      

# Especificación de triángulo



 ## Conjunto de valores de triángulo:

<a href="https://www.codecogs.com/eqnedit.php?latex=triangulo&space;=&space;\left&space;\{&space;t&space;=&space;(a,b,c)&space;/&space;a,b,c&space;\in&space;punto&space;\right&space;\}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?triangulo&space;=&space;\left&space;\{&space;t&space;=&space;(a,b,c)&space;/&space;a,b,c&space;\in&space;punto&space;\right&space;\}" title="triangulo = \left \{ t = (a,b,c) / a,b,c \in punto \right \}" /></a>

 ## Conjunto de operaciones de triángulo:

 ### Triangulo<sub>operaciones</sub> = {EsEquilatero, GetPerimetro, GetTipo, ExtraerDeCinUnTriangulo}

#### Es Equilatero: 

<a href="https://www.codecogs.com/eqnedit.php?latex=EsEquilatero:&space;Triangulo&space;\rightarrow&space;\mathbb{I}&space;boolean&space;/EsEquilatero(a)=&space;\begin{Bmatrix}&space;1&space;;&&space;GetTipo(t)&space;=&space;Equilatero&space;\\&space;0&space;;&&space;E.O.C&space;\end{matrix}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?EsEquilatero:&space;Triangulo&space;\rightarrow&space;\mathbb{I}&space;boolean&space;/EsEquilatero(a)=&space;\begin{Bmatrix}&space;1&space;;&&space;GetTipo(t)&space;=&space;Equilatero&space;\\&space;0&space;;&&space;E.O.C&space;\end{matrix}" title="EsEquilatero: Triangulo \rightarrow \mathbb{I} boolean /EsEquilatero(a)= \begin{Bmatrix} 1 ;& GetTipo(t) = Equilatero \\ 0 ;& E.O.C \end{matrix}" /></a>


#### Get Perimetro:

<a href="https://www.codecogs.com/eqnedit.php?latex=GetPer:Triangulo&space;\rightarrow&space;\mathbb{R}/&space;GetPer(x)&space;=&space;\begin{cases}&space;&&space;\0&space;;&space;GetDist(a,b)&space;&plus;&space;GetDist&space;(a,c)&space;&plus;&space;GetDist(b,c)&space;=&space;0&space;\\&space;&&space;\&space;a&space;;&space;E.O.C&space;\end{cases}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?GetPer:Triangulo&space;\rightarrow&space;\mathbb{R}/&space;GetPer(x)&space;=&space;\begin{cases}&space;&&space;\0&space;;&space;GetDist(a,b)&space;&plus;&space;GetDist&space;(a,c)&space;&plus;&space;GetDist(b,c)&space;=&space;0&space;\\&space;&&space;\&space;a&space;;&space;E.O.C&space;\end{cases}" title="GetPer:Triangulo \rightarrow \mathbb{R}/ GetPer(x) = \begin{cases} & \0 ; GetDist(a,b) + GetDist (a,c) + GetDist(b,c) = 0 \\ & \ a ; E.O.C \end{cases}" /></a>


#### Get Tipo:

<a href="https://www.codecogs.com/eqnedit.php?latex=GetTipo:&space;Triangulo&space;\rightarrow&space;TipoDeTriangulo/&space;GetTipo(x)=&space;\begin{cases}&space;&&space;\&space;TipoDeTriangulo(t)=Equilatero;&space;SonDistanciasIguales(a,b,c)\\&space;&&space;\&space;TipoDeTriangulo(t)=Escaleno;SonDistanciasDistintas(a,b,c)&space;\\&space;&&space;\&space;TipoDeTriangulo(t))=Isosceles;&space;E.O.C&space;\end{cases}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?GetTipo:&space;Triangulo&space;\rightarrow&space;TipoDeTriangulo/&space;GetTipo(x)=&space;\begin{cases}&space;&&space;\&space;TipoDeTriangulo(t)=Equilatero;&space;SonDistanciasIguales(a,b,c)\\&space;&&space;\&space;TipoDeTriangulo(t)=Escaleno;SonDistanciasDistintas(a,b,c)&space;\\&space;&&space;\&space;TipoDeTriangulo(t))=Isosceles;&space;E.O.C&space;\end{cases}" title="GetTipo: Triangulo \rightarrow TipoDeTriangulo/ GetTipo(x)= \begin{cases} & \ TipoDeTriangulo(t)=Equilatero; SonDistanciasIguales(a,b,c)\\ & \ TipoDeTriangulo(t)=Escaleno;SonDistanciasDistintas(a,b,c) \\ & \ TipoDeTriangulo(t))=Isosceles; E.O.C \end{cases}" /></a>


















