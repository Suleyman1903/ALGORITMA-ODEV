
// �K�NC� DERECEDEN B�R DENKLEM�N K�KLER�N� BULAN YAZILIMSAL KOD

#include<stdio.h>
void main(){
	
	float x1,x2;
	int a,b,c,delta;
	printf("*****2.DERECEDEN DENKLEMIN KOKUNU BULMA*****\n\n");
	//ilk olarak a , b ve c de�erlerini kullan�c�dan girilmesi istenir.
	printf("a nin degerini giriniz:");  scanf("%d",&a);
	// while d�ng� i�indir.Yazaca��m�z denklemin ikinci dereceden olabilmesi i�in a de�erinin 0 olmamas� gerekir.Bu sebeple a=0 girildi�i durumda while parametresiyle a de�ri tekrar istenmektedir .
	while (a == 0) {
    printf("Lutfen sifirdan baska deger giriniz:");
    scanf("%d", &a);
}
	printf("b nin degerini giriniz:");  scanf("%d",&b);
	printf("c nin degerini giriniz:");  scanf("%d",&c);
	
	//daha sonra kullanaca��m�z delta fonksiyonu tan�mlan�r.(delta==b^2 - 4*a*c)[c dilinde �s g�stermek i�in ^ yerine "pow" parametresi yaz�l�p parantez i�ine "," ile ka��nc� �s al�naca�� belirtilir.]
	 
	delta = pow(b,2) - 4*a*c;
	
	//delta da tan�mland�ktan sonra yaz�lacak denklemin x1 ve x2 k�k� tan�mlan�r.(k�k bulma -b/(2*a)) ["sqrt" parametresi karek�k almk i�i kullan�l�r.]
	
	x1=(-b + sqrt(delta))/(2*a);
	x2=(-b - sqrt(delta))/(2*a);
	
	//son olarak karar mekanizmas�na ge�ilir.
	
	if (delta < 0)
		printf("\nDenklemin reel koku yoktur");
		
	else if (delta==0)
	{
		printf("\nDenklemin kokleri esittir\n\n");
		printf("X1 = X2 = %.2f",x1);
		
	}
	
	else 
	{
		printf("\n 1. KOK ---->>>> X1: %.2f\n",x1);
		printf("\n 2. KOK ---->>>> X2: %.2f\n",x2);
		
		
	}
	
	printf("\n\n********************************************");
	
	
	
}
