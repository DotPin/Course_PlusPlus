#include "ListaGen.h"

using namespace std;

ListaGen::ListaGen(){
    raiz = NULL;
}

ListaGen::~ListaGen()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

int ListaGen::cantidad()
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

void ListaGen::insertar(int pos, int x)
{
    if (pos <= cantidad() + 1)    
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (pos == 1)
        {
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else
            if (pos == cantidad() + 1)    
            {
                Nodo *reco = raiz;
                while (reco->sig != NULL) 
                {
                    reco = reco->sig;
                }
                reco->sig = nuevo;
                nuevo->sig = NULL;
            }
            else 
            {
                Nodo *reco = raiz;
                for (int f = 1; f <= pos - 2; f++)
                {
                    reco = reco->sig;
                }
                Nodo *siguiente = reco->sig;
                reco->sig = nuevo;
                nuevo->sig = siguiente;
            }
    }
}


int ListaGen::extraer(int pos) {
    Nodo *bor;
    Nodo *reco;
    Nodo *prox = reco->sig;
    int informacion=0;
    if (pos <= cantidad()){
        if (pos == 1){
            informacion = raiz->info;
            bor = raiz;
            raiz = raiz->sig;
        }
        else{
            reco = raiz;
            for (int f = 1; f <= pos - 2; f++){
                reco = reco->sig;
            }
            reco->sig = prox->sig;
            informacion = prox->info;
            bor = prox;
        }
        
        delete bor;
        return informacion;

    }else return -1;
}

void ListaGen::borrar(int pos)
{
    if (pos <= cantidad())    
    {
        Nodo *bor;
        if (pos == 1) 
        {
            bor = raiz;
            raiz = raiz->sig;
        }
        else {
            Nodo *reco;
            reco = raiz;
            for (int f = 1; f <= pos - 2; f++)
            {
                reco = reco->sig;
            }
            Nodo *prox = reco->sig;
            reco->sig = prox->sig;
            bor = prox;
        }
        delete bor;
    }
}

void ListaGen::intercambiar(int pos1, int pos2) 
{
    if (pos1 <= cantidad() && pos2 <= cantidad())    
    {
        Nodo *reco1 = raiz;
        for (int f = 1; f < pos1; f++)
        {
            reco1 = reco1->sig;
        }
        Nodo *reco2 = raiz;
        for (int f = 1; f < pos2; f++)
        {
            reco2 = reco2->sig;
        }
        int aux = reco1->info;
        reco1->info = reco2->info;
        reco2->info = aux;
    }
}

bool ListaGen::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}


int ListaGen::mayor() 
{
    if (!vacia()) 
    {
        int may = raiz->info;
        Nodo *reco = raiz->sig;
        while (reco != NULL) 
        {
            if (reco->info > may)
            {
                may = reco->info;
            }
            reco = reco->sig;
        }
        return may;
    }
    else
        return -1;
}

void ListaGen::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}


int ListaGen::posMayor() 
{
    if (!vacia())    
    {
        int may = raiz->info;
        int x = 1;
        int pos = x;
        Nodo *reco = raiz->sig;
        while (reco != NULL)
        {
            if (reco->info > may) 
            {
                may = reco->info;
                pos = x;
            }
            reco = reco->sig;
            x++;
        }
        return pos;
    }
    else
        return -1;
}

bool ListaGen::ordenada() 
{
    if (cantidad()>1) 
    {
        Nodo *reco1 = raiz;
        Nodo *reco2 = raiz->sig;
        while (reco2 != NULL) 
        {
            if (reco2->info<reco1->info) 
            {
                return false;
            }
            reco2 = reco2->sig;
            reco1 = reco1->sig;
        }
    }
    return true;
}

bool ListaGen::existe(int x) 
{
    Nodo *reco = raiz;
    while (reco != NULL) 
    {
        if (reco->info == x)
            return true;
        reco = reco->sig;
    }
    return false;
}


/*
void ListaGen::insertar(int pos, int x){
    Nodo *nuevo = new Nodo();

    if(cantidad()+1 == 0 ){
        nuevo->info = x;
        nuevo->sig = raiz;
        raiz = nuevo;
    }else if(pos <= cantidad()+1){
        Nodo *aux;
        aux = raiz;
        nuevo->info = x;
        int cnt=0;
        while (cnt < pos){
            aux = aux->sig;
            cnt++;
        }
        nuevo->sig = aux->sig;
        aux->sig = nuevo;
    }

}*/