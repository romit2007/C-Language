

#include<stdio.h>
#include<conio.h>
void main()
{
    int myuserid=1122,mypass=9897;
    
    int userid;
    int pass;
    
    printf("Enter User ID: ");
    scanf("%d",&userid);
    
    printf("Enter User Password: ");
    scanf("%d",&pass);
    
    
    if(userid == myuserid && pass == mypass)
    {
        printf("Login Success");  
    }
    else
    {
        printf("Invalid Credentials");
    }
    
    
    
  
    
    getch();
}





   
