#include<stdio.h>
void star1();
void star2();
void star3();
void star4();
void star5();
void star6();
void star7();
void star8();
void star9();

void main()
{
star1();
star2();
star3();
star4();
star5();
star6();
star7();
star8();
star9();

}
void star1()
{int i,n;
printf("Enter the any no to print the vertical stars");

scanf("%d",&n);
for(i=1;i<=n;i++)
printf("*");
}

void star2()
{int i,n;
printf("Enter the any no to print the horizontal stars");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("*");
printf("\n");}
}

void star3()
{int i,n,k,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
{printf(" ");}
for(k=1;k<=i;k++)
{printf("*");}
printf("\n");
}
}

void star4()
{int i,n,k,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(i=n;i>=0;i--)
{for(j=1;j<=n-i;j++)
{printf(" ");}
for(k=1;k<=i;k++)
{printf("*");}
printf("\n");
}
}

void star5()
{int i,n,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(j=1;j<=n;j++)
{for(i=1;i<=j;i++)
{printf("*");}
printf("\n");
}
}

void star6()
{int i,n,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(j=1;j<=n;j++)
{for(i=n;i>=j;i--)
{printf("*");}
printf("\n");
}
}

void star7()
{int i,n,k,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
{printf(" ");}
for(k=1;k<=2*i-1;k++)
{printf("*");}
printf("\n");
}
}

void star8()
{int i,n,k,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(i=n;i>=1;i--)
{for(j=1;j<=n-i;j++)
{printf(" ");}
for(k=1;k<=2*i-1;k++)
{printf("*");}
printf("\n");
}
}


void star9()
{int i,n,k,j;
printf("Enter the any no to print the stars");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
for(i=n-1;i>=1;i--)
{for(j=1;j<=n-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
}