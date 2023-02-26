# include <stdio.h>
struct student_details
{
	char name[10];
	int age;
	int date,month,year;
	float GPA;
};
int main()
{
	struct student_details s;
	printf("Enter Student Details\n");
	printf("Enter name: ");
	scanf("%s",s.name);
	printf("Enter Age: ");
	scanf("%d",s.age);
	printf("Enter DOB(dd/mm/yyyy): ");
	scanf("%d",s.date);
	scanf("%d",s.month);
	scanf("%d",s.year);
	printf("Enter your GPA: ");
	scanf("%.1f",s.GPA);
	printf("Name=%s",s.name);
	printf("Age=%d",s.age);
	printf("DOB=%d/%d/%d",s.date,s.month,s.year);
	printf("GPA=%.1F",s.GPA);
	
}
