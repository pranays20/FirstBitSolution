void main()
{
	//7.convert given minutes into hours and remaining minutes.
		
	int totalMinutes = 130;  
	int hours, minutes;

	hours = totalMinutes / 60;
	minutes = totalMinutes % 60;

	printf("Hours = %d, Minutes = %d\n", hours, minutes);
}