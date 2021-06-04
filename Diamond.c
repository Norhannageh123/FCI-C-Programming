#include <stdio.h>
#include <stdlib.h>
int main(){
int hours_worked=0,weekly_hours=40;
float overpayrate=1.5;
scanf("%d",&hours_worked);
while(hours_worked !=-1){
    float hourlyRate;
    scanf("%d",hourlyRate);
    int overpaytime=hours_worked-weekly_hours;
    if(overpaytime<0){
        overpaytime=0;
    }
    int straightTime = hours_worked - overpaytime;

		float salary = (straightTime * hourlyRate) + (overpaytime * (hourlyRate * overpayrate));

		printf("2f\n", salary);
		scanf("%d", &hours_worked);
}
}

