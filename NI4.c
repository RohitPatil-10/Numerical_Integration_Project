#include<stdio.h>
#include<stdlib.h>
#include<math.h>	
	
			//functions

void sinx(double*ptr1)
{	
	*ptr1= sin(*ptr1);
	
}
void cosx(double*ptr1)
{
	*ptr1= cos(*ptr1);
}
void tanx(double*ptr1)
{	
	*ptr1= tan(*ptr1);
}

void cotx(double*ptr1)
{	
	*ptr1= 1/tan(*ptr1);
}

void secx(double*ptr1)
{	
	*ptr1= 1/cos(*ptr1);
}

void cosecx(double*ptr1)
{
	*ptr1= 1/sin(*ptr1);
}

void sinhx(double*ptr1)
{	
	*ptr1= sinh(*ptr1);
}

void coshx(double*ptr1)
{
	*ptr1= cosh(*ptr1);
}

void tanhx(double*ptr1)
{	
	*ptr1= tanh(*ptr1);
}

void cothx(double*ptr1)
{	
	*ptr1= 1/tanh(*ptr1);
}

void sechx(double*ptr1)
{	
	*ptr1= 1/cosh(*ptr1);
}

void cosechx(double*ptr1)
{	
	*ptr1= 1/sinh(*ptr1);
}
void sin1x(double*ptr1)
{	
	*ptr1=asin(*ptr1);
}
void cos1x(double*ptr1)
{
	*ptr1=acos(*ptr1);
}
void tan1x(double*ptr1)
{
	*ptr1=atan(*ptr1);
}
void cot1x(double*ptr1)
{*ptr1= 1/atan(*ptr1);
}
void sec1x(double*ptr1)
{
	*ptr1= 1/acos(*ptr1);
}
void cosec1x(double*ptr1)
{
	*ptr1= 1/asin(*ptr1);
}
void logx(double*ptr1)
{
	*ptr1= log10(*ptr1);
}
void lnx(double*ptr1)
{*ptr1= log(*ptr1);
}
void epowerofx(double*ptr1)
{
	*ptr1= exp(*ptr1);
}
void apowerofx(double*ptr1,int ptr3)
{
	*ptr1=pow(ptr3,*ptr1);
}


				//MENU FUNCTIONS

void trignometry(double*ptr1,double ptr2)
{	
	
	if(ptr2==1)
	{sinx(ptr1);
	}
	else if(ptr2==2)
	{cosx(ptr1);
	}
	else if(ptr2==3)
	{tanx(ptr1);
	}
	else if(ptr2==4)
	{cotx(ptr1);
	}
	else if(ptr2==5)
	{secx(ptr1);
	}
	else if(ptr2==6)
	{cosecx(ptr1);
	}
	else if(ptr2==7)
	{sinhx(ptr1);
	}
	else if(ptr2==8)
	{coshx(ptr1);
	}
	else if(ptr2==9)
	{tanhx(ptr1);
	}
	else if(ptr2==10)
	{cothx(ptr1);
	}
	else if(ptr2==11)
	{sechx(ptr1);
	}
	else if(ptr2==12)
	{cosechx(ptr1);
	}
	else
	{	printf("\n\tINVALID INPUT");
	}
}
void exponential(double*ptr1,double ptr2,int ptr3)
{		
		if( ptr2==1)
		{epowerofx(ptr1);
		}	
		else if(ptr2==2)
		{	
			apowerofx(ptr1,ptr3);
		}
		else
		{printf("\n\tINVALID INPUT");
		}
	
}
void algebraic(double*ptr1,double ptr2)
{		if( ptr2==1)
		{*ptr1=*ptr1;
		}	
		else if(ptr2==2)
		{*ptr1=*ptr1;
		}
		else if(ptr2==3)
		{*ptr1= 1/ *ptr1;
		}
		else
		{printf("\n\tINVALID INPUT");
		}
	
}
void logarithmic(double*ptr1,double ptr2)
{	
		if( ptr2==1)
		{logx(ptr1);
		}	
		else if(ptr2==2)
		{lnx(ptr1);
		}
		else
		{printf("\n\tINVALID INPUT");
		}
	
}
void inverse(double*ptr1,double ptr2)
{	
	int ch;
	//double *ptr=&z;
	/*printf("\n\tenter value of x:");
			scanf("%lf",&z);*/
	/*printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLWING"
		"\n\t1.sin^-1x()"
		"\n\t2.cos^-1x()"
		"\n\t3.tan^-1x()"
		"\n\t4.cot^-1x()"
		"\n\t5.sec^-1x()"
		"\n\t6.cosec^-1x()"
		"\n\tENTER YOUR CHOICE:");
	scanf("%d",&ch);*/
	if(ptr2==1)
	{sin1x(ptr1);
	}
	else if(ptr2==2)
	{cos1x(ptr1);
	}
	else if(ptr2==3)
	{tan1x(ptr1);
	}
	else if(ptr2==4)
	{cot1x(ptr1);
	}
	else if(ptr2==5)
	{sec1x(ptr1);
	}
	else if(ptr2==6)
	{cosec1x(ptr1);
	}
	else
	{	printf("\n\tINVALID INPUT");
	}
	
}




                    //trapezoidal rule explanation part


void trapezoidalexpla()
{
	FILE *fp;
	fp= fopen("trapezoidal.txt","r");
	char ch;
	ch=getc(fp);
	while(ch!=EOF)
	{
	printf("%c",ch);
	ch=getc(fp);
	}
	fclose(fp);
}


		//trapezoidal rule function example execution part

