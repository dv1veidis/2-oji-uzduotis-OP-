#ifndef FUNKCIJOS_H_FUNKCIJOS
#define FUNKCIJOS_H_FUNKCIJOS
#include "My_lib.h"
#include "Tikrinimai.cpp"
#include "Rezultatai.cpp"

string Rtikrinimas ();
int Sktikrinimas();
int Paztikrinimas();
bool filetikrinimas(int n);
void vidurkis(Studentas &studentas);
void mediana(Studentas &studentas);
bool compare(const Studentas &studentas1, const Studentas &studentas2);
auto Find (const Studentas &studentas);

#endif 