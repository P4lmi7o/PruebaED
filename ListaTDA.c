//Primero conseguir el largo de la lista para poder calcular el promedio, 
//luego hay recorrer la lista e ir sumando los datos con un sumador, para finalmente retornar el promedio.

float promedio(Lista *lista){
    int largo, total, i;
    largo=Fin(lista);   // largo de la lista
    total=0;    //sumador
    for(i=0;i<largo;i++){
        total+=Recuperar(i,lista);    //sumando cada valor de la lista
	}
    return (total/largo);     //retorna el promedio
}

