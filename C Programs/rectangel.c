#include <stdio.h>

	int main() {

		int w, l, a, p;

		printf("\t Enter the values of Length:");
		scanf("%d", &l);

		printf("\t Enter the values of Width:");
		scanf("%d", &w);

		a = (l * w);
		p = (2 * (l + w));

		printf("\t The Area is: Area %d \n\n", a);
		printf("\t The Perimeter is: Perimeter %d \n\n", p);

	return 0;

}