void trapezoidalfunc()
{
	
	printf("\n					*IMPORTANT INSTRUCTIONS*							\n"
		"						1.first enter the number of operators					\n"
		"						2.then enter the operators sequencially					\n"
		"						3.then enter the functions sequentially					\n"
		"					prefer following given output as referance					\n"
		"															\n"
		"					SUPPOSE CONSIDER FOLLOWING EXAMPLE:						\n"
		"					f(x)=sinx+cosx								    \n"				
		"					+ is operand AND sinx & cosx are functions					\n"
		"					OUTPUT:										\n"
		"					enter number of operands:1							\n"
		"					choose operands from list and give their sr. NO. sequencially:1	         	\n"
		"					choose functions from list and give their sr. NO. sequenticially:1		\n"
		"					2										\n");
	int i,j,x,ch,div=0,m2=0;
	double m1,d;

	double f;
	double x3;
	double *ptr1;
	int ptr2,ptr3;

	int n;
	double x1,x2,h,a,c=0,b,fun;
	printf("\n\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%lf%lf",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS:");
	scanf("%d",&n);
	double y[n+1];
	double z[n+1];
	h=(x1-x2)/n;
	for(i=0;i<=n;i++)	
	{	if(i==0)
		{	z[i]=x2;
		}
		else
		{
		z[i]=z[i-1]+h;
		}
	}

	printf("\n\tENTER NUMBER OF OPERATORS:");
	scanf("%d",&x);
	int mul[5],o[x+1];
	if(x!=0)
	{printf("\n\tENTER OPERATORS ONE BY ONE:");
	}
	for(i=1;i<x+1;i++)
	{	printf("\n\tCHOOSE THE FROM THE FOLLOWING"
						"\n\t1.ADDITION"
						"\n\t2.SUBSTRACTION"
						"\n\t3.MULTIPLECATION"
						"\n\t4.DIVISION"
						"\n\tENTER YOUR CHOICE:");
		scanf("%d",&o[i]);
		printf("\n\t%d",o[i]);
		if(o[i]==3)
		{	mul[i]=i;
		}
	}
	
	printf("\n\tENTER POWER OF 'x':");
	int p[x+1];
	for(i=0;i<x+1;i++)	
	{scanf("%d",&p[i]);
	}			
	int func1[x+1],func2[x+1];
	printf("\n\tCHOOSE FUNCTION FROM THE FOLLOWING MENU:");
	for(i=0;i<x+1;i++)
	{	printf("\nenter functions sequentially from the following functions :"
				"\nenter the type of functons:"
				"\n1.trigonometric functions"
				"\n2.exponential funtions  (IF YOU WANT A SQUAREROOT,CUBEROOT ETC OF 'X' OR ANY POWER OF 'X' CHOOSE THIS FUNCTION)"
				"\n3.algebraic function"
				"\n4.logarithmic function"
				"\n5.inverse function"
				"\nenter your choice:");
		scanf("%d",&func1[i]);
		if(func1[i]==1)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"	
			"\n\t1.sinx()"
			"\n\t2.cosx()"
			"\n\t3.tanx()"
			"\n\t4.cotx()"
			"\n\t5.secx()"
			"\n\t6.cosecx()"
			"\n\t7.sinhx()"
			"\n\t8.coshx()"
			"\n\t9.tanhx()"
			"\n\t10.cothx()"
			"\n\t11.sechx()"
			"\n\t12.cosechx()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==2)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.e^x"
				"\n\t2.a^x  ('a' be the any no. which can be given by user)"
				"\n\tENTER YOUR CHOICE:");		
			scanf("%d",&func2[i]);
			if(func2[i]==2)
			{	printf("\n\tENTER VALUE OF 'a'");
				scanf("%d",&ptr3);
			}
		}
		if(func1[i]==3)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.SQIAREROOT,CUBEROOT ETC OF X  (IF YOU WANT SQUAREROOT THEN ENTER 1/2,FOR CUBEROOT 1/3 SO ON IN POWER SECTION OF 'X')"	
				"\n\t2.ANY POWER OF 'X' (MENTION THE POWER OF 'X' IN POWER SECTION OF 'X')"
				"\n\t3.1/x"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==4)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.logx()"
				"\n\t2.lnx()"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==5)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLWING"
			"\n\t1.sin^-1x()"
			"\n\t2.cos^-1x()"
			"\n\t3.tan^-1x()"
			"\n\t4.cot^-1x()"
			"\n\t5.sec^-1x()"
			"\n\t6.cosec^-1x()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
	}
	printf("......IS SQUAREROOT IS PRESENT IN GIVEN FUNTION......"
		"\n......1.ONLY FOR CURRENT FUNCTION......"
		"\n......2.FOR WHOLE FUNCTION......"
		"\n......3.SQUAREROOT IS NOT PRESENT......"
		"\n......ENTER YOUR CHOICE......:");
	scanf("%d",&ch);
	for(i=0;i<=n;i++)	
	
	{
	
	if(ch==1)
	{	
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					z[i]=sqrt(z[i]);
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
			
	}
	else if(ch==2)
	{			
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		f=sqrt(f);
		y[i]=f;

	}
	else if(ch==3)
	{	for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
	





	}
	else
	{	printf("......INVALID INPUT......");
	}	
	}


		//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=h/2[(y0+y%d)+2(",n);
	for(i=1;i<n-1;i++)
	{
		printf("y%d+",i);
	}printf("y%d)]\n",n-1);
	//steps1 display
	printf("\n\t.....ENTER VALUES IN FORMULA.....\n");
	printf("\tf(x)=%f/2*[(%f+%f)+2(",h,y[0],y[n]);
	for(i=1;i<n-1;i++)
	{
		printf("%f+",y[i]);
	}printf("%f)]\n",y[n-1]);
	//step2 calculation
	a=h/2,b=y[0]+y[n];
	for(i=1;i<n;i++)
	{
	c=c+y[i];	
	}//c=2*c;
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f+%f)\n",a,b,c);
	f=a*(b+(2*c));
	//f=(b+c);
	//f=a*f;
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n\n",f);

}



                    //trapezoidal rule table formate example execution part


void trapezoidal()
{	printf("\n\t......TRAPEZOIDAL RULE......\n");
    	int i,n;
	float x1,x2,h,a,b,c=0,f;
	printf("\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%f%f",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS:");
	scanf("%d",&n);
	float y[n];
	printf("\n\tENTER VALUES OF F(X):");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&y[i]);
	}
	//main function of trapezoidal rule
	h=(x1-x2)/n;
	//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=h/2[(y0+y%d)+2(",n);
	for(i=1;i<n-1;i++)
	{
		printf("y%d+",i);
	}printf("y%d)]\n",n-1);
	//steps1 display
	printf("\n\t.....ENTER VALUES IN FORMULA.....\n");
	printf("\tf(x)=%f/2*[(%f+%f)+2(",h,y[0],y[n]);
	for(i=1;i<n-1;i++)
	{
		printf("%f+",y[i]);
	}printf("%f)]\n",y[n-1]);
	//step2 calculation
	a=h/2,b=y[0]+y[n];
	for(i=1;i<n;i++)
	{
	c=c+y[i];	
	}//c=2*c;
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f+%f)\n",a,b,c);
	f=a*(b+(2*c));
	//f=(b+c);
	//f=a*f;
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n\n",f);
}


                    //simpsons 1/3 rule explanation part


