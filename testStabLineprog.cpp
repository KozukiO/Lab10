#include "stabbinglines.h"


void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){
    inPutPointFile.open("Points.txt");
    //Read coordinate value
        for( int i=0; i<numPoints; i++){
            inPutPointFile >> pointsArray[i].Pid >> pointsArray[i].x >> pointsArray[i].y;
            }};



void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){
    inPutLineFile.open("Lines.txt");
    //Read coordinate value
    for( int i=0; i<numLines; i++){
        inPutLineFile >> linesArray[i].Lid >> linesArray[i].A >> linesArray[i].B;
        }};



void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    readPoints(infile,pointsArray,100,numPoints);
    readLines(infile,linesArray,100,numLines);
    cout << "Line Id:" << linesArray[lid].A << endl;
    cout << "Point A:" << pointsArray[linesArray[lid].B].x << "," << pointsArray[linesArray[lid].B].y<< endl;
    cout <<"Point B:" << pointsArray[linesArray[lid].Lid].x << "," << pointsArray[linesArray[lid].Lid].y << endl;
};



int main(){
    readPoints(infile,pointsArray,100,numPoints);
    readLines(infile,linesArray,100,numLines);
    for (int a=0;a<numLines;a++){
    printLineByCoords(a,linesArray,100,pointsArray,100);
    }
    }