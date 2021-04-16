#include "stabbinglines.h"

Line linesArray[0];

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){
    inPutLineFile.open("Lines.txt");
    //Read coordinate value
    for( int i=0; i<numLines; i++){
        inPutLineFile >> linesArray[i].Lid >> linesArray[i].A >> linesArray[i].B;
        }
        for (int i=0;i<numLines;i++){
            cout << linesArray[i].Lid << linesArray[i].A << linesArray[i].B << endl;
            }};
