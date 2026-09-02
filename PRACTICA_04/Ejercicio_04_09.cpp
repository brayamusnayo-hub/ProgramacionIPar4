// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>

using namespace std;

int leerNotaValida(string mensaje) {
    int nota;
    do {
        cout << mensaje;
        cin >> nota;
        if (nota < 0 || nota > 100) {
            cout << "Nota invalida. Debe estar entre 0 y 100. Intente de nuevo." << endl;
        }
    } while (nota < 0 || nota > 100);
    return nota;
}

double calcularNotaFinal(int p1, int p2, int p3, int examen) {
    double promedioParciales = (p1 + p2 + p3) / 3.0;
    double notaFinal = (promedioParciales * 0.5) + (examen * 0.5);
    return notaFinal;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes (N): ";
    cin >> n;

    int aprobados = 0;
    int reprobados = 0;
    double sumaNotasFinales = 0.0;

    for (int i = 1; i <= n; i++) {
        cout << "\n--- ESTUDIANTE " << i << " ---" << endl;

        int p1 = leerNotaValida("Ingrese Nota Parcial 1: ");
        int p2 = leerNotaValida("Ingrese Nota Parcial 2: ");
        int p3 = leerNotaValida("Ingrese Nota Parcial 3: ");

        int examenFinal = 0;
        double notaFinal = 0.0;
        bool habilitado = true;

        if (p1 >= 60 && p2 >= 60 && p3 >= 60) {
            examenFinal = leerNotaValida("Ingrese Nota de Examen Final: ");
            notaFinal = calcularNotaFinal(p1, p2, p3, examenFinal);
        } else {
            habilitado = false;
            notaFinal = ((p1 + p2 + p3) / 3.0) * 0.5; 
        }

        cout << "\nRESULTADOS ESTUDIANTE " << i << ":" << endl;
        cout << "Parcial 1: " << p1 << " | Parcial 2: " << p2 << " | Parcial 3: " << p3 << endl;
        
        if (habilitado) {
            cout << "Examen Final: " << examenFinal << endl;
        } else {
            cout << "Examen Final: No habilitado (Parciales menores a 60)" << endl;
        }

        cout << "Nota Final: " << notaFinal << endl;

        if (habilitado && notaFinal >= 51) {
            cout << "Estado: APROBADO" << endl;
            aprobados++;
        } else {
            cout << "Estado: REPROBADO" << endl;
            reprobados++;
        }

        sumaNotasFinales += notaFinal;
    }

    cout << "\n=========================================" << endl;
    cout << "ESTADISTICAS GLOBALES DE LA ASIGNATURA" << endl;
    cout << "=========================================" << endl;

    if (n > 0) {
        double porcentajeAprobados = (aprobados * 100.0) / n;
        double porcentajeReprobados = (reprobados * 100.0) / n;
        double promedioGlobal = sumaNotasFinales / n;

        cout << "Porcentaje de Alumnos Aprobados: " << porcentajeAprobados << "%" << endl;
        cout << "Porcentaje de Alumnos Reprobados: " << porcentajeReprobados << "%" << endl;
        cout << "Promedio de Notas Finales: " << promedioGlobal << endl;
    } else {
        cout << "No se registraron estudiantes." << endl;
    }

    return 0;
}