void simpsons1expla()
{
	FILE *fp;
	fp= fopen("simpsonsfirst.txt","r");
	char ch;
	ch=getc(fp);
	while(ch!=EOF)
	{
	printf("%c",ch);
	ch=getc(fp);
	}
	fclose(fp);
}



			//simpsons 1/3 rule function example execution part
void simpsons1func()
{

	printf("\n					*IMPORTANT INSTRUCTIONS*							\n"
		"						1.first enter the number of operators					\n"
		"						2.then enter the operators sequencially					\n"
		"						3.then enter the functions sequentially					\n"
		"					prefer following given output as referance					\n"
		"															\n"
		"					SUPPOSE CONSIDER FOLLOWING EXAMPLE:						\n"
		"					f(x)=sinx+cosx								    \n"				
		"					+ is operand AND sinx & cosx are functions					\n"
		"					OUTPUT:										\n"
		"					enter number of operands:1							\n"
		"					choose operands from list and give their sr. NO. sequencially:1	         	\n"
		"					choose functions from list and give their sr. NO. sequenticially:1		\n"
		"					2										\n");
	int i,j,x,ch,div=0,m2=0;
	double m1,d;

	double f;
	double x3;
	double *ptr1;
	int ptr2,ptr3;

	int n;
	double x1,x2,h,a,c=0,b=0,fun,e;
	printf("\n\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%lf%lf",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS:");
	scanf("%d",&n);
	double y[n+1];
	double z[n+1];
	h=(x1-x2)/n;
	for(i=0;i<=n;i++)	
	{	if(i==0)
		{	z[i]=x2;
		}
		else
		{
		z[i]=z[i-1]+h;
		}
	}

	printf("\n\tENTER NUMBER OF OPERATORS:");
	scanf("%d",&x);
	int mul[5],o[x+1];
	if(x!=0)
	{printf("\n\tENTER OPERATORS ONE BY ONE:");
	}
	for(i=1;i<x+1;i++)
	{	printf("\n\tCHOOSE THE FROM THE FOLLOWING"
						"\n\t1.ADDITION"
						"\n\t2.SUBSTRACTION"
						"\n\t3.MULTIPLECATION"
						"\n\t4.DIVISION"
						"\n\tENTER YOUR CHOICE:");
		scanf("%d",&o[i]);
		printf("\n\t%d",o[i]);
		if(o[i]==3)
		{	mul[i]=i;
		}
	}
	
	printf("\n\tENTER POWER OF 'x':");
	int p[x+1];
	for(i=0;i<x+1;i++)	
	{scanf("%d",&p[i]);
	}			
	int func1[x+1],func2[x+1];
	printf("\n\tCHOOSE FUNCTION FROM THE FOLLOWING MENU:");
	for(i=0;i<x+1;i++)
	{	printf("\nenter functions sequentially from the following functions :"
				"\nenter the type of functons:"
				"\n1.trigonometric functions"
				"\n2.exponential funtions  (IF YOU WANT A SQUAREROOT,CUBEROOT ETC OF 'X' OR ANY POWER OF 'X' CHOOSE THIS FUNCTION)"
				"\n3.algebraic function"
				"\n4.logarithmic function"
				"\n5.inverse function"
				"\nenter your choice:");
		scanf("%d",&func1[i]);
		if(func1[i]==1)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"	
			"\n\t1.sinx()"
			"\n\t2.cosx()"
			"\n\t3.tanx()"
			"\n\t4.cotx()"
			"\n\t5.secx()"
			"\n\t6.cosecx()"
			"\n\t7.sinhx()"
			"\n\t8.coshx()"
			"\n\t9.tanhx()"
			"\n\t10.cothx()"
			"\n\t11.sechx()"
			"\n\t12.cosechx()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==2)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.e^x"
				"\n\t2.a^x  ('a' be the any no. which can be given by user)"
				"\n\tENTER YOUR CHOICE:");		
			scanf("%d",&func2[i]);
			if(func2[i]==2)
			{	printf("\n\tENTER VALUE OF 'a'");
				scanf("%d",&ptr3);
			}
		}
		if(func1[i]==3)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.SQIAREROOT,CUBEROOT ETC OF X  (IF YOU WANT SQUAREROOT THEN ENTER 1/2,FOR CUBEROOT 1/3 SO ON IN POWER SECTION OF 'X')"	
				"\n\t2.ANY POWER OF 'X' (MENTION THE POWER OF 'X' IN POWER SECTION OF 'X')"
				"\n\t3.1/x"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==4)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.logx()"
				"\n\t2.lnx()"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==5)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLWING"
			"\n\t1.sin^-1x()"
			"\n\t2.cos^-1x()"
			"\n\t3.tan^-1x()"
			"\n\t4.cot^-1x()"
			"\n\t5.sec^-1x()"
			"\n\t6.cosec^-1x()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
	}
	printf("......IS SQUAREROOT IS PRESENT IN GIVEN FUNTION......"
		"\n......1.ONLY FOR CURRENT FUNCTION......"
		"\n......2.FOR WHOLE FUNCTION......"
		"\n......3.SQUAREROOT IS NOT PRESENT......"
		"\n......ENTER YOUR CHOICE......:");
	scanf("%d",&ch);
	for(i=0;i<=n;i++)	
	
	{
	
	if(ch==1)
	{	
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					z[i]=sqrt(z[i]);
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
			
	}
	else if(ch==2)
	{			
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		f=sqrt(f);
		y[i]=f;

	}
	else if(ch==3)
	{	for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
	





	}
	else
	{	printf("......INVALID INPUT......");
	}	
	}
		
		//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=h/3[(y0+y%d)+4(",n);
	for(i=1;i<n-1;i++)
	{	if(i%2==1)
		{
		printf("y%d+",i);
		}
	}printf("y%d)+2(",n-1);
	for(i=2;i<n-2;i++)
	{	if(i%2==0)
		{
		printf("y%d+",i);
		}
	}printf("y%d)]\n",n-2);
	//steps1 display
	printf("\n\t.....ENTER VALUES IN FORMULA.....\n");
	printf("\tf(x)=%f/3*[(%f+%f)+4(",h,y[0],y[n]);
	for(i=1;i<n-1;i++)
	{	if(i%2==1)
		{printf("%f+",y[i]);
		}
	}printf("%f)+2(",y[n-1]);
	for(i=2;i<n-2;i++)
	{	if(i%2==0)
		{printf("%f+",y[i]);
		}
	}printf("%f)]\n",y[n-2]);
	//step2 calculation
	a=h/3,b=y[0]+y[n];
	for(i=1;i<n;i++)
	{	if(i%2==1)
		{
			c=c+y[i];
		}	
	}//c=4*c;
	for(i=2;i<n-1;i++)
	{	if(i%2==0)
		{
			e=e+y[i];
		}	
	}//d=2*d;
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f+%f+%f)\n",a,b,c,e);
	fun=a*(b+(4*c)+(2*e));
	//f=(b+c+d);
	//f=a*f;
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n",fun);


}





                    //simpsons 1/3 rule table formate example execution part


