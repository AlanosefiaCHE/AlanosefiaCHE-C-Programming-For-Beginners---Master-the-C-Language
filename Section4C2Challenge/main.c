#include <stdio.h>


double perimeterCalc(double height , double width){
return (height+width)*2;
};

double areaCalc(double height , double width){
return height*width;
};

int main(int argc, char **argv)
{
	// Dit is sectie 5.2
	struct rectangle {
	double width;
	double height;
	double perimeter;
	double area;
	};
		
	struct rectangle newRec;
	
	newRec.height = 10.50;
	newRec.width = 20.50;
	newRec.perimeter = perimeterCalc(newRec.height,newRec.width);
	newRec.area = areaCalc(newRec.height,newRec.width);
	
	printf("The height is:%0.2f\n", newRec.height);
	printf("The width is:%0.2f\n", newRec.width);
	printf("The perimeter is:%0.2f\n", newRec.perimeter);
	printf("The area is:%0.2f\n",newRec.area);

	return 0;
}

