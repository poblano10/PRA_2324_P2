#include<iostream>
#include<vector>

using namespace std;

template <typename T>
void Swap(vector<T>& a,int f,int g);

template <typename T>

int BusquedaBinaria(T x,const vector<T>& a,int ini,int fin){
       
	if (ini>fin){
		cout<<"El numero no se encuentra en el array"<<endl;
		return -1;
	}

        int medio =(ini+fin)/2;

	if(a[medio] == x){
		return medio;
	}else if(a[medio] > x){
		return BusquedaBinaria(x,a,ini,medio-1);
	}else{
		return BusquedaBinaria(x,a,medio+1,fin);
        }
}

template <typename T>

int sort(vector<T>& a,int ini,int fin){

        int i = ini;
        T x = a[fin];


        for(int j=ini;j<fin;j++){
                if(a[j] <= x){
                        Swap(a,i,j);
                        i++;
                }
        }
        Swap(a,i,fin);
        return i;
}

template <typename T>

void Swap(vector<T>& a,int f,int g){

    T aux =a[f];
    a[f] = a[g];
    a[g] = aux;
}

template <typename T>

void QuickSort(vector<T>& a,int ini,int fin){

        if(ini<fin){
                int pivote= sort(a,ini,fin);
                QuickSort(a,ini,pivote-1);
                QuickSort(a,pivote+1,fin);

        }

}


