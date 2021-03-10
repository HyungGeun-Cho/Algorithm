#include <stdio.h>
#include <algorithm>

using namespace std;


struct Person{
	
	int age;
	char name[101];
	
};

bool compare(Person const &a, Person const &b) {
    return a.age < b.age;
}    

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	Person a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i].age);
		scanf("%s", a[i].name);
	}
	
	stable_sort(a, a+n, compare);
	
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i].age);
		printf("%s\n", a[i].name);
	}
	
	return 0;
	
}