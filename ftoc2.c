#include <stdio.h>
float convert(float far, float cel) {
	cel = (far-32)*0.5556;
	return cel;
}
void main(){
	float far, cel;
	printf("Please input farenheit: ");
	scanf("%f", &far);
	cel = convert(far, cel);
	printf("%.2f", far);
	printf(" F is ");
	printf("%.2f", cel);
	printf(" C \n");

}