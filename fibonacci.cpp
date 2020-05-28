#include <stdio.h>
#include <stdlib.h>
main()
{
	int ilksayi=1;
    int	ikincisayi=2;
	int i;
	printf("%d\n",ilksayi,ikincisayi);
	for(i=0;i<3;i++){
		ilksayi=ilksayi+ikincisayi;
		ikincisayi=ilksayi+ikincisayi;
		printf("%d\n%d\n",ilksayi,ikincisayi);
	}
	return 0;
}
