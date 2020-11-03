/*************************************************************************
AIIT

Titel: Sudoku
Name: Koc Alican, Cristina Fantaza, Redzic Amar
Datum: 27.10.2020
Klasse: 3BHET

**************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
  printf("Sudoku: \n\nVersche dieses Sudoku zu loesen du kannst in die leeren\n");
  printf("felder die als 0 gekenzeichnet sind eine zahl eingeben\n\n");
  printf("Deine Eingegebene Zahl wird sofort ueberprueft\n\n");
  int i,j;
  int raster[9][9] = {
    {0,0,0,8,0,0,9,2,7},
    {0,0,0,0,0,0,0,0,0},
    {0,0,2,0,0,9,0,0,0},
    {7,0,8,5,3,0,0,4,0},
    {0,0,4,6,0,0,1,0,0},
    {0,0,0,4,1,7,0,0,3},
    {0,8,0,7,0,4,0,0,0},
    {9,0,5,3,0,0,0,6,0},
    {0,0,1,0,2,0,4,3,0}
  };
  for(i=0;i<9;i++)
  {
    for(j=0;j<9;j++)
    {
      printf("%d",raster[i][j]);
      if(j==8){
        printf("\n");
      }
    }
  }
  Anfang:
  printf("Gibt die erste Zahl ein: ");
  int num;
  scanf("%d",&num);
  raster[0][0]=num;
  if(num==1)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang;
  }
  Anfang1:
  printf("Gibt die zweite Zahl ein: ");
  scanf("%d",&num);
  raster[0][1]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang1;
  }
  Anfang2:
  printf("Gibt die dritte Zahl ein: ");
  scanf("%d",&num);
  raster[0][2]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang2;
  }
  Anfang3:
  printf("Gibt die fuenfte Zahl ein: ");
  scanf("%d",&num);
  raster[0][4]=num;
  if(num==4)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang3;
  }
  Anfang4:
  printf("Gibt die sechste Zahl ein: ");
  scanf("%d",&num);
  raster[0][5]=num;
  if(num==3)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang4;
  }
  Anfang5:
  printf("Gibt die zehnte Zahl ein: ");
  scanf("%d",&num);
  raster[1][0]=num;
  if(num==8)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang5;
  }
  Anfang6:
  printf("Gibt die 11. Zahl ein: ");
  scanf("%d",&num);
  raster[1][1]=num;
  if(num==9)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang6;
  }
  Anfang7:
  printf("Gibt die 12. Zahl ein: ");
  scanf("%d",&num);
  raster[1][2]=num;
  if(num==7)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang7;
  }
  Anfang8:
  printf("Gibt die 13. Zahl ein: ");
  scanf("%d",&num);
  raster[1][3]=num;
  if(num==2)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang8;
  }
  Anfang9:
  printf("Gibt die 14. Zahl ein: ");
  scanf("%d",&num);
  raster[1][4]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang9;
  }
  Anfang10:
  printf("Gibt die 15. Zahl ein: ");
  scanf("%d",&num);
  raster[1][5]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang10;
  }
  Anfang11:
  printf("Gibt die 15. Zahl ein: ");
  scanf("%d",&num);
  raster[1][6]=num;
  if(num==3)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang11;
  }
  Anfang12:
  printf("Gibt die 16. Zahl ein: ");
  scanf("%d",&num);
  raster[1][7]=num;
  if(num==1)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang12;
  }
  Anfang13:
  printf("Gibt die 17. Zahl ein: ");
  scanf("%d",&num);
  raster[1][8]=num;
  if(num==4)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang13;
  }
  Anfang14:
  printf("Gibt die 18. Zahl ein: ");
  scanf("%d",&num);
  raster[2][0]=num;
  if(num==4)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang14;
  }
  Anfang15:
  printf("Gibt die 19. Zahl ein: ");
  scanf("%d",&num);
  raster[2][1]=num;
  if(num==3)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang15;
  }
  Anfang16:
  printf("Gibt die 20. Zahl ein: ");
  scanf("%d",&num);
  raster[2][3]=num;
  if(num==1)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang16;
  }
  Anfang17:
  printf("Gibt die 21. Zahl ein: ");
  scanf("%d",&num);
  raster[2][4]=num;
  if(num==7)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang17;
  }
  Anfang18:
  printf("Gibt die 22. Zahl ein: ");
  scanf("%d",&num);
  raster[2][6]=num;
  if(num==8)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang18;
  }
  Anfang19:
  printf("Gibt die 23. Zahl ein: ");
  scanf("%d",&num);
  raster[2][7]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang19;
  }
  Anfang20:
  printf("Gibt die 24. Zahl ein: ");
  scanf("%d",&num);
  raster[2][8]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang20;
  }
  Anfang21:
  printf("Gibt die 25. Zahl ein: ");
  scanf("%d",&num);
  raster[3][1]=num;
  if(num==1)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang21;
  }
  Anfang22:
  printf("Gibt die 26. Zahl ein: ");
  scanf("%d",&num);
  raster[3][5]=num;
  if(num==2)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang22;
  }
  Anfang23:
  printf("Gibt die 27. Zahl ein: ");
  scanf("%d",&num);
  raster[3][6]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang23;
  }
  Anfang24:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[3][8]=num;
  if(num==9)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang24;
  }
  Anfang25:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[4][0]=num;
  if(num==3)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang25;
  }
  Anfang26:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[4][1]=num;
  if(num==2)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang26;
  }
  Anfang27:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[4][4]=num;
  if(num==9)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang27;
  }
  Anfang28:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[4][5]=num;
  if(num==8)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang28;
  }
  Anfang29:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[4][7]=num;
  if(num==7)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang29;
  }
  Anfang30:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[4][8]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang30;
  }
  Anfang31:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[5][0]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang31;
  }
  Anfang32:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[5][1]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang32;
  }
  Anfang33:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[5][2]=num;
  if(num==9)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang33;
  }
  Anfang34:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[5][6]=num;
  if(num==2)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang34;
  }
  Anfang35:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[5][7]=num;
  if(num==8)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang35;
  }
  Anfang55:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[5][8]=num;
  if(num==3)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang55;
  }
  Anfang36:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[6][0]=num;
  if(num==2)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang36;
  }
  Anfang37:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[6][2]=num;
  if(num==3)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang37;
  }
  Anfang38:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[6][4]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang38;
  }
  Anfang39:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[6][6]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang39;
  }
  Anfang40:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[6][7]=num;
  if(num==9)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang40;
  }
  Anfang42:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[6][8]=num;
  if(num==1)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang42;
  }
  Anfang44:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[7][1]=num;
  if(num==4)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang44;
  }
  Anfang45:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[7][4]=num;
  if(num==8)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang45;
  }
  Anfang46:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[7][5]=num;
  if(num==1)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang46;
  }
  Anfang47:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[7][6]=num;
  if(num==7)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang47;
  }
  Anfang48:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[7][8]=num;
  if(num==2)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang48;
  }
  Anfang49:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[8][0]=num;
  if(num==6)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang49;
  }
  Anfang50:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[8][1]=num;
  if(num==7)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang50;
  }
  Anfang51:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[8][3]=num;
  if(num==9)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang51;
  }
  Anfang52:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[8][5]=num;
  if(num==5)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang52;
  }
  Anfang53:
  printf("Gibt die 28. Zahl ein: ");
  scanf("%d",&num);
  raster[8][8]=num;
  if(num==8)
    {
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        printf("%d",raster[i][j]);
        if(j==8){
          printf("\n");
        }
      }
    }
  }
  else
  {
    printf("flasche eingabe\n");
    goto Anfang53;
  }


  printf("Glückwunsch du hast das Sudoku-Rätsel gelöst");
}
