#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char comp,char me){
	if(comp==me)
		return -1;
		
	if(comp=='r' && me=='p'){
		return 1;
	}
	else if(comp=='p' && me=='r'){
		return 0;
	}
	
	if(comp=='s' && me=='r'){
		return 1;
	}
	else if(comp=='r' && me=='s'){
		return 0;
	}
	
	if(comp=='p' && me=='s'){
		return 1;
	}
	else if(comp=='s' && me=='p'){
		return 0;
	}
}

int main()
{
	int n,result;
	char user,User,computer,Computer;
	
	srand(time(NULL));
	
	n=rand()%100;
	
	if(n<33){
		computer='r';
	}
	
	else if(n>33 && n<66){
		computer='p';
	}
	
	else{
		computer='s';
	}
	
	printf("\n\n\n\n\t\t\t\tEnter 'R' for Rock, 'P' for Paper & 'S' for Scissor\n\t\t\t\t\t\t\t");
	scanf("%c",&user);
	
	if(user=='R'|| user=='r'|| user=='P'|| user=='p'|| user=='s'|| user=='S')
	{
		result=game(computer,user);
		
		if(result==-1){
			printf("\n\n\t\t\t\tGame Draw!\n");
		}
			else if (result == 1) {
			printf("\n\n\t\t\t\tWow! You have won the game!\n");
		}
		else {
			printf("\n\n\t\t\t\tOh! You have lost the game!\n");
		}
			printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",user, computer);
	}
		
	else{
		printf("\n\n\t\t\t\tSorry!!! You have Entered wrong input");
		printf("\n\t\t\t\t\t Don't worry try again");
		printf("\n\t\t\t\tMake sure you have only three choice");
	}
	

	printf("\n\n");
	return 0;
}
