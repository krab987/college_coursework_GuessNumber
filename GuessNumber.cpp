#include <stdio.h>   // чтобы пользоваться функцией printf
#include <stdlib.h>  // чтобы пользоваться функцией rand
#include <locale.h> // подключаем языки


int main(){

	setlocale(LC_ALL, "Rus");
	
	printf("Вас приветствует игра УГАДАЙ ЧИСЛО\nТут вы сможете испытать свое везение отгадывая 3-х цифровые числа во время игры с компьютером или с реальным противником\nАвтор игры: Виталий Палочкин, студент 24 группы\n\n");
		system("pause");

	int i, j, w, a, b, c, d,  t, popit, p,
	count1=0, count2=0, count3=0, count4=0, 
	A[ 10 ] = { 0 }, B[ 10 ] = { 0 }, A1[ 10 ] = { 0 }, B1[ 10 ] = { 0 } ;
	

	
	printf("Игра с компьютером 1 , с человеком - 2\n");
	scanf("%d", &w);while(w>2 )scanf("%d", &w); 
	


	
	if(w==1){	
	
		printf("Введите желаемое количество попыток\n");
	scanf("%d",&popit);

		for(p=1;p<=popit;p++){
			
	b= 100 + rand()%(999-100+1);//A + rand()%(B-A+1) [A;B]
//	printf("Рандомное число %d\n", b);

	printf("Угадайте число(Введите 3-х значное число)\n"); 
	scanf("%d",&a); while(a< 100 || a>=1000)scanf("%d",&a);// две палки это или
	printf ("-----------------\n Теперь посмотрим насколько вы угадали...\n");
	printf("Ваш вариант: %d\n", a);

		while ( b ) {
	  c=b % 10;
      d= a % 10;
      B[ c ]++;
      b /= 10;
	  A[ d ]++;
      a /= 10;
      
	if (c==d) count2++;
   } ;   	
 /*  
for ( j = 0; j < 10; j++ )printf( "В цифре 1 чисел %d: %d\n", j, B[ j ]);
printf("----------\n");
for ( i = 0; i < 10; i++ )printf( "В цифре 2 чисел %d: %d\n", i, A[ i ]);
*/		
	for ( t = 0; t < 10; t++ ){
		
		if(A[t]>B[t] && A[t]!=0 && B[t]!=0) count1=count1+B[t]; 	
		if(A[t]<=B[t] && A[t]!=0 && B[t]!=0) count1=count1+A[t]; 	
							
	}
	
	printf("Всего совпадений %d\n",count1);     
	printf("На своих местах %d\n", count2);
	if(count2==3) printf("Вы победили!");
		}
}



if(w==2){
	printf("Игрок 1 введите число\n");
	scanf("%d",&b); while(b< 100 || b>=1000)scanf("%d",&b);// две палки это или
	printf("Игрок 2 угадайте число число\n");
	scanf("%d",&a); while(a< 100 || a>=1000)scanf("%d",&a);// две палки это или	
	printf ("-----------------\n Теперь посмотрим насколько игрок 2 угадал...\n");
	
		while ( b ) {
	  c=b % 10;
      d= a % 10;
      B[ c ]++;
      b /= 10;
	  A[ d ]++;
      a /= 10;
      
	if (c==d) count2++;
   } ;   	
  /* 
for ( j = 0; j < 10; j++ )printf( "В цифре 1 чисел %d: %d\n", j, B[ j ]);
printf("----------\n");
for ( i = 0; i < 10; i++ )printf( "В цифре 2 чисел %d: %d\n", i, A[ i ]);
*/		
	for ( t = 0; t < 10; t++ ){
		
		if(A[t]>B[t] && A[t]!=0 && B[t]!=0) count1=count1+B[t]; 	
		if(A[t]<=B[t] && A[t]!=0 && B[t]!=0) count1=count1+A[t]; 	
							
	}
	
	printf("Всего совпадений %d\n",count1);     
	printf("На своих местах %d\n", count2);
	if(count2==3) printf(" Игрок 2 победил!\n");
	
printf("-------------------\n");	
printf("Теперь наоборот\n");	
	
	printf("Игрок 2 введите число\n");
	scanf("%d",&b); while(b< 100 || b>=1000)scanf("%d",&b);// две палки это или
	printf("Игрок 1 угадайте число число\n");
	scanf("%d",&a); while(a< 100 || a>=1000)scanf("%d",&a);// две палки это или	
	printf ("-----------------\n Теперь посмотрим насколько игрок 1 угадал...\n");
	
		while ( b ) {
	  c=b % 10;
      d= a % 10;
      B1[ c ]++;
      b /= 10;
	  A1[ d ]++;
      a /= 10;
      
	if (c==d) count4++;
   } ;   	
/*  
for ( j = 0; j < 10; j++ )printf( "В цифре 1 чисел %d: %d\n", j, B1[ j ]);
printf("----------\n");
for ( i = 0; i < 10; i++ )printf( "В цифре 2 чисел %d: %d\n", i, A1[ i ]);
*/		
	for ( t = 0; t < 10; t++ ){
		
		if(A1[t]>B1[t] && A1[t]!=0 && B1[t]!=0) count3=count3+B1[t]; 	
		if(A1[t]<=B1[t] && A1[t]!=0 && B1[t]!=0) count3=count3+A1[t]; 	
							
	}
	
	printf("Всего совпадений %d\n",count3);     
	printf("На своих местах %d\n", count4);
	if(count4==3) printf(" Игрок 1 победил!\n");
}	


return 0;
}