void simpsons1()
{	printf("\n\t......SIMPSONS 1/3 RULE......\n");
    	int i,n;
	float x1,x2,h,a,b,c=0,f,d=0;
	printf("\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%f%f",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS:");
	scanf("%d",&n);
	float y[n];
	printf("\n\tENTER VALUES OF F(X):");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&y[i]);
	}
	//main function of simpsons 1/3 rule
	h=(x1-x2)/n;
	//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=h/3[(y0+y%d)+4(",n);
	for(i=1;i<n-1;i++)
	{	if(i%2==1)
		{
		printf("y%d+",i);
		}
	}printf("y%d)+2(",n-1);
	for(i=2;i<n-2;i++)
	{	if(i%2==0)
		{
		printf("y%d+",i);
		}
	}printf("y%d)]\n",n-2);
	//steps1 display
	printf("\n\t.....ENTER VALUES IN FORMULA.....\n");
	printf("\tf(x)=%f/3*[(%f+%f)+4(",h,y[0],y[n]);
	for(i=1;i<n-1;i++)
	{	if(i%2==1)
		{printf("%f+",y[i]);
		}
	}printf("%f)+2(",y[n-1]);
	for(i=2;i<n-2;i++)
	{	if(i%2==0)
		{printf("%f+",y[i]);
		}
	}printf("%f)]\n",y[n-2]);
	//step2 calculation
	a=h/3,b=y[0]+y[n];
	for(i=1;i<n;i++)
	{	if(i%2==1)
		{
			c=c+y[i];
		}	
	}//c=4*c;
	for(i=2;i<n-1;i++)
	{	if(i%2==0)
		{
			d=d+y[i];
		}	
	}//d=2*d;
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f+%f+%f)\n",a,b,c,d);
	f=a*(b+(4*c)+(2*d));
	//f=(b+c+d);
	//f=a*f;
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n",f);
}


                    //simpsons 3/8 rule explanation part


void simpsons3expla()
{
	FILE *fp;
	fp= fopen("simpsonssecond.txt","r");
	char ch;
	ch=getc(fp);
	while(ch!=EOF)
	{
	printf("%c",ch);
	ch=getc(fp);
	}
	fclose(fp);
}


			//simpsons 3/8 function example execution part

