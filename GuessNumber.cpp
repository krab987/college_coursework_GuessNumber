#include <stdio.h>   // ����� ������������ �������� printf
#include <stdlib.h>  // ����� ������������ �������� rand
#include <locale.h> // ���������� �����


int main(){

	setlocale(LC_ALL, "Rus");
	
	printf("��� ������������ ���� ������ �����\n��� �� ������� �������� ���� ������� ��������� 3-� �������� ����� �� ����� ���� � ����������� ��� � �������� �����������\n����� ����: ������� ��������, ������� 24 ������\n\n");
		system("pause");

	int i, j, w, a, b, c, d,  t, popit, p,
	count1=0, count2=0, count3=0, count4=0, 
	A[ 10 ] = { 0 }, B[ 10 ] = { 0 }, A1[ 10 ] = { 0 }, B1[ 10 ] = { 0 } ;
	

	
	printf("���� � ����������� 1 , � ��������� - 2\n");
	scanf("%d", &w);while(w>2 )scanf("%d", &w); 
	


	
	if(w==1){	
	
		printf("������� �������� ���������� �������\n");
	scanf("%d",&popit);

		for(p=1;p<=popit;p++){
			
	b= 100 + rand()%(999-100+1);//A + rand()%(B-A+1) [A;B]
//	printf("��������� ����� %d\n", b);

	printf("�������� �����(������� 3-� ������� �����)\n"); 
	scanf("%d",&a); while(a< 100 || a>=1000)scanf("%d",&a);// ��� ����� ��� ���
	printf ("-----------------\n ������ ��������� ��������� �� �������...\n");
	printf("��� �������: %d\n", a);

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
for ( j = 0; j < 10; j++ )printf( "� ����� 1 ����� %d: %d\n", j, B[ j ]);
printf("----------\n");
for ( i = 0; i < 10; i++ )printf( "� ����� 2 ����� %d: %d\n", i, A[ i ]);
*/		
	for ( t = 0; t < 10; t++ ){
		
		if(A[t]>B[t] && A[t]!=0 && B[t]!=0) count1=count1+B[t]; 	
		if(A[t]<=B[t] && A[t]!=0 && B[t]!=0) count1=count1+A[t]; 	
							
	}
	
	printf("����� ���������� %d\n",count1);     
	printf("�� ����� ������ %d\n", count2);
	if(count2==3) printf("�� ��������!");
		}
}



if(w==2){
	printf("����� 1 ������� �����\n");
	scanf("%d",&b); while(b< 100 || b>=1000)scanf("%d",&b);// ��� ����� ��� ���
	printf("����� 2 �������� ����� �����\n");
	scanf("%d",&a); while(a< 100 || a>=1000)scanf("%d",&a);// ��� ����� ��� ���	
	printf ("-----------------\n ������ ��������� ��������� ����� 2 ������...\n");
	
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
for ( j = 0; j < 10; j++ )printf( "� ����� 1 ����� %d: %d\n", j, B[ j ]);
printf("----------\n");
for ( i = 0; i < 10; i++ )printf( "� ����� 2 ����� %d: %d\n", i, A[ i ]);
*/		
	for ( t = 0; t < 10; t++ ){
		
		if(A[t]>B[t] && A[t]!=0 && B[t]!=0) count1=count1+B[t]; 	
		if(A[t]<=B[t] && A[t]!=0 && B[t]!=0) count1=count1+A[t]; 	
							
	}
	
	printf("����� ���������� %d\n",count1);     
	printf("�� ����� ������ %d\n", count2);
	if(count2==3) printf(" ����� 2 �������!\n");
	
printf("-------------------\n");	
printf("������ ��������\n");	
	
	printf("����� 2 ������� �����\n");
	scanf("%d",&b); while(b< 100 || b>=1000)scanf("%d",&b);// ��� ����� ��� ���
	printf("����� 1 �������� ����� �����\n");
	scanf("%d",&a); while(a< 100 || a>=1000)scanf("%d",&a);// ��� ����� ��� ���	
	printf ("-----------------\n ������ ��������� ��������� ����� 1 ������...\n");
	
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
for ( j = 0; j < 10; j++ )printf( "� ����� 1 ����� %d: %d\n", j, B1[ j ]);
printf("----------\n");
for ( i = 0; i < 10; i++ )printf( "� ����� 2 ����� %d: %d\n", i, A1[ i ]);
*/		
	for ( t = 0; t < 10; t++ ){
		
		if(A1[t]>B1[t] && A1[t]!=0 && B1[t]!=0) count3=count3+B1[t]; 	
		if(A1[t]<=B1[t] && A1[t]!=0 && B1[t]!=0) count3=count3+A1[t]; 	
							
	}
	
	printf("����� ���������� %d\n",count3);     
	printf("�� ����� ������ %d\n", count4);
	if(count4==3) printf(" ����� 1 �������!\n");
}	


return 0;
}





/*
	printf("������� �����\n");
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

}	printf("����� ����� %d\n", count);
*/
	
					//���� ���� ����

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
	
	   


 				//���� ���� ����
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
	
	   
	printf("����� ���������� %d\n",count3);     		
	printf("�����  �� ����� ������? %d\n", count4);
	
 				//���� ���� ����
	
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
	
	   
	printf("����� ���������� %d\n",count5);     
	printf("�����  �� ����� ������? %d\n", count6);
		*/
