#include "stabbinglines.h"

void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){
    inPutPointFile.open("Points.txt");
    //Read coordinate value
        for( int i=0; i<numPoints; i++){
            inPutPointFile >> pointsArray[i].Pid >> pointsArray[i].x >> pointsArray[i].y;
            }
            for (int i=0;i<numPoints;i++){
                cout << pointsArray[i].Pid << pointsArray[i].x << pointsArray[i].y << endl;
        }};

