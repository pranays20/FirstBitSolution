void main()
{
		//10. Winput marks of five subjects, find the total marks, and calculate the percentage.
	
	int m1 = 75, m2 = 82, m3 = 90, m4 = 68, m5 = 85;
	int total;
	float percentage;

	total = m1 + m2 + m3 + m4 + m5;
	percentage = (total / 5.0);

	printf("Total Marks = %d\n", total);
	printf("Percentage = %.2f%%\n", percentage);

}