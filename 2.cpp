#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void user_define(int n,int max){
		int i,j=0,array[50],r,i1;
		srand((unsigned int)time(NULL));
		printf("请输入参与运算的符号(最大50个)：\n1：加号，2：减号，3：乘号，4：除号，5:(符号，6：)符号，7：小数点0：结束");
		for(i=0;i<50;i++){
			scanf("%d",&array[i]);
			j++;
			if(array[i]==0) break;
		}
		for(i=0;i<n;i++){
			r=rand()%max;
			for(i1=0;i1<j;i1++){
				r=rand()%max;
				if(array[i1]==1) printf("%d+",r);
				if(array[i1]==2) printf("%d-",r);
				if(array[i1]==3) printf("%d*",r);
				if(array[i1]==4) printf("%d/",r);
				if(array[i1]==5) printf("(");
				if(array[i1]==6) printf(")");
				if(array[i1]==7) printf("%d.%2d",rand()%max,r);
		}
		printf("%d=\n",r);
	}
}
int auto_create(int n,int max,int mix,int c,char a,char b){
	int x1,x2,x3,i,r,r1;
	float x4,x5,x6;
	char sum='+',minus='-',multiply='*',except='/';
	srand((unsigned int)time(NULL));
	for(i=0;i<n;i++){
		if(mix==1){
			if(a=='n'){
				x1=rand()%max+1;
				x2=rand()%max+1;
				x3=rand()%max+1;
				
			switch (c){
					case 1: 
						if((x1+x2)<max) printf("%d%c%d=\n",x1,sum,x2);
						else continue;
						break;
					case 2: if((x1-x2)<max) printf("%d%c%d=\n",x1,minus,x2);
						else continue;
						break;
					case 3: if((x1*x2)<max) printf("%d%c%d=\n",x1,multiply,x2);
						else continue;
						break;
					case 4: if((x1/x2)<max) printf("%d%c%d=\n",x1,except,x2);
						else continue;
						break;
					default:break;
			}
			}
			if(a=='y'){
				x4=rand()%(max*100)+1;
				x5=rand()%(max*100)+1;
				x6=rand()%(max*100)+1;
				x4/=100;
				x5/=100;
				x6/=100;
				switch (c){
					case 1: if((x4+x5)<max) printf("%.2f%c%.2f=\n",x4,sum,x5);
						else continue;
						break;
					case 2: if((x4-x5)<max) printf("%.2f%c%.2f=\n",x4,minus,x5);
						else continue;
						break;
					case 3: if((x4*x5)<max) printf("%.2f%c%.2f=\n",x4,multiply,x5);
						else continue;
						break;
					case 4: if((x4/x5)<max) printf("%.2f%c%.2f=\n",x4,except,x5);
						else continue;
						break;
					default:break;
			}
			}
		}
		if(mix==2){
		
			if(a=='n'){
			
				if(b=='n'){
			
				x1=rand()%max+1;
				x2=rand()%max+1;
				x3=rand()%max+1;
				if(c==1){
				
					r=rand()%2;
					switch (r){
					case 0: if((x1+x2-x3)<max) printf("%d%c%d%c%d=\n",x1,sum,x2,minus,x3);
						else continue;
						break;
					case 1: if((x1-x2-x3)<max) printf("%d%c%d%c%d=\n",x1,minus,x2,sum,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==2){
					r=rand()%2;
					switch (r){
					case 0: if((x1+x2*x3)<max) printf("%d%c%d%c%d=\n",x1,sum,x2,multiply,x3);
						else continue;
						break;
					case 1: if((x1*x2+x3)<max) printf("%d%c%d%c%d=\n",x1,multiply,x2,sum,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==3){
					r=rand()%2;
					switch (r){
					case 0: if((x1-x2*x3)<max) printf("%d%c%d%c%d=\n",x1,minus,x2,multiply,x3);
						else continue;
						break;
					case 1: if((x1*x2-x3)<max) printf("%d%c%d%c%d=\n",x1,multiply,x2,minus,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==4){
					r=rand()%2;
					switch (r){
					case 0: if((x1/x2*x3)<max) printf("%d%c%d%c%d=\n",x1,except,x2,multiply,x3);
						else continue;
						break;
					case 1: if((x1*x2/x3)<max) printf("%d%c%d%c%d=\n",x1,multiply,x2,except,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==5){
					r=rand()%2;
					switch (r){
					case 0: if((x1/x2-x3)<max) printf("%d%c%d%c%d=\n",x1,except,x2,sum,x3);
						else continue;
						break;
					case 1: if((x1-x2/x3)<max) printf("%d%c%d%c%d=\n",x1,sum,x2,except,x3);
						else continue;
						break;
					default:break;
			}
				}
					if(c==6){
					r=rand()%2;
					switch (r){
					case 0: if((x1/x2-x3)<max) printf("%d%c%d%c%d=\n",x1,except,x2,minus,x3);
						else continue;
						break;
					case 1: if((x1-x2/x3)<max) printf("%d%c%d%c%d=\n",x1,minus,x2,except,x3);
						else continue;
						break;
					default:break;
			}
				}
				}
				if(b=='y'){
				x1=rand()%max+1;
				x2=rand()%max+1;
				x3=rand()%max+1;
				r1=rand()%2;
				if(c==1){
					r=rand()%2;
					switch (r){
					case 0: if((x1+x2-x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,sum,x2,minus,x3);
							if((x1+x2-x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,sum,x2,minus,x3);
						else continue;
						break;
					case 1: if((x1-x2-x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,minus,x2,sum,x3);
							if((x1-x2-x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,minus,x2,sum,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==2){
					r=rand()%2;
					switch (r){
					case 0: if((x1+x2*x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,sum,x2,multiply,x3);
							if((x1+x2*x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,sum,x2,multiply,x3);
						else continue;
						break;
					case 1: if((x1*x2+x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,multiply,x2,sum,x3);
							if((x1*x2+x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,multiply,x2,sum,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==3){
					r=rand()%2;
					switch (r){
					case 0: if((x1-x2*x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,minus,x2,multiply,x3);
							if((x1-x2*x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,minus,x2,multiply,x3);
						else continue;
						break;
					case 1: if((x1*x2-x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,multiply,x2,minus,x3);
							if((x1*x2-x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,multiply,x2,minus,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==4){
					r=rand()%2;
					switch (r){
					case 0: if((x1/x2*x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,except,x2,multiply,x3);
							if((x1/x2*x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,except,x2,multiply,x3);
						else continue;
						break;
					case 1: if((x1*x2/x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,multiply,x2,except,x3);
							if((x1*x2/x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,multiply,x2,except,x3);
						else continue;
						break;
					default:break;
			}
				}
				if(c==5){
					r=rand()%2;
					switch (r){
					case 0: if((x1/x2-x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,except,x2,sum,x3);
							if((x1/x2-x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,except,x2,sum,x3);
						else continue;
						break;
					case 1: if((x1-x2/x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,sum,x2,except,x3);
							if((x1-x2/x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,sum,x2,except,x3);
						else continue;
						break;
					default:break;
			}
				}
					if(c==6){
					r=rand()%2;
					switch (r){
					case 0: if((x1/x2-x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,except,x2,minus,x3);
							if((x1/x2-x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,except,x2,minus,x3);
						else continue;
						break;
					case 1: if((x1-x2/x3)<max&&r1==1) printf("(%d%c%d)%c%d=\n",x1,minus,x2,except,x3);
							if((x1-x2/x3)<max&&r1==0) printf("%d%c(%d%c%d)=\n",x1,minus,x2,except,x3);
						else continue;
						break;
					default:break;
			}	
			}
			}
			}
			if(a=='y'){
			
				if(b=='n'){
			
				x4=rand()%(max*100)+1;
				x5=rand()%(max*100)+1;
				x6=rand()%(max*100)+1;
				x4/=100;
				x5/=100;
				x6/=100;
				if(c==1){
				
					r=rand()%2;
					switch (r){
					case 0: if((x4+x5-x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,sum,x5,minus,x6);
						else continue;
						break;
					case 1: if((x4-x5+x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,minus,x5,sum,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==2){
					r=rand()%2;
					switch (r){
					case 0: if((x4+x5*x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,sum,x5,multiply,x6);
						else continue;
						break;
					case 1: if((x4*x5+x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,multiply,x5,sum,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==3){
					r=rand()%2;
					switch (r){
					case 0: if((x4-x5*x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,minus,x5,multiply,x6);
						else continue;
						break;
					case 1: if((x4*x5-x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,multiply,x5,minus,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==4){
					r=rand()%2;
					switch (r){
					case 0: if((x4/x5*x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,except,x5,multiply,x6);
						else continue;
						break;
					case 1: if((x4*x5/x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,multiply,x5,except,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==5){
					r=rand()%2;
					switch (r){
					case 0: if((x4/x5-x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,except,x5,sum,x6);
						else continue;
						break;
					case 1: if((x4-x5/x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,sum,x5,except,x6);
						else continue;
						break;
					default:break;
			}
				}
					if(c==6){
					r=rand()%2;
					switch (r){
					case 0: if((x4/x5-x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,except,x5,minus,x6);
						else continue;
						break;
					case 1: if((x4-x5/x6)<max) printf("%.2f%c%.2f%c%.2f=\n",x4,minus,x5,except,x6);
						else continue;
						break;
					default:break;
			}
				}
			}
				if(b=='y'){
				x4=rand()%(max*100)+1;
				x5=rand()%(max*100)+1;
				x6=rand()%(max*100)+1;
				x4/=100;
				x5/=100;
				x6/=100;
				r1=rand()%2;
				if(c==1){
				
					r=rand()%2;
					switch (r){
					case 0: if((x4+x5-x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,sum,x5,minus,x6);
							if((x4+x5-x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,sum,x5,minus,x6);
						else continue;
						break;
					case 1: if((x4-x5+x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,minus,x5,sum,x6);
							if((x4-x5+x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,minus,x5,sum,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==2){
					r=rand()%2;
					switch (r){
					case 0: if((x4+x5*x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,sum,x5,multiply,x6);
							if((x4+x5*x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,sum,x5,multiply,x6);
						else continue;
						break;
					case 1: if((x4*x5+x6)<max&&r1==1) printf("((%.2f%c%.2f)%c%.2f=\n",x4,multiply,x5,sum,x6);
							if((x4*x5+x6)<max&&r1==0) printf("(%.2f%c(%.2f%c%.2f)=\n",x4,multiply,x5,sum,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==3){
					r=rand()%2;
					switch (r){
					case 0: if((x4-x5*x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,minus,x5,multiply,x6);
							if((x4-x5*x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,minus,x5,multiply,x6);
						else continue;
						break;
					case 1: if((x4*x5-x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,multiply,x5,minus,x6);
							if((x4*x5-x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,multiply,x5,minus,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==4){
					r=rand()%2;
					switch (r){
					case 0: if((x4/x5*x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,except,x5,multiply,x6);
							if((x4/x5*x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,except,x5,multiply,x6);
						else continue;
						break;
					case 1: if((x4*x5/x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,multiply,x5,except,x6);
							if((x4*x5/x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,multiply,x5,except,x6);
						else continue;
						break;
					default:break;
			}
				}
				if(c==5){
					r=rand()%2;
					switch (r){
					case 0: if((x4/x5-x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,except,x5,sum,x6);
							if((x4/x5-x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,except,x5,sum,x6);
						else continue;
						break;
					case 1: if((x4-x5/x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,sum,x5,except,x6);
							if((x4-x5/x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,sum,x5,except,x6);
						else continue;
						break;
					default:break;
			}
				}
					if(c==6){
					r=rand()%2;
					switch (r){
					case 0: if((x4/x5-x6)<max&&r1==1) printf("(%.2f%c%.2f)%c%.2f=\n",x4,except,x5,minus,x6);
							if((x4/x5-x6)<max&&r1==0) printf("%.2f%c(%.2f%c%.2f)=\n",x4,except,x5,minus,x6);
						else continue;
						break;
					case 1: if((x4-x5/x6)<max&&r1==1) printf("%.2f%c(%.2f%c%.2f)=\n",x4,minus,x5,except,x6);
							if((x4-x5/x6)<max&&r1==0) printf("(%.2f%c%.2f)%c%.2f=\n",x4,minus,x5,except,x6);
						else continue;
						break;
					default:break;
			}
				
				}
		
			}
			}
		}

		

	}
	return 0;
}
void get_information(char choose){
	int n,max,mix,symbol1,symbol;
	char choose1,brackets;
	if(choose=='y'){
		printf("请输入题目数量\n");
		scanf("%d",&n);
		printf("设置最大结果\n");
		scanf("%d",&max);
		getchar();
		printf("是否有小数部分（结果保留2位）（是请输入‘y’，否请输入‘n’）\n");
		scanf("%c",&choose1);
		printf("纯运算还是混合运算（纯运算请输入1，混合运算请输入2）\n");
		scanf("%d",&mix);
		if(mix==2) {
		getchar();
		printf("是否需要生成括号（是请输入‘y’，否请输入‘n’）\n");
		scanf("%c",&brackets);
		printf("请输入生成题目的运算符\n加减法：1，加乘法：2，减乘法：3，乘除法：4，加除法：5，减除法：6\n按回车结束");
		scanf("%d",&symbol);
		auto_create(n,max,mix,symbol,choose1,brackets);
		}
		getchar();
		if(mix==1){
			printf("请输入生成题目的运算符\n加法：1，减法：2，乘法：3，除法：4\n按回车结束");
			scanf("%d",&symbol1);
			auto_create(n,max,mix,symbol1,choose1,brackets);
		}
		}
	if(choose=='n'){
		printf("请输入题目数量\n");
		scanf("%d",&n);
		printf("设置运算数范围\n");
		scanf("%d",&max);
		getchar();
		user_define(n,max);
		
	}

}

int main(){
	char choose;
	printf("是否使用系统自动生成练习题（是请输入‘y’，否请输入‘n’）\n");
	scanf("%c",&choose);
	srand((unsigned int)time(NULL));
	get_information(choose);
	return 0;
	}