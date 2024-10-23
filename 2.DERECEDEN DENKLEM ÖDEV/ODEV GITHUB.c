
// ÝKÝNCÝ DERECEDEN BÝR DENKLEMÝN KÖKLERÝNÝ BULAN YAZILIMSAL KOD

#include<stdio.h>
void main(){
	
	float x1,x2;
	int a,b,c,delta;
	printf("*****2.DERECEDEN DENKLEMIN KOKUNU BULMA*****\n\n");
	//ilk olarak a , b ve c deðerlerini kullanýcýdan girilmesi istenir.
	printf("a nin degerini giriniz:");  scanf("%d",&a);
	// while döngü içindir.Yazacaðýmýz denklemin ikinci dereceden olabilmesi için a deðerinin 0 olmamasý gerekir.Bu sebeple a=0 girildiði durumda while parametresiyle a deðri tekrar istenmektedir .
	while (a == 0) {
    printf("Lutfen sifirdan baska deger giriniz:");
    scanf("%d", &a);
}
	printf("b nin degerini giriniz:");  scanf("%d",&b);
	printf("c nin degerini giriniz:");  scanf("%d",&c);
	
	//daha sonra kullanacaðýmýz delta fonksiyonu tanýmlanýr.(delta==b^2 - 4*a*c)[c dilinde üs göstermek için ^ yerine "pow" parametresi yazýlýp parantez içine "," ile kaçýncý üs alýnacaðý belirtilir.]
	 
	delta = pow(b,2) - 4*a*c;
	
	//delta da tanýmlandýktan sonra yazýlacak denklemin x1 ve x2 kökü tanýmlanýr.(kök bulma -b/(2*a)) ["sqrt" parametresi karekök almk içi kullanýlýr.]
	
	x1=(-b + sqrt(delta))/(2*a);
	x2=(-b - sqrt(delta))/(2*a);
	
	//son olarak karar mekanizmasýna geçilir.
	
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
