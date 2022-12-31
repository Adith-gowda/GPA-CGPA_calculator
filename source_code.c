#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
    printf("Number of subjects in a semester (only graded courses) : ");
    int n,choice;
    float c[1000],sum=0,tot=0,prevgpa,prevc;
    char g[1000];
    scanf("%d",&n);
    printf("%d\nEnter n number of subject's garde and number of credits of that subject separated by space respectively.\nNOTE : please exclude non-graded course credits while giving input ..Thank you!\n",n);
    for(int i=0;i<n;i++){
        scanf("%s %f",&g[i],&c[i]);
        printf("%c %.2f\n",g[i],c[i]);
    }
    for(int i=0;i<n;i++){
        if(tolower(g[i])=='s'){
            sum=sum+10*c[i];
            tot+=c[i];
        }
        else if(tolower(g[i])=='a'){
            sum=sum+9*c[i];
            tot+=c[i];
        }
        else if(tolower(g[i])=='b'){
            sum=sum+8*c[i];
            tot+=c[i];
        }
        else if(tolower(g[i])=='c'){
            sum=sum+7*c[i];
            tot+=c[i];
        }
        else if(tolower(g[i])=='d'){
            sum=sum+6*c[i];
            tot+=c[i];
        }
        else if(tolower(g[i])=='e'){
            sum=sum+5*c[i];
            tot+=c[i];
        }
        else{
            sum=sum+0;
            tot+=c[i];
        }
    }
    printf("\n\nExpected GPA is : %.2f\n\nIf you want to check your CGPA then enter 1 else 0 to exit.\n",sum/tot);
    scanf("%d",&choice);
    if(choice){
        printf("Sice you wanted to check your CGPA, kindly enter your previous semester's GPA and credits total credits of that semester or enter your current CGPA and total credits (separated by space) !!\nNOTE : please exclude non-graded course credits while giving input ..Thank you!");
        scanf("%f %f",&prevgpa,&prevc);
        printf("\n\n%.2f %.2f",prevgpa,prevc);
        printf("\n\nExpected CGPA is : %.2f",((prevgpa*prevc)+((sum/tot)*tot))/(tot+prevc));
    }
    else{
        printf("\nTHANK YOU, ALL THE BEST!!");
        exit(0);
    }
    return 0;
}
