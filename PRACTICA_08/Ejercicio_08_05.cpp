// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void recortador(string web,string &dominio,string &protocolo,string &ruta);

int main()
{   
    string web="",dominio="",protocolo="",ruta="";
    cout<<"Ingrese su sitio web para dividirlo: "<<endl; getline(cin,web);
    recortador(web,dominio,protocolo,ruta);
    cout<<"Este es el recorte:\n"<<"protocolo: "<<protocolo<<"\n"<<"dominio: "<<dominio<<"\n"<<"ruta: "<<ruta<<"\n"<<endl;

    return 0;
}
void recortador(string web,string &dominio,string &protocolo,string &ruta) //https://www.universidad.edu.bo/carreras/sistemas)
{
    int posOmitir,posDominio;
    posOmitir=web.find("://");
    protocolo=web.substr(0,posOmitir);
    posDominio=posOmitir+3; 
    dominio=web.substr(posDominio,web.find("/",posDominio)-posDominio);
    ruta=web.substr(web.find("/",posDominio));


}
