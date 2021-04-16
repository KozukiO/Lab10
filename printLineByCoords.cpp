#include "stabbinglines.h"


void readPoints();
void readLines();

void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    readPoints(infile,pointsArray,100,numPoints);
    readLines(infile,linesArray,100,numLines);
    cout << "Line Id:" << linesArray[lid].A << endl;
    cout << "Point A:" << pointsArray[linesArray[lid].B].x << "," << pointsArray[linesArray[lid].B].y<< endl;
    cout <<"Point B:" << pointsArray[linesArray[lid].Lid].x << "," << pointsArray[linesArray[lid].Lid].y << endl;
};

