#include <bits/stdc++.h>
#include <cstdlib>
#include <dos.h>
#define INF 100000010
using namespace std;


vector<pair<int, int> > grafo[100000];
vector<string> capitales;
vector<string> ejemplo;
int inicio;
int fin;
int regreso;
int continente;
int visitados[100000]; 
int distancia[100000];

void dijkstra(int verticeInicial)
{
    for(int i = 0; i < 100000; i++){
        distancia[i] = INF;

    }
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

void deleteGraph() {

    for(int i = 0; i<100000; i++) {

        grafo[i].clear();

    }

}

void llenarGrafo(int continente) {

    deleteGraph();

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

        case 2:

            grafo[0].push_back(make_pair(1090, 1));
            grafo[1].push_back(make_pair(978, 2));
            grafo[1].push_back(make_pair(484, 3));
            grafo[3].push_back(make_pair(959, 4));
            grafo[4].push_back(make_pair(550, 5));
            grafo[5].push_back(make_pair(572, 6));
            grafo[5].push_back(make_pair(688, 7));
            grafo[5].push_back(make_pair(662, 8));
            grafo[4].push_back(make_pair(526, 9));
            grafo[9].push_back(make_pair(1847, 10));
            grafo[9].push_back(make_pair(1848, 11));
            grafo[9].push_back(make_pair(472, 12));
            grafo[10].push_back(make_pair(2964, 11));
            grafo[11].push_back(make_pair(1854, 12));
            grafo[11].push_back(make_pair(276, 14));
            grafo[14].push_back(make_pair(1398, 15));
            grafo[10].push_back(make_pair(1469, 13));

            grafo[1].push_back(make_pair(1090, 0));
            grafo[2].push_back(make_pair(978, 1));
            grafo[3].push_back(make_pair(484, 1));
            grafo[4].push_back(make_pair(959, 3));
            grafo[5].push_back(make_pair(550, 4));
            grafo[6].push_back(make_pair(572, 5));
            grafo[7].push_back(make_pair(688, 5));
            grafo[8].push_back(make_pair(662, 5));
            grafo[9].push_back(make_pair(526, 4));
            grafo[10].push_back(make_pair(1847, 9));
            grafo[11].push_back(make_pair(1848, 9));
            grafo[12].push_back(make_pair(472, 9));
            grafo[11].push_back(make_pair(2964, 10));
            grafo[12].push_back(make_pair(1854, 11));
            grafo[14].push_back(make_pair(276, 11));
            grafo[15].push_back(make_pair(1398, 14));
            grafo[13].push_back(make_pair(1469, 10));

            capitales.push_back("Moscu");
            capitales.push_back("Helsinki");
            capitales.push_back("Oslo");
            capitales.push_back("Estocolmo");
            capitales.push_back("Minsk");
            capitales.push_back("Varsovia");
            capitales.push_back("Berlin");
            capitales.push_back("Praga");
            capitales.push_back("Bratislava");
            capitales.push_back("Kiev");
            capitales.push_back("Budapest");
            capitales.push_back("Tiflis");
            capitales.push_back("Chisinau");
            capitales.push_back("Atenas");
            capitales.push_back("Erevan");
            capitales.push_back("Ankara");
            
            break;

        case 3:

            grafo[0].push_back(make_pair(623, 1));
            grafo[1].push_back(make_pair(1271, 2));
            grafo[2].push_back(make_pair(582, 3));
            grafo[3].push_back(make_pair(839, 4));
            grafo[2].push_back(make_pair(313, 5));
            grafo[5].push_back(make_pair(210, 6));
            grafo[2].push_back(make_pair(1420, 7));
            grafo[2].push_back(make_pair(373, 8));
            grafo[1].push_back(make_pair(609, 9));
            grafo[10].push_back(make_pair(464, 11));

            grafo[1].push_back(make_pair(623, 0));
            grafo[2].push_back(make_pair(1271, 1));
            grafo[3].push_back(make_pair(582, 2));
            grafo[4].push_back(make_pair(839, 3));
            grafo[5].push_back(make_pair(313, 2));
            grafo[6].push_back(make_pair(210, 5));
            grafo[7].push_back(make_pair(1420, 2));
            grafo[8].push_back(make_pair(373, 2));
            grafo[9].push_back(make_pair(609, 1));
            grafo[11].push_back(make_pair(464, 10));

            capitales.push_back("Lisboa");
            capitales.push_back("Madrid");
            capitales.push_back("Paris");
            capitales.push_back("Berna");
            capitales.push_back("Viena");
            capitales.push_back("Bruselas");
            capitales.push_back("Amsterdam");
            capitales.push_back("Roma");
            capitales.push_back("Luxemburgo");
            capitales.push_back("Andorra La Vella");
            capitales.push_back("Londres");
            capitales.push_back("Dubai");

            break;
            

        case 4:

           grafo[0].push_back(make_pair(600, 1));
           grafo[0].push_back(make_pair(432, 2));
           grafo[2].push_back(make_pair(20, 4));
           grafo[0].push_back(make_pair(103, 3));

           grafo[1].push_back(make_pair(600, 0));
           grafo[2].push_back(make_pair(432, 0));
           grafo[4].push_back(make_pair(20, 2));
           grafo[3].push_back(make_pair(103, 0));

           capitales.push_back("Palestina");
           capitales.push_back("Imperio Romano");
           capitales.push_back("Rodesia");
           capitales.push_back("Zanzibar");
           capitales.push_back("Vietnam Del Sur");

           break;

        case 5:

           grafo[0].push_back(make_pair(700, 1));
           grafo[1].push_back(make_pair(50, 2));
           grafo[1].push_back(make_pair(150, 3));
           grafo[1].push_back(make_pair(300, 4));

           grafo[1].push_back(make_pair(700, 0));
           grafo[2].push_back(make_pair(50, 1));
           grafo[3].push_back(make_pair(150, 1));
           grafo[4].push_back(make_pair(300, 1));

           capitales.push_back("Union Sovietica");
           capitales.push_back("Corea Del Norte");
           capitales.push_back("Pemba");
           capitales.push_back("Mozambique");
           capitales.push_back("Darfur");

           break;  
           
        case 6:

           grafo[0].push_back(make_pair(60, 1));
           grafo[1].push_back(make_pair(490, 2));
           grafo[0].push_back(make_pair(620, 3));
           grafo[3].push_back(make_pair(3002, 4));

           grafo[1].push_back(make_pair(60, 0));
           grafo[2].push_back(make_pair(490, 1));
           grafo[3].push_back(make_pair(620, 0));
           grafo[4].push_back(make_pair(3002, 3));

           capitales.push_back("Imperio Thalia");
           capitales.push_back("Dinastia Koteron");
           capitales.push_back("Imperio Tribbitus");
           capitales.push_back("Dinastia Criten");
           capitales.push_back("Dinastia Teonem");

           break;  

        case 7:

           grafo[0].push_back(make_pair(10, 1));
           grafo[1].push_back(make_pair(75, 3));
           grafo[3].push_back(make_pair(242, 4));
           grafo[1].push_back(make_pair(501, 2));

           grafo[1].push_back(make_pair(10, 0));
           grafo[3].push_back(make_pair(75, 1));
           grafo[4].push_back(make_pair(242, 3));
           grafo[2].push_back(make_pair(501, 1));

           capitales.push_back("Irania");
           capitales.push_back("Lotus");
           capitales.push_back("Ugevaria");
           capitales.push_back("Dinada");
           capitales.push_back("Atoseo");

           break;

        case 8:

           grafo[0].push_back(make_pair(21, 1));
           grafo[1].push_back(make_pair(45, 2));
           grafo[0].push_back(make_pair(275, 3));
           grafo[3].push_back(make_pair(534, 4));

           grafo[1].push_back(make_pair(21, 0));
           grafo[2].push_back(make_pair(45, 1));
           grafo[3].push_back(make_pair(275, 0));
           grafo[4].push_back(make_pair(534, 3));

           capitales.push_back("Atenas");
           capitales.push_back("Atlantis");
           capitales.push_back("Ciudadela Olimpica");
           capitales.push_back("Ciudad Griega");
           capitales.push_back("Crisa");   

           break;

        case 9:

            grafo[0].push_back(make_pair(563, 1));
            grafo[1].push_back(make_pair(248, 2));
            grafo[1].push_back(make_pair(875, 4));
            grafo[2].push_back(make_pair(654, 3));

            grafo[1].push_back(make_pair(563, 0));
            grafo[2].push_back(make_pair(248, 1));
            grafo[4].push_back(make_pair(875, 1));
            grafo[3].push_back(make_pair(654, 2));

            capitales.push_back("Slug Giant");
            capitales.push_back("Slug Flyer");
            capitales.push_back("Lemor");
            capitales.push_back("Servil");
            capitales.push_back("Astrolug");  

            break;



           




           



            


            




    }



    




}




