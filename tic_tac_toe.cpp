#include<iostream>
#include<conio.h>

using namespace std;

int main()
{  
  char ar[3][3];
  int choice,f,label;
  char ch;
  
  
    for(int i=0;i<3;i++)       
      { for(int j=0;j<3;j++)
         ar[i][j]=' ';
      }

	cout<<endl;
	cout<<"******************************************Welcome Players**********************************************";
	cout<<"\n\n\n\n Player 1- X";
	cout<<"\n\n Player 2- O";
	cout<<"\n\n\nPositioning of entries:";
	cout<<"\n\n\n";
    cout<<"\t\t\t\t\t\t    |    |    ";
	cout<<"\n\t\t\t\t\t\t  1 | 2  | 3  ";        
	cout<<"\n\t\t\t\t\t\t----|----|----";
	cout<<"\n\t\t\t\t\t\t  4 | 5  | 6  ";
	cout<<"\n\t\t\t\t\t\t----|----|----";
	cout<<"\n\t\t\t\t\t\t  7 | 8  | 9  ";
        cout<<"\n\t\t\t\t\t\t    |    |    ";

        for(int y=0;y<9;y++)
	{   
	     if(y%2==0)
	     {cout<<"\nPlayer 1 Enter the position: ";
              f=2;}
             else
	     {cout<<"\nPlayer 2 Enter the position: ";
              f=3;}
             
             cin>>choice;
			              
             if(choice==1)  
	    {  	 
	        if(ar[0][0]==' ')
		    { if(f==2){ar[0][0]='X';}
			  else if(f==3){ar[0][0]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             else if(choice==2)
		 {  	 
	        if(ar[0][1]==' ')
		    { if(f==2){ar[0][1]='X';}
			  else if(f==3){ar[0][1]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }
         
             else if(choice==3)
		  {  	 
	        if(ar[0][2]==' ')
		    { if(f==2){ar[0][2]='X';}
			  else if(f==3){ar[0][2]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

	     else if(choice==4)
		 {  	 
	        if(ar[1][0]==' ')
		    { if(f==2){ar[1][0]='X';}
			  else if(f==3){ar[1][0]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             else if(choice==5)
		 {  	 
	        if(ar[1][1]==' ')
		    { if(f==2){ar[1][1]='X';}
			  else if(f==3){ar[1][1]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             else if(choice==6)
    		 {  	 
	        if(ar[1][2]==' ')
		    { if(f==2){ar[1][2]='X';}
			  else if(f==3){ar[1][2]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             else if(choice==7)
		 {  	 
	        if(ar[2][0]==' ')
		    { if(f==2){ar[2][0]='X';}
			  else if(f==3){ar[2][0]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             else if(choice==8)
	    {  	 
	        if(ar[2][1]==' ')
		    { if(f==2){ar[2][1]='X';}
			  else if(f==3){ar[2][1]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             else if(choice==9)
	    {  	 
	        if(ar[2][2]==' ')
		    { if(f==2){ar[2][2]='X';}
			  else if(f==3){ar[2][2]='O';}
         cout<<"\t\t\t\t\t\t    |    |    ";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[0][0] <<" | "<<ar[0][1]  <<"  |"<< ar[0][2]  ;        
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[1][0] <<" | "<<ar[1][1]  <<"  |"<< ar[1][2]  ; 
	     cout<<"\n\t\t\t\t\t\t----|----|----";
	     cout<<"\n\t\t\t\t\t\t  "<<ar[2][0] <<" | "<<ar[2][1]  <<"  |"<< ar[2][2]  ; 
         cout<<"\n\t\t\t\t\t\t    |    |    ";}
         
            else {cout<<"Already Filled!!!!!";y--;}
        }

             if(y>=4 && f==2)
             {
                if(ar[0][0]=='X' && ar[0][1]=='X' && ar[0][2]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
                
                else if(ar[1][0]=='X' && ar[1][1]=='X' && ar[1][2]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
              
                else if(ar[2][0]=='X' && ar[2][1]=='X' && ar[2][2]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
                    
                else if(ar[0][0]=='X' && ar[1][0]=='X' && ar[2][0]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
                    
                else if(ar[0][1]=='X' && ar[1][1]=='X' && ar[2][1]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
             
                else if(ar[0][2]=='X' && ar[1][2]=='X' && ar[2][2]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
                    
                else if(ar[0][0]=='X' && ar[1][1]=='X' && ar[2][2]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
                    
                else if(ar[2][0]=='X' && ar[1][1]=='X' && ar[0][2]=='X')
                   {cout<<"\n\n\t\t\t\t\t\t Player 1 wins!!!!";
                    break;}
            }
                    
                    
              else if(y>=4 && f==3)
             {
                if(ar[0][0]=='O' && ar[0][1]=='O' && ar[0][2]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
                
                else if(ar[1][0]=='O' && ar[1][1]=='O' && ar[1][2]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
              
                else if(ar[2][0]=='O' && ar[2][1]=='O' && ar[2][2]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
                    
                else if(ar[0][0]=='O' && ar[1][0]=='O' && ar[2][0]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
                    
                else if(ar[0][1]=='O' && ar[1][1]=='O' && ar[2][1]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
             
                else if(ar[0][2]=='O' && ar[1][2]=='O' && ar[2][2]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
                    
                else if(ar[0][0]=='O' && ar[1][1]=='O' && ar[2][2]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
                    
                else if(ar[2][0]=='O' && ar[1][1]=='O' && ar[0][2]=='O')
                   {cout<<"\n\n\t\t\t\t\t\t Player 2 wins!!!!";
                    break;}
             }
                    
          if(y==8)
		    {cout<<"\n\n\n\t\t\t\t\t\tNO PLAYER WINS....IT'S A DRAW!!!!!" ;}

             
 }
     getch();
     return 0;
}








