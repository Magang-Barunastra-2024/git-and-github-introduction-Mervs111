#include <stdio.h>

int main (){
    int age;
    printf ("enter your age/n");
    scanf ("%d",&age);
    if (age>=18) {
        printf ("you are now signed up!");
    }
    else if (age==0){
        printf ("you cant sign up you were just born!");
}
    else if (age<0){
        printf ("you aren't even born yet!");
        }
        else {
            printf("you are too young to sign up!");
        }
}

// no output only 
//[Running] cd "c:\ITS\git-and-github-introduction-Mervs111\Testing Code\" && gcc NyobaIF.c -o NyobaIF && "c:\ITS\git-and-github-introduction-Mervs111\Testing Code\"NyobaIF
