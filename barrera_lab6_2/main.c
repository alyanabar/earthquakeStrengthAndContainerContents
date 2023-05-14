#include <stdio.h>
#include <stdlib.h>

/******
Author: Alyana Barrera
Assignment: Lab 6 Problem 2
Due date: February 20th

Overview: This lab will print out contents of a container depending on the letter the user inputs.

Known Issues:
The if else statements may not be the most efficient
*******/

void report_container_contents_if(char color);
void report_container_contents_switch(char color);

int main(void)
{
	char color;

	printf("Enter the color of the container, as a single letter: ");
	scanf("%c", &color);

	report_container_contents_if(color);
	report_container_contents_switch(color);


    printf("\nProgram written by Alyana Barrera.\n");
	return 0;
}

/**********************************************************************************
This function displays the contents of a container based on the container's color:
  O (orange) is ammonia; b (brown) is carbon monoxide; y (yellow) is hydrogen;
  G (green) is oxygen.  All other letters indicate unknown color/unknown contents
Input parameters:  color Ð the color of the container
Return:  none
**********************************************************************************/
void report_container_contents_if(char color)
{
/* your code here; use the information in the comments above to write an if..else
if statement that will display the contents of the container based on its color.
Upper- or lowercase letters are valid; for colors other than o, b, y, or g indicate
"contents unknown."
*/

    //add if else statements and state for each letter capitalized and lower cased and print each output
    if (color == 'o' || color == 'O')
    {
        printf("Ammonia\n");
    }
    else if (color == 'b' || color == 'B')
    {
        printf("Carbon Monoxide\n");
    }
    else if (color == 'y' || color == 'Y')
    {
        printf("Hydrogen\n");
    }
    else if (color == 'g' || color == 'G')
    {
        printf("Oxygen\n");
    }
    else
    {
        printf("Contents unknown\n");
    }
}

/**********************************************************************************
This function displays the contents of a container based on the container's color:
  O (orange) is ammonia; b (brown) is carbon monoxide; y (yellow) is hydrogen;
  G (green) is oxygen.  All other letters indicate unknown color/unknown contents
Input parameters:  color Ð the color of the container
Return:  none
**********************************************************************************/
void report_container_contents_switch(char color)
{
/* your code here; use the information in the comments above to write a switch statement
that will display the contents of the container based on its color. Upper- or lowercase
letters are valid; for colors other than o, b, y, or g indicate "contents unknown."
*/

    //add switch statement and state cases for each letter capitalized and lower cased and print each output
    switch (color)
        {
            case 'o':
            case 'O':
                printf("Ammonia\n");
                break;
            case 'b':
            case 'B':
                printf("Carbon Monoxide\n");
                break;
            case 'y':
            case 'Y':
                printf("Hydrogen\n");
                break;
            case 'g':
            case 'G':
                printf("Oxygen\n");
                break;
            default:
                printf("Contents unknown\n");
    }
}
