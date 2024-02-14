#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#include<string.h>

bool run = true;

void CmdColor(){
            printf("welcome to cmd color picker please chose the color\n1.black \n2.blue \n3.red \n4.gray \n5.white \n6.yallow\n7.aqua \n8.purple\n9.green\n");
        int ch ;
        scanf("%d" , &ch);
        if(ch == 1){
            system("color 0");
            
        }
        else if(ch == 2){
            system("color 1");
            
        }
        else if(ch == 3){
            system("color 4");
            
        }
        else if(ch == 4){
            system("color 8");
            
        }
        else if(ch == 5){
            system("color 7");
            
        }
        else if(ch == 6){
            system("color 6");
            
        }
        else if(ch == 7){
            system("color 3");
            
        }
        else if(ch == 8){
            system("color 4");
            
        }
        else if(ch == 9){
            system("color 0a");
            
        }
}

void mainMenu(){
    printf("welcome to main menu.\n1.change txt color\n2.exit\n");
    int ch ;
    scanf("%d" , &ch);

    if(ch == 1){
        CmdColor();
    }
    else if(ch == 2){
        run = false;
    }

}

int main(){
    while (run)
    {
        
    
            mainMenu();
        
    }
    
}