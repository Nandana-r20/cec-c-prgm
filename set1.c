#include<stdio.h>
void main()
{
 int i,n;
 int u[n];
 int A[n];
 int B[n];
 int uni[n],ints[n],diffA[n],diffB[n],compA[n],compB[n];
 printf("\n");
 printf(" \n enter limit");
 scanf("%d",&n);
 printf(" \n enter universal set elements");
 for(i=0;i<n;i++)
 {

 	scanf("%d",& u[i]);	
 }
 printf(" \n enter set A elements");
 for(i=0;i<n;i++)
 {

 	scanf("%d",& A[i]);	
 }
 printf(" \n enter set B elements");
 for(i=0;i<n;i++)
 {

 	scanf("%d",&B[i]);	
 }
 
 printf("\n---UNIVERSAL SET---\n \n universal set= {");
 for(i=0;i<n;i++)
 {

 	printf(" %d ",u[i]);	
 }
 printf("} \n");
  printf(" \n");
  
 printf("\n set A= {");
 for(i=0;i<n;i++)
 {
 	if(A[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
 
 printf("\n set B= {");
 for(i=0;i<n;i++)
 {
 	if(B[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
 
 printf("\n Union of A and B in set { ");
 for(i=0;i<n;i++)
 {
 	uni[i]=A[i]|B[i];
 	printf(" %d ",uni[i]);
 }
 printf("}\n");
 
 printf("\n AUB= {");
 for(i=0;i<n;i++)
 {
 	if(uni[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
 
 printf("\n intersection of A and B in set { ");
 for(i=0;i<n;i++)
 {
 	ints[i]=A[i] & B[i];
 	printf(" %d ",ints[i]);
 }
 printf("} \n");
 
 printf("\n A & B= {");
 for(i=0;i<n;i++)
 {
 	if(ints[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
 printf(" \n");
 
 printf("\n A compliment in set {");
 for(i=0;i<n;i++)
 {
 	compA[i]= 1-A[i];
 	printf(" %d ",A[i]);
 }
 printf("} \n");
 
 printf("\n A`= {");
 for(i=0;i<n;i++)
 {
 	if(compA[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
 
 printf("\n B compliment = {");
 for(i=0;i<n;i++)
 {
 	compB[i]= 1-B[i];
 	printf(" %d ",B[i]);
 }
 printf("} \n");
 
 printf("\n B`= {");
 for(i=0;i<n;i++)
 {
 	if(compB[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
 
 printf("\n Difference of A & B = {");
 for(i=0;i<n;i++)
 {
 	diffA[i]= A[i]&compB[i];
 	printf(" %d ",diffA[i]);
 }
 printf("} \n");
 
 printf("\n A-B = {");
 for(i=0;i<n;i++)
 {
 	if(diffA[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
 
 printf("\n Difference of B & A = {");
 for(i=0;i<n;i++)
 {
 	diffB[i]= B[i]&compA[i];
 	printf(" %d ",diffB[i]);
 }
 printf("} \n");
 
 printf("\n B-A = {");
 for(i=0;i<n;i++)
 {
 	if(diffB[i]==1)
 	printf(" %d ",u[i]);
 }
 printf("} \n");
  printf(" \n");
}
