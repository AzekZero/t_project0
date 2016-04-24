/****************************************************/
/* CS133uSp16 Assignmen 4 Track 2- Due 4/27/2016	*/
/* William Lu 										*/
/****************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//loops - parameters
int loop_program;
int loop_zodiacyear;

//loops - inputs
char loop_program_input[64];
char loop_zodiacyear_input[64];

//static data
int zodiacyear_cutoff = 1900;

//user data - input arrays
int zodiacyear;
int temp_zodiacyear;
int zodiacyear_rem;


//user data - converted
char zodiacyear_input[64];

int main() {

	printf("Welcome to the Zodiac Year Information Tool\n");

	while (loop_program == 0) 
	{
		loop_program++;
		printf("Please enter a year after 1899. (Pre-1900 dates will not be accepted.): ");
		fgets(zodiacyear_input, 64, stdin);
		sscanf_s(zodiacyear_input, "%d", &zodiacyear);
		if (zodiacyear > 1899) 
		{
			temp_zodiacyear = (zodiacyear - 1900);
			zodiacyear_rem = temp_zodiacyear % 12;
			//printf("%d", zodiacyear_rem); //DEBUG
			switch (zodiacyear_rem) 
			{
			case 0:
				printf("%d is the Year of the Rat!\n", zodiacyear);
				break;
			case 1:
				printf("%d is the Year of the Ox!\n", zodiacyear);
				break;
			case 2:
				printf("%d is the Year of the Tiger!\n", zodiacyear);
				break;
			case 3:
				printf("%d is the Year of the Rabbit!\n", zodiacyear);
				break;
			case 4:
				printf("%d is the Year of the Dragon!\n", zodiacyear);
				break;
			case 5:
				printf("%d is the Year of the Snake!\n", zodiacyear);
				break;
			case 6:
				printf("%d is the Year of the Horse!\n", zodiacyear);
				break;
			case 7:
				printf("%d is the Year of the Sheep!\n", zodiacyear);
				break;
			case 8:
				printf("%d is the Year of the Monkey!\n", zodiacyear);
				break;
			case 9:
				printf("%d is the Year of the Rooster!\n", zodiacyear);
				break;
			case 10:
				printf("%d is the Year of the Dog!\n", zodiacyear);
				break;
			case 11:
				printf("%d is the Year of the Boar!\n", zodiacyear);
				break;
			}
		}
		else 
		{
			printf("Unaccepted input. ");
			loop_program = 0;
		}
		while (loop_program > 0)
		{
			printf("Do you want to try again?(y/n): ");
			fgets(loop_zodiacyear_input, 64, stdin);
			//sscanf_s(loop_zodiacyear_input, "%d", &loop_zodiacyear);
			switch (tolower(loop_zodiacyear_input[0])) 
			{
			case 'y':
				loop_program = 0;
				break;
			case 'n':
				printf("Thank you for using this program.");
				loop_program = -1;
				break;
			default:
				printf("Unaccepted input. ");
				break;
			}
		}
	}
	getchar();
	return 0;
}