void simpsons3func()
{

	printf("\n					*IMPORTANT INSTRUCTIONS*							\n"
		"						1.first enter the number of operators					\n"
		"						2.then enter the operators sequencially					\n"
		"						3.then enter the functions sequentially					\n"
		"					prefer following given output as referance					\n"
		"															\n"
		"					SUPPOSE CONSIDER FOLLOWING EXAMPLE:						\n"
		"					f(x)=sinx+cosx								    \n"				
		"					+ is operand AND sinx & cosx are functions					\n"
		"					OUTPUT:										\n"
		"					enter number of operands:1							\n"
		"					choose operands from list and give their sr. NO. sequencially:1	         	\n"
		"					choose functions from list and give their sr. NO. sequenticially:1		\n"
		"					2										\n");
	int i,j,x,ch,div=0,m2=0;
	double m1,d;

	double f;
	double x3;
	double *ptr1;
	int ptr2,ptr3;

	int n;
	double x1,x2,h,a,c=0,b=0,fun;
	printf("\n\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%lf%lf",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS:");
	scanf("%d",&n);
	double y[n+1];
	double z[n+1];
	h=(x1-x2)/n;
	for(i=0;i<=n;i++)	
	{	if(i==0)
		{	z[i]=x2;
		}
		else
		{
		z[i]=z[i-1]+h;
		}
	}

	printf("\n\tENTER NUMBER OF OPERATORS:");
	scanf("%d",&x);
	int mul[5],o[x+1];
	if(x!=0)
	{printf("\n\tENTER OPERATORS ONE BY ONE:");
	}
	for(i=1;i<x+1;i++)
	{	printf("\n\tCHOOSE THE FROM THE FOLLOWING"
						"\n\t1.ADDITION"
						"\n\t2.SUBSTRACTION"
						"\n\t3.MULTIPLECATION"
						"\n\t4.DIVISION"
						"\n\tENTER YOUR CHOICE:");
		scanf("%d",&o[i]);
		printf("\n\t%d",o[i]);
		if(o[i]==3)
		{	mul[i]=i;
		}
	}
	
	printf("\n\tENTER POWER OF 'x':");
	int p[x+1];
	for(i=0;i<x+1;i++)	
	{scanf("%d",&p[i]);
	}			
	int func1[x+1],func2[x+1];
	printf("\n\tCHOOSE FUNCTION FROM THE FOLLOWING MENU:");
	for(i=0;i<x+1;i++)
	{	printf("\nenter functions sequentially from the following functions :"
				"\nenter the type of functons:"
				"\n1.trigonometric functions"
				"\n2.exponential funtions  (IF YOU WANT A SQUAREROOT,CUBEROOT ETC OF 'X' OR ANY POWER OF 'X' CHOOSE THIS FUNCTION)"
				"\n3.algebraic function"
				"\n4.logarithmic function"
				"\n5.inverse function"
				"\nenter your choice:");
		scanf("%d",&func1[i]);
		if(func1[i]==1)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"	
			"\n\t1.sinx()"
			"\n\t2.cosx()"
			"\n\t3.tanx()"
			"\n\t4.cotx()"
			"\n\t5.secx()"
			"\n\t6.cosecx()"
			"\n\t7.sinhx()"
			"\n\t8.coshx()"
			"\n\t9.tanhx()"
			"\n\t10.cothx()"
			"\n\t11.sechx()"
			"\n\t12.cosechx()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==2)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.e^x"
				"\n\t2.a^x  ('a' be the any no. which can be given by user)"
				"\n\tENTER YOUR CHOICE:");		
			scanf("%d",&func2[i]);
			if(func2[i]==2)
			{	printf("\n\tENTER VALUE OF 'a'");
				scanf("%d",&ptr3);
			}
		}
		if(func1[i]==3)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.SQIAREROOT,CUBEROOT ETC OF X  (IF YOU WANT SQUAREROOT THEN ENTER 1/2,FOR CUBEROOT 1/3 SO ON IN POWER SECTION OF 'X')"	
				"\n\t2.ANY POWER OF 'X' (MENTION THE POWER OF 'X' IN POWER SECTION OF 'X')"
				"\n\t3.1/x"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==4)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.logx()"
				"\n\t2.lnx()"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==5)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLWING"
			"\n\t1.sin^-1x()"
			"\n\t2.cos^-1x()"
			"\n\t3.tan^-1x()"
			"\n\t4.cot^-1x()"
			"\n\t5.sec^-1x()"
			"\n\t6.cosec^-1x()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
	}
	printf("......IS SQUAREROOT IS PRESENT IN GIVEN FUNTION......"
		"\n......1.ONLY FOR CURRENT FUNCTION......"
		"\n......2.FOR WHOLE FUNCTION......"
		"\n......3.SQUAREROOT IS NOT PRESENT......"
		"\n......ENTER YOUR CHOICE......:");
	scanf("%d",&ch);
	for(i=0;i<=n;i++)	
	
	{
	
	if(ch==1)
	{	
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					z[i]=sqrt(z[i]);
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
			
	}
	else if(ch==2)
	{			
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		f=sqrt(f);
		y[i]=f;

	}
	else if(ch==3)
	{	for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
	





	}
	else
	{	printf("......INVALID INPUT......");
	}	
	}
		


	





		//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=3h/8[(y0+y%d)+3(",n);
	for(i=1;i<=n-2;i++)
	{	if(i%3!=0)
		{
		printf("y%d+",i);
		}
	}
	for(i=n-1;i>n-2;i--)
	{	if(i%3!=0)
		{printf("y%d)",i);
		}
	}printf("+2(");
	for(i=3;i<=n-3;i++)
	{	if(i%3==0)
		{
		printf("y%d+",i);
		}
	}
	for(i=n;i>n-3;i--)
	{	if(i%3==0)
		{printf("y%d)]\n",i);
		}
	}
	//steps1 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=3*%f/8*[(%f+%f)+3(",h,y[0],y[n]);
	for(i=1;i<=n-2;i++)
	{	if(i%3!=0)
		{printf("%f+",y[i]);
		}
	}
	for(i=n-1;i>n-2;i--)
	{	if(i%3!=0)	
		{printf("%f)",y[n-1]);
		}
	}printf("+2(");
	for(i=3;i<=n-3;i++)
	{	if(i%3==0)
		{printf("%f+",y[i]);
		}
	}
	for(i=n;i>n-3;i--)
	{	if(i%3==0)
		{printf("%f)]\n",y[n-2]);
		}
	}
	//step2 calculation
	a=3*h/8,b=y[0]+y[n];
	for(i=1;i<n;i++)
	{	if(i%3!=0)
		{
			c=c+y[i];
		}	
	}//c=3*c;
	for(i=3;i<n;i++)
	{	if(i%3==0)
		{
			d=d+y[i];
		}	
	}//d=2*d;
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f+%f+%f)\n",a,b,c,d);
	f=a*(b+(3*c)+(2*d));
	//f=(b+c+d);
	//f=a*f;
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n",f);

}



                    //simpsons 3/8 rule table formate example execution part


void simpsons3()
{	printf("\n\t......SIMPSONS 3/8 RULE......\n");   	
    	int i,n;
	float x1,x2,h,a,b,c=0,f,d=0;
	printf("\n\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%f%f",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS:");
	scanf("%d",&n);
	float y[n];
	printf("\n\tENTER VALUES OF F(X):");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&y[i]);
	}
	//main function of simpsons 3/8 rule
	h=(x1-x2)/n;
	//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=3h/8[(y0+y%d)+3(",n);
	for(i=1;i<=n-2;i++)
	{	if(i%3!=0)
		{
		printf("y%d+",i);
		}
	}
	for(i=n-1;i>n-2;i--)
	{	if(i%3!=0)
		{printf("y%d)",i);
		}
	}printf("+2(");
	for(i=3;i<=n-3;i++)
	{	if(i%3==0)
		{
		printf("y%d+",i);
		}
	}
	for(i=n;i>n-3;i--)
	{	if(i%3==0)
		{printf("y%d)]\n",i);
		}
	}
	//steps1 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=3*%f/8*[(%f+%f)+3(",h,y[0],y[n]);
	for(i=1;i<=n-2;i++)
	{	if(i%3!=0)
		{printf("%f+",y[i]);
		}
	}
	for(i=n-1;i>n-2;i--)
	{	if(i%3!=0)	
		{printf("%f)",y[n-1]);
		}
	}printf("+2(");
	for(i=3;i<=n-3;i++)
	{	if(i%3==0)
		{printf("%f+",y[i]);
		}
	}
	for(i=n;i>n-3;i--)
	{	if(i%3==0)
		{printf("%f)]\n",y[n-2]);
		}
	}
	//step2 calculation
	a=3*h/8,b=y[0]+y[n];
	for(i=1;i<n;i++)
	{	if(i%3!=0)
		{
			c=c+y[i];
		}	
	}//c=3*c;
	for(i=3;i<n;i++)
	{	if(i%3==0)
		{
			d=d+y[i];
		}	
	}//d=2*d;
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f+%f+%f)\n",a,b,c,d);
	f=a*(b+(3*c)+(2*d));
	//f=(b+c+d);
	//f=a*f;
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n",f);
}


                    //weddle rule explanation part


