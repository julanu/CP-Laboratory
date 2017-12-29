/*
Author:  Jula  Marius
Date:  3/12/2017
Description:  Read  from  the  keyboard  the  elements  of  an  m  x  n  integer  matrix.
If  the  matrix  is  square,  display  the  elements  from  the  secondary  diagonal.  If  not,  print  the  sum  of  all
the  elements  from  a  certain  column,  c.
*/

#define  _CRT_SECURE_NO_WARNINGS

#include  <stdio.h>
#include  <conio.h>

#define  ROWS  25
#define  COLS  25

void  readMatrix(int *, int, int);
int  sumColumn(int *, int, int);
void  secondDiag(int *, int, int);

void  main(void)
{
	int  tab[ROWS][COLS], n, m, col, *pt;
	pt = &tab[0][0];
	printf("\nPlease  enter  the  dimensions  of  the  matrix:  ");
	scanf("%d%d", &n, &m);

	readMatrix(pt, n, m);

	if (n != m)
	{
		printf("\nPlease  enter  the  column:  ");
		scanf("%d", &col);
		printf("\nThe  sum  of  the  elems  of  the  column  %d  is  %d", col, sumColumn(pt, n, col));
	}
	else
		secondDiag(pt, n, m);

	_getch();
}

/*  function  to  read  an  NxM  matrix*/
void  readMatrix(int  *tab, int  n, int  m)
{
	int  i, j, *pt;
	pt = tab;
	printf("\nPlease  enter  the  elements  of  the  matrix:\n");
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("tab[%d][%d]:  ", i, j);
			scanf("%d", (pt + i*n + j));
		}
}

/*  function  to  sum  all  the  elements  from  a  column  C*/
int  sumColumn(int  *tab, int  n, int  c)
{
	int  i, sum, *pt;
	sum = 0;
	pt = tab;
	for (i = 0; i < n; i++)
		sum += *(pt + i*n + c);

	return  sum;
}

void  secondDiag(int  *tab, int  n, int  m)
{
	int  i, j, *pt;
	pt = tab;
	printf("\nThe  elements  from  the  second  diagonal  are:  \n");

		for (j = 0; j < m; j++)
		{
			printf("%d  ", *(pt + j * m + (m - j - 1)));
		}
}
