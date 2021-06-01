# Especificación de punto

  ## Conjunto de valores de punto:

   ### Punto = {p = (x; y) / x, y ∈ R}

  ## Conjunto de operaciones de punto:



   ### Punto<sub>operaciones</sub> = {GetDist, SonDistanciasIguales, SonDistanciasDistintas, ExtraerDeCinUnPunto, AreNear}



Get Distancia:



#### <a href="https://www.codecogs.com/eqnedit.php?latex=GetDist:&space;Punto&space;x&space;Punto&space;\rightarrow&space;\mathbb{R}^{&plus;}_{0}&space;/&space;Dist&space;(a,&space;b)&space;=&space;\sqrt{(a._{x}-b._{x})^{2}&plus;(a._{y}-b._{y})^{2}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?GetDist:&space;Punto&space;x&space;Punto&space;\rightarrow&space;\mathbb{R}^{&plus;}_{0}&space;/&space;Dist&space;(a,&space;b)&space;=&space;\sqrt{(a._{x}-b._{x})^{2}&plus;(a._{y}-b._{y})^{2}}" title="GetDist: Punto x Punto \rightarrow \mathbb{R}^{+}_{0} / Dist (a, b) = \sqrt{(a._{x}-b._{x})^{2}+(a._{y}-b._{y})^{2}}" /></a>



Son Distancias Iguales: 



#### <a href="https://www.codecogs.com/eqnedit.php?latex=SonDistanciasIguales:&space;PuntoxPuntoxPunto&space;\rightarrow&space;B&space;/&space;SonDistanciasIguales(a,b,c)=\left\{\begin{matrix}&space;1&space;&&space;GetDist(a,b)=GetDist(b,c)=GetDist(a,c)\\&space;0&space;&&space;EOC&space;\end{matrix}\right." target="_blank"><img src="https://latex.codecogs.com/gif.latex?SonDistanciasIguales:&space;PuntoxPuntoxPunto&space;\rightarrow&space;B&space;/&space;SonDistanciasIguales(a,b,c)=\left\{\begin{matrix}&space;1&space;&&space;GetDist(a,b)=GetDist(b,c)=GetDist(a,c)\\&space;0&space;&&space;EOC&space;\end{matrix}\right." title="SonDistanciasIguales: PuntoxPuntoxPunto \rightarrow B / SonDistanciasIguales(a,b,c)=\left\{\begin{matrix} 1 & GetDist(a,b)=GetDist(b,c)=GetDist(a,c)\\ 0 & EOC \end{matrix}\right." /></a>



Son Distancias Distintas: 



#### <a href="https://www.codecogs.com/eqnedit.php?latex=SonDistanciasDistintas:&space;PuntoxPuntoxPunto&space;\rightarrow&space;B&space;/&space;SonDistanciasDistintas(a,b,c)=\left\{\begin{matrix}&space;1&space;&&space;GetDist(a,b)\neq&space;GetDist(b,c)\neq&space;GetDist(a,c)\\&space;0&space;&&space;EOC&space;\end{matrix}\right." target="_blank"><img src="https://latex.codecogs.com/gif.latex?SonDistanciasDistintas:&space;PuntoxPuntoxPunto&space;\rightarrow&space;B&space;/&space;SonDistanciasDistintas(a,b,c)=\left\{\begin{matrix}&space;1&space;&&space;GetDist(a,b)\neq&space;GetDist(b,c)\neq&space;GetDist(a,c)\\&space;0&space;&&space;EOC&space;\end{matrix}\right." title="SonDistanciasDistintas: PuntoxPuntoxPunto \rightarrow B / SonDistanciasDistintas(a,b,c)=\left\{\begin{matrix} 1 & GetDist(a,b)\neq GetDist(b,c)\neq GetDist(a,c)\\ 0 & EOC \end{matrix}\right." /></a>



AreNear:



<a href="https://www.codecogs.com/eqnedit.php?latex=AreNear:&space;\mathbb{R}^3\rightarrow&space;\mathbb{R}/&space;AreNear(a,b,Delta)&space;=&space;abs(a-b)&space;<=Delta" target="_blank"><img src="https://latex.codecogs.com/gif.latex?AreNear:&space;\mathbb{R}^3\rightarrow&space;\mathbb{R}/&space;AreNear(a,b,Delta)&space;=&space;abs(a-b)&space;<=Delta" title="AreNear: \mathbb{R}^3\rightarrow \mathbb{R}/ AreNear(a,b,Delta) = abs(a-b) <=Delta" /></a>