void weddleexpla()
{
	FILE *fp;
	fp= fopen("weddle.txt","r");
	char ch;
	ch=getc(fp);
	while(ch!=EOF)
	{
	printf("%c",ch);
	ch=getc(fp);
	}
	fclose(fp);
}

			
			//weddle rule function example execution part
void weddlefunc()

{
	printf("\n					*IMPORTANT INSTRUCTIONS*							\n"
		"						1.first enter the number of operators					\n"
		"						2.then enter the operators sequencially					\n"
		"						3.then enter the functions sequentially					\n"
		"					prefer following given output as referance					\n"
		"															\n"
		"					SUPPOSE CONSIDER FOLLOWING EXAMPLE:						\n"
		"					f(x)=sinx+cosx								    \n"				
		"					+ is operand AND sinx & cosx are functions					\n"
		"					OUTPUT:										\n"
		"					enter number of operands:1							\n"
		"					choose operands from list and give their sr. NO. sequencially:1	         	\n"
		"					choose functions from list and give their sr. NO. sequenticially:1		\n"
		"					2										\n");
	int i,j,x,ch,div=0,m2=0;
	double m1,d;

	double f;
	double x3;
	double *ptr1;
	int ptr2,ptr3;

	int n;
	double x1,x2,h,a,b=0,fun;
	int s=5,q=6,r=2;
	printf("\n\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%lf%lf",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS WHICH MUST BE MULTIPLE OF 6:");
	scanf("%d",&n);
	double y[n+1];
	double z[n+1];
	h=(x1-x2)/n;
	for(i=0;i<=n;i++)	
	{	if(i==0)
		{	z[i]=x2;
		
		}
		else
		{
		z[i]=z[i-1]+h;
			
		}
	}

	printf("\n\tENTER NUMBER OF OPERATORS:");
	scanf("%d",&x);
	int mul[5],o[x+1];
	if(x!=0)
	{printf("\n\tENTER OPERATORS ONE BY ONE:");
	}
	for(i=1;i<x+1;i++)
	{	printf("\n\tCHOOSE THE FROM THE FOLLOWING"
						"\n\t1.ADDITION"
						"\n\t2.SUBSTRACTION"
						"\n\t3.MULTIPLECATION"
						"\n\t4.DIVISION"
						"\n\tENTER YOUR CHOICE:");
		scanf("%d",&o[i]);
		printf("\n\t%d",o[i]);
		if(o[i]==3)
		{	mul[i]=i;
		}
	}
	
	printf("\n\tENTER POWER OF 'x':");
	int p[x+1];
	for(i=0;i<x+1;i++)	
	{scanf("%d",&p[i]);
	}			
	int func1[x+1],func2[x+1];
	printf("\n\tCHOOSE FUNCTION FROM THE FOLLOWING MENU:");
	for(i=0;i<x+1;i++)
	{	printf("\nenter functions sequentially from the following functions :"
				"\nenter the type of functons:"
				"\n1.trigonometric functions"
				"\n2.exponential funtions  (IF YOU WANT A SQUAREROOT,CUBEROOT ETC OF 'X' OR ANY POWER OF 'X' CHOOSE THIS FUNCTION)"
				"\n3.algebraic function"
				"\n4.logarithmic function"
				"\n5.inverse function"
				"\nenter your choice:");
		scanf("%d",&func1[i]);
		if(func1[i]==1)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"	
			"\n\t1.sinx()"
			"\n\t2.cosx()"
			"\n\t3.tanx()"
			"\n\t4.cotx()"
			"\n\t5.secx()"
			"\n\t6.cosecx()"
			"\n\t7.sinhx()"
			"\n\t8.coshx()"
			"\n\t9.tanhx()"
			"\n\t10.cothx()"
			"\n\t11.sechx()"
			"\n\t12.cosechx()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==2)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.e^x"
				"\n\t2.a^x  ('a' be the any no. which can be given by user)"
				"\n\tENTER YOUR CHOICE:");		
			scanf("%d",&func2[i]);
			if(func2[i]==2)
			{	printf("\n\tENTER VALUE OF 'a'");
				scanf("%d",&ptr3);
			}
		}
		if(func1[i]==3)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.SQIAREROOT,CUBEROOT ETC OF X  (IF YOU WANT SQUAREROOT THEN ENTER 1/2,FOR CUBEROOT 1/3 SO ON IN POWER SECTION OF 'X')"	
				"\n\t2.ANY POWER OF 'X' (MENTION THE POWER OF 'X' IN POWER SECTION OF 'X')"
				"\n\t3.1/x"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==4)
		{
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLOWING"
				"\n\t1.logx()"
				"\n\t2.lnx()"
				"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
		if(func1[i]==5)
		{	
			printf("\n\tCHOOSE THE FUNCTION FROM THE FOLLWING"
			"\n\t1.sin^-1x()"
			"\n\t2.cos^-1x()"
			"\n\t3.tan^-1x()"
			"\n\t4.cot^-1x()"
			"\n\t5.sec^-1x()"
			"\n\t6.cosec^-1x()"
			"\n\tENTER YOUR CHOICE:");
			scanf("%d",&func2[i]);
		}
	}
	printf("......IS SQUAREROOT IS PRESENT IN GIVEN FUNTION......"
		"\n......1.ONLY FOR CURRENT FUNCTION......"
		"\n......2.FOR WHOLE FUNCTION......"
		"\n......3.SQUAREROOT IS NOT PRESENT......"
		"\n......ENTER YOUR CHOICE......:");
	scanf("%d",&ch);
	for(i=0;i<=n;i++)	
	
	{
	
	if(ch==1)
	{	
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					z[i]=sqrt(z[i]);
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
			
	}
	else if(ch==2)
	{			
			for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		f=sqrt(f);
		y[i]=f;

	}
	else if(ch==3)
	{	for(j=0;j<x+1;j++)
			{
					z[i]= pow(z[i],p[j]);
				ptr1=&z[i];
				ptr2=func2[j];			
			if(func1[j]==1)
			{	
			trignometry(ptr1,ptr2);
			}
			else if(func1[j]==2)
			{
			exponential(ptr1,ptr2,ptr3);
			}
			else if(func1[j]==3)
			{
			algebraic(ptr1,ptr2);
			}
			else if(func1[j]==4)
			{
			logarithmic(ptr1,ptr2);
			}
			else if(func1[j]==5)
			{
			inverse(ptr1,ptr2);
			}
			else 
			{	printf("\n\tINVALID INPUT");
			}		
						
					
					if(j==0)
					{
						f=z[i];
					}
					 if(mul[j+1]-1==j)
						{	
							{
								{m1=z[i];
								m2=o[j];
								}
							}
						}	
					else		
					{
						 if(o[j]==1)
						{f=f+z[i];
						}
						else if(o[j]==2)
						{f=(f)-(z[i]);
						}	
						else if(o[j]==3)
						{	
							{	
								z[i]=m1*z[i];
								if(m2==1)
								{f=f+z[i];
								}
								else if(m2==2)
								{f=f-z[i];
								}
								else if(m2==4)
								{	
									div=1;
									d=f;
									f=z[i];
								}
								else
								{f=x3;
								}
							}
							
						}
						else if(o[j]==4)
						{	div=1;
							d=f;
							f=z[i];
						}
				
						
					}		
	
			}
		if(div==1)
		{
			f=d/f;
		}
		y[i]=f;
	





	}
	else
	{	printf("......INVALID INPUT......");
	}	
	}
		




			//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=3h/10*[");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{	if(i%3==0)
			{printf("%dy%d+",q,i);
			}
			if(i%3!=0)
			{printf("%dy%d+",s,i);
			}
		}
		if(i%2==0)
		{	if(i!=0)
			{if(i%6==0)
			{	if(i<n)
				{printf("%dy%d+",r,i);
				}
			}
			}
			if(i%6!=0||i==0)
			{printf("y%d+",i);
			}
		}
	}printf("y%d]\n",n);
	//steps1 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=3*%f/10*[",h);
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{	if(i%3==0)
			{printf("%d*%f+",q,y[i]);
			}
			if(i%3!=0)
			{printf("%d*%f+",s,y[i]);
			}
		}
		if(i%2==0)
		{	if(i!=0)
			{if(i%6==0)
			{	if(i<n)
				{printf("%d*%f+",r,y[i]);
				}
			}
			}
			if(i%6!=0||i==0)
			{printf("%f+",y[i]);
			}
			
		}
	}printf("%f]\n",y[n]);
	a=(3*h)/10;
	// calculation
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		{	if(i%3==0)
			{y[i]=(q*y[i]);
			}
			if(i%3!=0)
			{y[i]=(s*y[i]);
			}
		}
		if(i%2==0)
		{	if(i!=0)
			{if(i%6==0)
			{	if(i<n)
				{y[i]=(r*y[i]);
				}
			}
			}
			if(i%6!=0||i==0)
			{y[i]=y[i];
			}
		}
	
	}for(i=0;i<=n;i++)
	{	b=b+y[i];
	}
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f)\n",a,b);
	fun=a*b;
	//step3 display
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n",fun);


}


                    //weddle rule table formate example execution part


