#include <iostream>
#include <stdio.h>
#include <time.h>

//1.Funcion que devuelve el elemento maximo del vector.

void cargar(int vector[10])
{
    int x;
    for(x=0;x<10;x++)
        {
        printf("Inserte el elemento :");
        scanf("%i",&vector[x]);
        }
}
void maximo(int vector[10])
{
    int max=vector[10];
    int x;
    for(x=1;x<10;x++)
        {
        if (vector[x]>max)
            {
            max=vector[x];
            }
        }
    printf("El elemento maximo es:%i/n",max);
}

//2. Funcion que devuelve el elemento minimo del vector.

int minimo(int vec[],int min, int i){

    if(i==0){
        return min;
    }else{
        if(vec[i]<min){
            min=vec[i];
        }
        return minimo(vec,min,i=1);
    }
}

//3. Funcion que devuelve por referencia el elemento minimo y maximo del vector.

int random();
int maximo(int v[], int n);
int minimo(int v[], int n);
void imprimir(int v[], int n);

int maximo(int v[], int n)
{
    int max;

    for(int i=0; i<n;i++)
        if(i==0 || max<v[i])
            max=v[i];

    return  max;
}

int minimo(int v[], int n)
{
    int min;
    for(int i=0;i<n;i++)
        if(i==0||min>v[i])
            min=v[i];
    return min;
}

void imprimir(int v[], int n){
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}



//4. Funcion que llene el vector con valores aleatorios

void llenarvector(int vector[],int tamanio){

    int i,ultimo=0;
    for(i=0;i<tamanio;i++){
        ultimo=ultimo+rand()%5+1;
        vector[i]=ultimo;
    }
}

void imprimir(int vector[],int tamanio){

    int i;
    for(i=0;i<tamanio;i++)
        if(i<tamanio-1)
            printf("%i",vector[i]);
        else
            printf("%i/n",vector[i]);
}

void aleatorio(int vector[],int tamanio){
    int i, r,aux;
    for(i=0;i<tamanio-1;i++){
        r=rand()%tamanio;
        aux=vector[i];
        vector[i]=vector[r];
        vector[r]=aux;
    }
}



int main() {
    int vector[10];
    cargar(vector);
    maximo(vector);

    int n,vec[10],min;
    int minimo(int vec[],int min,int n);

    cout<<"Ingrese el numero de elementos: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese el elemento N°: "<<i+1<<endl;
        cin>>vec[i];
    }

    min=vec[0];
    cout<<"El elemento minimo es: "<< minimo(vec,min,n-1);





    int n, max, min;
    srand(time(NULL));
    do{
        cout<<"Tamaño del vector: ";
        cin>>n;

        if(n<1 || n>30)
            cout<<"Dentro del rango de 1 a 30"<<endl;

    } while (n<1 || n>30);
    int v[n];

    for(int i=0; i<n;i++)
        v[i]=random();
    max=minimo(v,n);
    min= minimo(v,n);

    cout<<"Vector: ";
    imprimir(v,n);
    cout<<"Maximo: "<<max;
    cout<<"Minimo: "<<min<<endl;





    int vector[50];
    int tamanio=20;

    srand(time(NULL));
    llenarvector(vector,tamanio);
    printf("Ordenados:/n");
    imprimir(vector,tamanio);
    aleatorio(vector,tamanio);
    printf("Desordenados:/n");
    imprimir(vector,tamanio);

    return 0;
}
