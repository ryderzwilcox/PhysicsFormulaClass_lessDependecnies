#include "Physics_World.h"
#include "GeoUtils.h"
#include "RunTimer.h"
#include "BinarySearchTree.h"

#define _USE_MATH_DEFINES

int main(int argc, char* argv[])
{
    //starting time do not edit code between solid comment lines
    //_________________________________________________________________________
    RunTimer timer(SECONDS);
    timer.start();
    //_________________________________________________________________________
    //add test code between starred areas
    //*************************************************************************
    //Forces::acceleration2masses(75.0, 12.0, 63.0, 38.0, true);
    Forces::tensionOnMultipleStrandsHangingObject(1.02, 60.0, 30.0 , true);


    //**********************************************************************    ***
    //Stopping timer and displaying the programs execution time
    //_________________________________________________________________________
    timer.stop();
    timer.display();
    //_________________________________________________________________________
    return EXIT_SUCCESS;

}