void weddle()
{	printf("\n\t......WEDDLE RULE......\n");   	
    	int i,n;
	float x1,x2,h,a,b=0,f;
	int p=5,q=6,r=2;
	printf("\n\tENTER UPPER LIMIT AND LOWER LIMIT:");
	scanf("%f%f",&x1,&x2);
	printf("\n\tENTER NUMBER OF PARTS WHICH MUST BE MULTIPLE OF 6:");
	scanf("%d",&n);
	float y[n];
	printf("\n\tENTER VALUES OF F(X):");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&y[i]);
	}
	//main function of weddle rule
	h=(x1-x2)/n;
	//formula
	printf("\n\t.....FORMULA.....\n");
	printf("\tf(x)=3h/10*[");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{	if(i%3==0)
			{printf("%dy%d+",q,i);
			}
			if(i%3!=0)
			{printf("%dy%d+",p,i);
			}
		}
		if(i%2==0)
		{	if(i!=0)
			{if(i%6==0)
			{	if(i<n)
				{printf("%dy%d+",r,i);
				}
			}
			}
			if(i%6!=0||i==0)
			{printf("y%d+",i);
			}
		}
	}printf("y%d]\n",n);
	//steps1 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=3*%f/10*[",h);
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{	if(i%3==0)
			{printf("%d*%f+",q,y[i]);
			}
			if(i%3!=0)
			{printf("%d*%f+",p,y[i]);
			}
		}
		if(i%2==0)
		{	if(i!=0)
			{if(i%6==0)
			{	if(i<n)
				{printf("%d*%f+",r,y[i]);
				}
			}
			}
			if(i%6!=0||i==0)
			{printf("%f+",y[i]);
			}
			
		}
	}printf("%f]\n",y[n]);
	a=(3*h)/10;
	// calculation
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		{	if(i%3==0)
			{y[i]=(q*y[i]);
			}
			if(i%3!=0)
			{y[i]=(p*y[i]);
			}
		}
		if(i%2==0)
		{	if(i!=0)
			{if(i%6==0)
			{	if(i<n)
				{y[i]=(r*y[i]);
				}
			}
			}
			if(i%6!=0||i==0)
			{y[i]=y[i];
			}
		}
	
	}for(i=0;i<=n;i++)
	{	b=b+y[i];
	}
	//step2 display
	printf("\n\t.....CALCULATON OF EXAMPLE.....\n");
	printf("\tf(x)=%f*(%f)\n",a,b);
	f=a*b;
	//step3 display
	printf("\n\t.....FINAL ANSWER OF EXAMPLE.....\n");
	printf("\tf(x)=%f\n",f);
}

                    //main of the program