/*
	printf("Введите числа\n");
	scanf("%d", &a);
	scanf("%d", &b);
	while (a>0){
	c = a % 10;
	d = b % 10;
	a/=10;
	b/=10;
	if (c==d) count++;
	
	printf("%d\n",c);
	printf("%d\n",d);

}	printf("Скока нахуй %d\n", count);
*/
	
					//блок блок блок

/*	while(a>0){
	c = a % 10;
	a /= 10;
	d = b % 10;
    b/=10;
    
    if (c==d) count2++;
	}
	while(a){
	if (a % 10==b % 10) count2++;
	a /= 10;
	b/=10;
	}*/
	/*	for(i=0;i<10;i++)
    {
    if(A[i]!=0){
		A[j]=A[i];
		j++;
		}
 
    }
 //   for(i=0;i<6;i++)printf("A[%d] = %d\n",i,A[i]);


		if (A[0]==A[1]) count1++; 
		if (A[0]==A[3]) count1++;
		if (A[0]==A[5]) count1++;
		if (A[2]==A[1]) count1++;
		if (A[2]==A[3]) count1++;
		if (A[2]==A[5]) count1++;
		if (A[4]==A[1]) count1++;
		if (A[4]==A[3]) count1++;
		if (A[4]==A[5]) count1++;
	
	   


 				//блок блок блок
		while(a>0){
	c = a % 10;
	A[i]=c;
	i--;
	a /= 10;
	d = b % 10;
    A[i]=d;
	i--;
    b/=10;
	
	if (c==d) count4++;
	}

	for(i=0;i<10;i++)
    {
    if(A[i]!=0){
		A[j]=A[i];
		j++;
		}
 
    }
 //   for(i=0;i<6;i++)printf("A[%d] = %d\n",i,A[i]);


		if (A[0]==A[1]) count3++; 
		if (A[0]==A[3]) count3++;
		if (A[0]==A[5]) count3++;
		if (A[2]==A[1]) count3++;
		if (A[2]==A[3]) count3++; 
		if (A[2]==A[5]) count3++;
		if (A[4]==A[1]) count3++;
		if (A[4]==A[3]) count3++;
		if (A[4]==A[5]) count3++; 
	
	   
	printf("Всего совпадений %d\n",count3);     		
	printf("Скока  на своих местах? %d\n", count4);
	
 				//блок блок блок
	
			while(a>0){
	c = a % 10;
	A[i]=c;
	i--;
	a /= 10;
	d = b % 10;
    A[i]=d;
	i--;
    b/=10;
	
	if (c==d) count6++;
	}

	for(i=0;i<10;i++)
    {
    if(A[i]!=0){
		A[j]=A[i];
		j++;
		}
 
    }
//    for(i=0;i<6;i++)printf("A[%d] = %d\n",i,A[i]);


		if (A[0]==A[1]) count5++; 
		if (A[0]==A[3]) count5++;
		if (A[0]==A[5]) count5++;
		if (A[2]==A[1]) count5++;
		if (A[2]==A[3]) count5++;
		if (A[2]==A[5]) count5++;
		if (A[4]==A[1]) count5++;
		if (A[4]==A[3]) count5++;
		if (A[4]==A[5]) count5++;
	
	   
	printf("Всего совпадений %d\n",count5);     
	printf("Скока  на своих местах? %d\n", count6);
		*/
