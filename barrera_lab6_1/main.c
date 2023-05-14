#include <stdio.h>
#include <stdlib.h>

/******
Author: Alyana Barrera
Assignment: Lab 6 Problem 1
Due date: February 20th

Overview: This lab will ask user for magnitude of an earthquake based on Richer Scale and will print out
the effects of earthquake depending on strength of earthquake. Code will use if else if statements to
determine these side effects for the inputed magnitude.

Known Issues:
None
*******/

void characterize_earthquake(double magnitude);

int main(void)
{
	double magnitude;

	//get the magnitude of the earthquake from the user
	printf("Please enter the magnitude of the earthquake: ");
	scanf("%lf", &magnitude);

	//call the characterize earthquake function here
	characterize_earthquake(magnitude);

    printf("\nProgram written by Alyana Barrera.\n");
	return 0;
}


/**********************************************************************************
This function displays the effects of an earthquake based on the Richer Scale
Input parameters:  magnitude is a value between 1 and 10
Return:  none
**********************************************************************************/
void characterize_earthquake(double magnitude)
{
    //if else statements below to determine range of scale to print out effects of earthquake
    if (magnitude > 1.0 && magnitude < 1.9)
    {
        printf("\nMicroearthquakes, not felt, or felt rarely.\nRecorded by seismographs.\n");
    }
    else if (magnitude < 3.9)
    {
        printf("\nFelt slightly by some people.\nNo damage to buildings.\nOften felt by people, but very rarely causes damage.\nShaking of indoor objects can be noticeable.\n");
    }
    else if (magnitude < 4.9)
    {
        printf("\nNoticeable shaking of indoor objects and rattling noises.\nFelt by most people in the affected area.\nSlightly felt outside.\nGenerally causes zero to minimal damage.\nModerate to significant damage very unlikely.\nSome objects may fall off shelves or be knocked over.\n");
    }
    else if (magnitude < 5.9)
    {
        printf("\nCan cause damage of varying severity to poorly constructed buildings.\nZero to slight damage to all other buildings. Felt by everyone.\n");
    }
    else if (magnitude < 6.9)
    {
        printf("\nDamage to a moderate number of well-built structures in populated areas.\nEarthquake-resistant structures survive with slight to moderate damage.\nPoorly designed structures receive moderate to severe damage.\nFelt in wider areas; up to hundreds of miles/kilometers from the epicenter.\nStrong to violent shaking in epicentral area.\n");
    }
    else if (magnitude < 7.9)
    {
        printf("\nCauses damage to most buildings, some to partially or completely collapse or receive severe damage.\nWell-designed structures are likely to receive damage.\nFelt across great distances with major damage mostly limited to 250 km from epicenter.\n");
    }
    else
    {
        printf("\nMajor damage to buildings, structures likely to be destroyed.\nWill cause moderate to heavy damage to sturdy or earthquake-resistant buildings.\nDamaging in large areas.\nFelt in extremely large regions.\nAt or near total destruction, severe damage or collapse to all buildings.\nHeavy damage and shaking extends to distant locations.\nPermanent changes in ground topography.\n");
    }
}

