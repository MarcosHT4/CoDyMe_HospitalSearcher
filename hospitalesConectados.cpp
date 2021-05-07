#include <bits/stdc++.h>
#include <dos.h>
#define INF 100000010
using namespace std;


vector<pair<int, int> > grafo[100000];
vector<string> capitales;
int inicio;
int fin;
int regreso;
int continente;
int visitados[100000]; 
int distancia[100000];

void dijkstra(int verticeInicial)
{
    for(int i = 0; i < 100000; i++)
        distancia[i] = INF;


    memset(visitados, 0, sizeof(visitados));

    multiset<pair<int, int> > colaPrioridad;
    distancia[verticeInicial] = 0;
    colaPrioridad.insert(make_pair(0, verticeInicial));
    while (!colaPrioridad.empty())
    {
        pair<int, int> verticeActual = *colaPrioridad.begin();
        colaPrioridad.erase(colaPrioridad.begin());
        int vertice = verticeActual.second;
        int peso = verticeActual.first;

        if (visitados[vertice])
        {
            continue;
        }
        visitados[vertice] = true;

        for (int i = 0; i < grafo[vertice].size(); i++)
        {
            int verticeVecino = grafo[vertice][i].second;
            int pesoVecino = grafo[vertice][i].first;
            if (distancia[vertice] + pesoVecino < distancia[verticeVecino])
            {
                distancia[verticeVecino] = distancia[vertice] + pesoVecino;
                colaPrioridad.insert(make_pair(distancia[verticeVecino], verticeVecino));
            }
        }
    }

}

void llenarGrafo(int continente) {

    switch(continente) {

        case 1:

            grafo[0].push_back(make_pair(1427, 1));
            grafo[1].push_back(make_pair(1344, 2));
            grafo[2].push_back(make_pair(593, 4));
            grafo[4].push_back(make_pair(1407, 5));
            grafo[5].push_back(make_pair(3286, 6));
            grafo[6].push_back(make_pair(1802, 7));
            grafo[7].push_back(make_pair(1103, 8));
            grafo[8].push_back(make_pair(1400, 9));
            grafo[2].push_back(make_pair(2903, 3));
            grafo[3].push_back(make_pair(2755, 10));
            grafo[10].push_back(make_pair(444, 11));
            grafo[11].push_back(make_pair(336, 12));
            grafo[0].push_back(make_pair(2033, 6));

            grafo[1].push_back(make_pair(1427, 0));
            grafo[2].push_back(make_pair(1344, 1));
            grafo[4].push_back(make_pair(593, 2));
            grafo[5].push_back(make_pair(1407, 4));
            grafo[6].push_back(make_pair(3286, 5));
            grafo[7].push_back(make_pair(1802, 6));
            grafo[8].push_back(make_pair(1103, 7));
            grafo[9].push_back(make_pair(1400, 8));
            grafo[3].push_back(make_pair(2903, 2));
            grafo[10].push_back(make_pair(2755, 3));
            grafo[11].push_back(make_pair(444, 10));
            grafo[12].push_back(make_pair(336, 11));
            grafo[6].push_back(make_pair(2033, 0));

            capitales.push_back("Sucre");
            capitales.push_back("Asuncion");
            capitales.push_back("Montevideo");
            capitales.push_back("Brasilia");
            capitales.push_back("Buenos Aires");
            capitales.push_back("Santiago");
            capitales.push_back("Lima");
            capitales.push_back("Quito");
            capitales.push_back("Bogota");
            capitales.push_back("Caracas");
            capitales.push_back("GeorgeTown");
            capitales.push_back("Paramaribo");
            capitales.push_back("Cayena");

            break;



    }



    




}


void tutorial() {

    



}

void ejecucion() {

    cout<< "Introduzca su continente" << endl;
    cout<< "1. SudAmerica" << endl;
    cout<< "2. Europa" << endl;

    cin>>continente;

    llenarGrafo(continente);

    
    
    cout<<"Introduzca su punto de partida" << endl;

    for(int i = 0; i<capitales.size(); i++) {

        cout<<i<<": "<<capitales.at(i)<<endl;

    }

    cin>>inicio;

    dijkstra(inicio);

    cout<< "Introduzca su destino" << endl;

    cin>>fin;

    if(distancia[fin]!=INF) {

        cout<< "La ruta minima entre el hospital de "<<capitales.at(inicio)<< " y " <<capitales.at(fin)<< " es " << distancia[fin] << " km. "<< endl;

    }

    cout<<"Digite 0 para hacer otra consulta y 1 para salir"<<endl;

    cin>>regreso;

    switch(regreso) {

        case 0:
          capitales.clear();
          ejecucion();
          break;

        case 1:
          cout<<"Muchas gracias por confiar en nosotros! :D" <<endl;
          break;



    }

    
    



    



}


int main()
{
    capitales.clear();

    int menu;

    cout<< "Bienvenido querido cliente! Esta es la plataforma principal para la busqueda de hospitales de la red sudamericana CoDyMe! " << endl;

    cout<<"Seleccione una opcion para continuar" << endl;

    cout<<"1. Introducir partida y destino" << endl;
    cout<<"2. Tutorial" << endl;
    cout <<"3. Salir" << endl;

    cin>> menu;

    switch(menu) {

        case 1:

            ejecucion();
            break;

        case 2:

            tutorial();
            break;

        case 3:

            cout<< "Gracias por la visita! :)" << endl;

            break;

    }


   
    
    
    return 0;
}