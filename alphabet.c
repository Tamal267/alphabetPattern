#include<stdio.h>
#include<ctype.h>
int forM(){
  int n=5;
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==1 || j==n){
        printf("*");
      }
      else if(i==2 && j==2){
        printf("*");
      }
      else if(i==2 && j==4){
        printf("*");
      }
      else if(i==3 && j==3){
        printf("*");
      }
      else printf(" ");
    }
    printf("\n");
  }
}
int forI(){
  int n=5;
  int i;
  for(i=1;i<=n;i++){
    printf("  *\n");
  }
}
int forS(){
  int n=5;
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i==1 || i==3 || i==5){
        printf("*");
      }
      else if(i<3 && j==1){
        printf("*");
      }
      else if(i>3 && j==n){
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
int forT(){
  int n=5;
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i==1) printf("*");
      else if(j==3) printf("*");
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
int forA(){
  int n=5;
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i==1 && j==3){
        printf("*");
      }
      else if(i==2 && (j==2 || j==4)){
        printf("*");
      }
      else if(i==3){
        printf("*");
      }
      else if(i>3 && (j==1 || j==n)){
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
int forB(){
  int i,j,n=5;
  for(i=1;i<=5;i++){
    for(j=1;j<=n;j++){
      if(i==1 || i==n){
        if(j<n){
          printf("*");
        }
      }
      else if(i==3){
        printf("*");
      }
      else if(j==1 || j==n){
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
int forC(){
  int n=5;
  int i;
  printf("*****\n");
  for(i=1;i<n-1;i++){
    printf("*\n");
  }
  printf("*****\n");
}
int forD(){
  int n=5;
  int i;
  printf("****\n");
  for(i=1;i<n-1;i++){
    printf("*   *\n");
  }
  printf("****\n");
}
int forE(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n/2 + 1 || i==n){
                printf("*");
            }
            else if(j==1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int forF(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n/2 + 1){
                printf("*");
            }
            else if(j==1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int forG(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n){
                printf("*");
            }
            else if(j==1){
                printf("*");
            }
            else if(i==n/2+1 && j>n/2){
                printf("*");
            }
            else if(i>n/2+1 && i<n && j==n){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int forH(){
    int n=5;
    int i;
    for(i=1;i<=n;i++){
        if(i==n/2+1){
            printf("*****\n");
        }
        else{
            printf("*   *\n");
        }
    }

}
int forJ(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        if(i==1){
            printf("*****\n");
        }
        else if(i<n-1){
            printf("    *\n");
        }
        else if(i>=n-1){
            if(i==n) printf(" ****\n");
            else printf(" *  *\n");
        }
    }
}
int forK(){
    int n=5;
    int i,j,c=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==c){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
        if(i<=n/2) c--;
        else c++;
    }
}
int forL(){
    int n=5;
    int i;
    for(i=1;i<n;i++){
        printf("*\n");
    }
    printf("*****\n");
}
int forN(){
    int n=5,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==n){
                printf("*");
            }
            else if(i>1 && i<n && i==j){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int forO(){
    int n=5,i,j;
    printf("*****\n");
    for(i=1;i<n-1;i++){
        printf("*   *\n");
    }
    printf("*****\n");
}
int forP(){
    int n=5,i,j;
    for(i=1;i<=n;i++){
        if(i==1) printf("****\n");
        else if(i==n/2+1) printf("*****\n");
        else if(i<=n/2) printf("*   *\n");
        else printf("*\n");
    }
}
int forQ(){
    int n=5;
    int i;
    for(i=1;i<=n;i++){
        if(i==1 || i==4){
            printf("*****\n");
        }
        else if(i<=n/2+1){
            printf("*   *\n");
        }
        else printf(" ****\n");
    }
}
int forR(){
    int n=5;
    int i,j,count=2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==3) printf("*");
            else if(j==1) printf("*");
            else if(i>3 && j==count) printf("*");
            else if(i==2  && j==n) printf("*");
            else printf(" ");
        }
        printf("\n");
        if(i>3)count++;
    }
}
int forU(){
    int n=5,i;
    for(i=1;i<5;i++){
        printf("*   *\n");
    }
    printf("*****\n");
}
int forV(){
    int n=5,i,j,count=2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=n/2+1 && (j==1 || j==n)) printf("*");
            else if(i>n/2+1 && i<n){
                if(j==2 || j==4) {
                        printf("*");
                        count++;
                }
                else printf(" ");
            }
            else if(i==n && j==count-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
int forW(){
  int n=5;
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==1 || j==n){
        printf("*");
      }
      else if(i==4 && j==2){
        printf("*");
      }
      else if(i==4 && j==4){
        printf("*");
      }
      else if(i==3 && j==3){
        printf("*");
      }
      else printf(" ");
    }
    printf("\n");
  }
}
int forX(){
    int n=5,i,j,count;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j || i==n-j+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
int forY(){
    int n=5,i,j,count;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=n/2+1 && (i==j || i==n-j+1)) printf("*");
            else if(i>n/2 && j==3) printf("*");
            else printf(" ");
        }
        printf("\n");\
    }
}
int forZ(){
    int n=5,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n) {
                    printf("*");
            }
            else if(j==n-i+1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int i;
    for(i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
        switch(str[i]){
        case 'A':
            forA();
            printf("\n");
            break;

        case 'B':
            forB();
            printf("\n");
            break;

        case 'C':
            forC();
            printf("\n");
            break;

        case 'D':
            forD();
            printf("\n");
            break;

        case 'E':
            forE();
            printf("\n");
            break;
        case 'F':
            forF();
            printf("\n");
            break;

        case 'G':
            forG();
            printf("\n");
            break;
        case 'H':
            forH();
            printf("\n");
            break;
        case 'I':
            forI();
            printf("\n");
            break;
        case 'J':
            forJ();
            printf("\n");
            break;
        case 'K':
            forK();
            printf("\n");
            break;
        case 'L':
            forL();
            printf("\n");
            break;
        case 'M':
            forM();
            printf("\n");
            break;
        case 'N':
            forN();
            printf("\n");
            break;
        case 'O':
            forO();
            printf("\n");
            break;
        case 'P':
            forP();
            printf("\n");
            break;
        case 'Q':
            forQ();
            printf("\n");
            break;
        case 'R':
            forR();
            printf("\n");
            break;
        case 'S':
            forS();
            printf("\n");
            break;
        case 'T':
            forT();
            printf("\n");
            break;
        case 'U':
            forU();
            printf("\n");
            break;
        case 'V':
            forV();
            printf("\n");
            break;
        case 'W':
            forW();
            printf("\n");
            break;
        case 'X':
            forX();
            printf("\n");
            break;
        case 'Y':
            forY();
            printf("\n");
            break;
        case 'Z':
            forZ();
            printf("\n");
            break;
        case ' ':
            printf("\n\n");
            break;
        }
    }

}

