#ifndef TUTOR_H
#define TUTOR_H
#include "Highway.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <map>

class Tutor
{
public:
Tutor(const Highway& h); //costruttore
void setTime(double secondsToAdd);
void printStatss() const;
void reset();

private:

consst Highway& highway;
double currentTime;

std::vector<Passage> allPassages; //memorizzazione passaggi letti dal file
size_t nextPassageIndex;

std::unordered_map<std::string, Passage> activeVehicles; //Targa -> Ultimo Passaggio

std::map<int, int> varcoCounts; 

long totalSanctions
double totalSpedSum
long speedMeasurementsCount;

void processPassage(const Passage& p);

};



#endif