void main()
{
	int ch,a,b;
	do
	{
		printf("\n.........NUMERICAL INTEGRATION............\n"
			".........1.TRAPEZOIDAL RULE.........\n"
			".........2.SIMPSONS 1/3RD RULE.........\n"
			".........3.SIMPSOMS 3/8TH RULE.........\n"
			".........4.WEDDLE RULE.........\n"
			".........5.EXIT.........\n"
			".........ENTER YOUR CHOICE:.........");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nTRAPEZOIDAL RULE\n"
				"1.EXPLANATION\n"
				"2.EXAMPLE\n"
				"ENTER YOUR CHOICE:");
			scanf("%d",&a);
			if(a==1)
			{	
			trapezoidalexpla();
			}
			else if(a==2)
			{	printf("\n\t...........................INSTRUCTIONS................................\n"
					"\tTHEIR ARE TWO METHODS FOR INPUT IN WHICH FIRST IS BY GIVING NORMALLY \n"
					"\tFUNCTIONS AND IF THE FUNCTIONS WHICH YOU WANT TO ENTER ARE NOT AVAILABLE\n"
					"\tTHEN CHOOSE SECOND OPTION IN WHICH YOU WANT TO JUST PROVIDE TABLE OF\n"
					"\tVALUES OF F(X) FOR EACH VALUE OF X\n");
				printf("\nTYPE OF INPUT\n"
				"1.FUNCTION\n"
				"2.TABLE FORMATE\n"
				"ENTER YOUR CHOICE:");
				scanf("%d",&b);
				if(b==1)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE \n"
						"\tFUNCTIONS WITH ALL NESSASARY INFORMATION\n");
					trapezoidalfunc();
				}
				else if(b==2)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE VALUES\n"
						"\tOF F(X) FOR EACH VALUE OF X\n");
					trapezoidal();
				}
				else
				{printf("INVALID INPUT");
				}
			}
			else
			{printf("INVALID INPUT");
			}
			break;
		case 2:
			printf("\nSIMPSONS 1/3RD RULE\n"
				"1.EXPLANATION\n"
				"2.EXAMPLE\n"
				"ENTER YOUR CHOICE:");
			scanf("%d",&a);
			if(a==1)
			{
			simpsons1expla();
			}
			else if(a==2)
			{	printf("\n\t...........................INSTRUCTIONS................................\n"
					"\tTHEIR ARE TWO METHODS FOR INPUT IN WHICH FIRST IS BY GIVING NORMALLY \n"
					"\tFUNCTIONS AND IF THE FUNCTIONS WHICH YOU WANT TO ENTER ARE NOT AVAILABLE\n"
					"\tTHEN CHOOSE SECOND OPTION IN WHICH YOU WANT TO JUST PROVIDE TABLE OF\n"
					"\tVALUES OF F(X) FOR EACH VALUE OF X\n");
				printf("\nTYPE OF INPUT\n"
				"1.FUNCTION\n"
				"2.TABLE FORMATE\n"
				"ENTER YOUR CHOICE:");
				scanf("%d",&b);
				if(b==1)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE \n"
						"\tFUNCTIONS WITH ALL NESSASARY INFORMATION\n");
					simpsons1func();
				}
				else if(b==2)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE VALUES\n"
						"\tOF F(X) FOR EACH VALUE OF X\n");
					simpsons1();
				}
				else
				{printf("INVALID INPUT");
				}
			}
			else
			{printf("INVALID INPUT");
			}
			break;
		case 3:
			printf("\nSIMPSONS 3/8TH RULE\n"
				"1.EXPLANATION\n"
				"2.EXAMPLE\n"
				"ENTER YOUR CHOICE:");
			scanf("%d",&a);
			if(a==1)
			{
			simpsons3expla();
			}
			else if(a==2)
			{	printf("\n\t...........................INSTRUCTIONS................................\n"
					"\tTHEIR ARE TWO METHODS FOR INPUT IN WHICH FIRST IS BY GIVING NORMALLY \n"
					"\tFUNCTIONS AND IF THE FUNCTIONS WHICH YOU WANT TO ENTER ARE NOT AVAILABLE\n"
					"\tTHEN CHOOSE SECOND OPTION IN WHICH YOU WANT TO JUST PROVIDE TABLE OF\n"
					"\tVALUES OF F(X) FOR EACH VALUE OF X\n");
				printf("\nTYPE OF INPUT\n"
					"1.FUNCTION\n"
					"2.TABLE FORMATE\n"
					"ENTER YOUR CHOICE:");
				scanf("%d",&b);
				if(b==1)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE \n"
						"\tFUNCTIONS WITH ALL NESSASARY INFORMATION\n");
					simpsons3func();
				}
				else if(b==2)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE VALUES\n"
						"\tOF F(X) FOR EACH VALUE OF X\n");
					simpsons3();
				}
				else
				{printf("INVALID INPUT");
				}
			}
			else
				{printf("INVALID INPUT");
				}
			break;
		case 4:
			printf("\nWEDDLE RULE\n"
				"1.EXPLANATION\n"
				"2.EXAMPLE\n"
				"ENTER YOUR CHOICE:");
			scanf("%d",&a);
			if(a==1)
			{
			weddleexpla();
			}
			else if(a==2)
			{	printf("\n\t...........................INSTRUCTIONS................................\n"
					"\tTHEIR ARE TWO METHODS FOR INPUT IN WHICH FIRST IS BY GIVING NORMALLY \n"
					"\tFUNCTIONS AND IF THE FUNCTIONS WHICH YOU WANT TO ENTER ARE NOT AVAILABLE\n"
					"\tTHEN CHOOSE SECOND OPTION IN WHICH YOU WANT TO JUST PROVIDE TABLE OF\n"
					"\tVALUES OF F(X) FOR EACH VALUE OF X\n");
				printf("\nTYPE OF INPUT\n"
					"1.FUNCTION\n"
					"2.TABLE FORMATE\n"
					"ENTER YOUR CHOICE:");
				scanf("%d",&b);
				if(b==1)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE \n"
						"\tFUNCTIONS WITH ALL NESSASARY INFORMATION\n");
					weddlefunc();
				}
				else if(b==2)
				{	printf("\n\t....................INSTRUCTIONS....................\n"
						"\tIN THIS METHOD PLEASE PROVIDE UPPER LIMIT AND LOWER LIMIT\n"
						"\tTHEN PROVIDE NUMBER OF PARTS AND AT THE END PROVIDE VALUES\n"
						"\tOF F(X) FOR EACH VALUE OF X\n");
					weddle();
				}
				else
				{printf("INVALID INPUT");
				}
			}
			else
				{printf("INVALID INPUT");
				}
			
			break;
		case 5:break;
		default:printf("\n\tINVALID INPUT\n");
			break;
	}
	}while(ch!=5);
}
