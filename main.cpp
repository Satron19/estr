#include "lista.h"
#include <iostream>

using namespace std;

void insertarEnListaOrdenada(Lista &l,int v){
	int size = l.longLista(),i=1;
	bool flag = true;
	while(flag){
		if(i > size){
			l.anxLista(v);
			flag = false;
		}
		if(l.infoLista(i) < v){
			l.insLista(v,i);
			flag = false;
		}
		i++;
	}
}



int main(){
	Lista lis;

	insertarEnListaOrdenada(lis,6);
	insertarEnListaOrdenada(lis,3);
	insertarEnListaOrdenada(lis,8);
	insertarEnListaOrdenada(lis,1);
	insertarEnListaOrdenada(lis,11);
	insertarEnListaOrdenada(lis,4);
	for(int i=1;i<lis.longLista();i++){
		cout << lis.infoLista(i) << " ";
	}



}
