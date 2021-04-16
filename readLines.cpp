#include "stabbinglines.h"

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){
    inPutLineFile.open("Lines.txt");
    //Read coordinate value
    for( int i=0; i<numLines; i++){
        inPutLineFile >> linesArray[i].Lid >> linesArray[i].A >> linesArray[i].B;
        }
  };
