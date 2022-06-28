#include <iostream> 
using namespace std; 
int main() { 
    int n,m; 
    int arc; 
    cout<<"INGRESE CANTIDAD DE NUMEROS A ORDENAR"<<endl; 
    cin>>n; 
    int v[n]; 
    cout<<"INGRESE NUMEROS: "<<endl; 
    for(int i=0;i<n;i=i+1){         
        cin>>v[i]; 
    } 
    cout<<"ORDENAR DE MAYOR A MENOR (0) DE MENOR A MAYOR (1)"<<endl; 
    cin>>m;     
    for(int i=0;i<n;i++) 
    for(int j=i+1;j<n;j++) 
    if(m==0)
	{     
        if(v[i]<v[j])
		{     
            arc=v[i]; 
            v[i]=v[j]; 
            v[j]=arc; 
        } 
    }
	else
	{ 
        if(v[i]>v[j])
		{     
            arc=v[i]; 
            v[i]=v[j]; 
            v[j]=arc; 
        } 
    } 
    cout<<" "<<endl;         
    cout<<"LISTA ORDENADA DE LOS ELEMENTOS"<<endl; 
    for (int i=0;i<n;i++){ 
         
        cout<<v[i]<<endl; 
     
    } 
    return 0; 
} 
