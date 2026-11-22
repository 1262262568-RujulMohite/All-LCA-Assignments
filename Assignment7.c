#include <stdio.h>

struct Sample
{ 
int sampleID;
char sampleType[30];
float initialMass;
float finalMass;
float percentageChange;
};

int main()
{ struct Sample s[100];
  int n, i;
  printf("Enter number of samples: ");
  scanf("%d", &n);
  
  for(i=0; i < n; i++)
  {
  printf("\n Enter details of sample: %d \n", i+1);
  printf("Enter Sample ID: ");
  scanf("%d", &s[i].sampleID);
  
  printf("Enter Sample Type: ");
  scanf("%29s", s[i].sampleType);
  
  printf("Enter Initial Mass: ");
  scanf("%f", &s[i].initialMass);
  
   printf("Enter Final Mass: ");
  scanf("%f", &s[i].finalMass);
  
  s[i].percentageChange = ((s[i].finalMass - s[i].initialMass) / s[i].initialMass)*100;
  
  }
  
  printf("\n----------Bioengineering Sample Report-----------\n");
  
  for(i=0; i < n; i++)
  { printf("\n Sample ID: %d", s[i].sampleID);
  printf("\n Sample Type: %s", s[i].sampleType);
  printf("\n Initial Mass: %.2f", s[i].initialMass);
  printf("\n Final Mass: %.2f", s[i].finalMass);
  printf("\n Percentage Mass Change: %.2f\n", s[i].percentageChange);
  } return 0;
  }
