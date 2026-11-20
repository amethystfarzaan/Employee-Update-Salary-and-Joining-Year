#include <stdio.h>
#include <string.h>

struct Date{
	int day, month, year;
};

struct Employee{
	int emp_id;
	char name[50];
	int salary;
	struct Date join_date;
};

void salary_update(struct Employee *e, int bonus){
	e->salary = e->salary + bonus;
}

void join_year(struct Employee *e, int new_year){
	e->join_date.year = new_year;
}

int main(){
	struct Employee e;
	int bonus, updated_year;
	
	printf("Enter the name of the employee: ");
	scanf(" %50[^\n]", e.name);
	
	printf("Enter the ID of the employee: ");
	scanf("%d", &e.emp_id);
	
	printf("Enter the salary of the employee: ");
	scanf("%d", &e.salary);
	
	printf("Enter the joining date of the employee: ");
	scanf("%d/%d/%d", &e.join_date.day, &e.join_date.month, &e.join_date.year);
	
	printf("\nEnter the bonus amount: ");
	scanf("%d", &bonus);
	
	printf("Enter the updated year for the employee: ");
	scanf("%d", &updated_year);
	
	salary_update(&e, bonus);
	join_year(&e, updated_year);
	
	printf("\nThe joining year of the employee has been updated to: %d\n", e.join_date.year);
	printf("The salary of the employee after bonus is: %d", e.salary);
	
	getchar();
}