void ejecucion() {

    capitales.clear();
    ejemplo.clear();
    deleteGraph();
    


    cout<< "Introduzca su continente" << endl;
    cout<< "1. SudAmerica" << endl;
    cout<< "2. Europa del Este" << endl;
    cout<< "3. Europa del Oeste" <<endl;

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

        if(inicio!=fin) {

            cout<< "La ruta minima entre el hospital de "<<capitales.at(inicio)<< " y " <<capitales.at(fin)<< " es " << distancia[fin] << " km. "<< endl;

        } else {

            cout<< "Usted ha digitado la misma ubicacion para punto de partida y destino, por favor, digite numeros diferentes"<<endl;

        }

       

    } else {

        cout<<"Uy! Resulta que no tenemos una ruta entre estos dos hospitales, pero no se preocupe! Llame al 55749328 para contactarse con el Sr. Brown y conseguir un descuento en su funeral!"<<endl;

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

void tutorial() {

    deleteGraph();

    ejemplo.clear();

    llenarGrafo(1);

    

    ejemplo.push_back("Sucre");
    ejemplo.push_back("Asuncion");
    ejemplo.push_back("Montevideo");
    ejemplo.push_back("Brasilia");
    ejemplo.push_back("Buenos Aires");
    ejemplo.push_back("Santiago");
    ejemplo.push_back("Lima");
    ejemplo.push_back("Quito");
    ejemplo.push_back("Bogota");
    ejemplo.push_back("Caracas");
    ejemplo.push_back("GeorgeTown");
    ejemplo.push_back("Paramaribo");
    ejemplo.push_back("Cayena");

    cout<<"Bienvenido al tutorial de la herramienta CoDyMe_HospitalSearcher!" << endl;
    cout<<"Esta herramienta le permitira encontrar la distancia mas corta entre dos de nuestros hospitales afiliados" << endl;
    cout<<"Nuestros hospitales se encuentran en las capitales de los paises mas importantes de Sudamerica y Europa " << endl;
    cout<< "Entre estos 2 continentes, tenemos mas de 30 hospitales a su disposicion!" << endl;
    cout<<" Elaboremos un ejemplo: " << endl;
    cout<<"Usaremos el continente de Sudamerica, que tiene los siguientes paises:"<<endl;

    for(int i = 0; i<ejemplo.size(); i++) {

        cout<<i<<": "<<ejemplo.at(i)<<endl;

    }

    srand(time(0));
    int r = 1+ (rand()%12) ;
    cout<<"Ahora usaremos un pais al azar como punto de partida, en este caso: "<< ejemplo.at(r)<<endl;
    cout<<"Ahora usaremos otro pais al azar como punto de llegada, en este caso: ";
    int t = 1+ (rand()%12);

    while(t==r) {

        t = 1+ (rand()%12);

    }

    cout<<ejemplo.at(t)<<endl;

    dijkstra(r);

    cout<<"Usaremos el algoritmo de Dijkstra, para obtener el camino minimo entre estas dos capitales"<<endl;
    cout<< "La ruta minima entre el hospital de "<<ejemplo.at(r)<< " y " <<ejemplo.at(t)<< " es " << distancia[t] << " km. "<< endl;
    cout<< "Ahora que usted ya conoce la aplicacion, que desea hacer?"<<endl;

    cout<<"Digite 0 para una consulta y 1 para salir"<<endl;

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

void ejemplos() {

    capitales.clear();
    deleteGraph();

    cout<<"Digite cual ejemplo quiere visualizar, del 1 al 6"<<endl;
    int ejemplo;
    cin>>ejemplo;

    string nombreContinente;
    vector<int> rutas;

    switch(ejemplo) {

        case 1:
           
           nombreContinente = "Lemuria";
           llenarGrafo(4);
           break;

        case 2:

            nombreContinente = "Atlantida";
            llenarGrafo(5);
            break;

        case 3:

            nombreContinente = "Wakanda";
            llenarGrafo(6);
            break;

        case 4:

            nombreContinente = "Zootopia";
            llenarGrafo(7);
            break;    

        case 5:

            nombreContinente = "GOW";
            llenarGrafo(8);
            break;

        case 6:

            nombreContinente = "Meslu";
            llenarGrafo(9);
            break;    


    }

    cout<<"Consideremos un continente imaginario, llamado: " <<nombreContinente << " que tiene los siguientes paises: " <<endl;

    for(int i = 0; i<capitales.size(); i++) {

        cout<<capitales.at(i)<<endl;

    }

    cout<<"Ahora, haremos un viaje desde " << capitales.at(0) << " hasta " << capitales.at(4) << endl;

    for(int i = 0; i < 100000; i++){
        distancia[i] = INF;

    }

    dijkstra(0);

    cout<< "La ruta minima entre el hospital de "<<capitales.at(0)<< " y " <<capitales.at(4)<< " es " << distancia[4] << " km. "<< endl;

    cout<< "Ahora que ya conoce los ejemplos, que desea hacer?" << endl;

    cout<<"Digite 0 para una consulta, 1 para ver otro ejemplo y 2 para salir"<<endl;

    cin>>regreso;

    switch(regreso) {

        case 0:
          capitales.clear();
          ejecucion();
          break;

        case 1:
          
          ejemplos();
          break;

        case 2:
          
          cout<<"Muchas gracias por confiar en nosotros! :D" <<endl;
          break;





    }



     




}


int main()
{
    deleteGraph();
    capitales.clear();
    ejemplo.clear();

    int menu;

    cout<< "Bienvenido querido cliente! Esta es la plataforma principal para la busqueda de hospitales de la red sudamericana CoDyMe! " << endl;

    cout<<"Seleccione una opcion para continuar" << endl;

    cout<<"1. Introducir partida y destino" << endl;
    cout<<"2. Tutorial" << endl;
    cout<<"3. Ejemplos" << endl;
    cout <<"4. Salir" << endl;

    cin>> menu;

    switch(menu) {

        case 1:

            ejecucion();
            break;

        case 2:

            tutorial();
            break;

        case 3:

            ejemplos();
            break;    

        case 4:

            cout<< "Gracias por la visita! :)" << endl;

            break;

    }


   
    
    
    return 0;
}
