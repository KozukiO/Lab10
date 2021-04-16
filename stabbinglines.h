#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500

using namespace std ;
typedef int PointId ;
typedef int LineId ;


struct Point {
//Point is a point in 2-d space made up of to integers 
PointId Pid;
int x;
int y;
};


struct Line { 
// define a Line by its 2 End points
LineId Lid ; // Line Id
PointId A ; // first Point
PointId B; // second Point
};

ifstream infile;
int numLines = 5;
int numPoints = 8;
Line linesArray[0];
Point pointsArray[0];


void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints);

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines);

void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize);

void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines);


