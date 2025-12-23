#include<bits/stdc++.h>
using namespace std;

int main(){
    char cube[6][2][2];
    for(int i=0;i<6;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cin>>cube[i][j][k];
            }
        }
    }


    string c=" ";
    while(c !="X"){
        cin>>c;
        if(c=="u1"){
            char g[2][2];
            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    g[j][k]=cube[0][j][k];
                }
            }

            char s = cube[4][1][0];

            cube[4][1][0]=cube[4][1][1];
            cube[4][1][1]=cube[4][0][1];
            cube[4][0][1]=cube[4][0][0];
            cube[4][0][0]=s;

            cube[0][0][1]=cube[5][0][1];
            cube[0][1][1]=cube[5][1][1];

            cube[5][0][1]=cube[3][0][1];
            cube[5][1][1]=cube[3][1][1];

            cube[3][0][1]=cube[2][0][1];
            cube[3][1][1]=cube[2][1][1];

            cube[2][0][1]=g[0][1];
            cube[2][1][1]=g[1][1];

        }else if(c=="d1"){
            char g[2][2];
            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    g[j][k]=cube[0][j][k];
                }
            }

            char s = cube[4][0][1];

            cube[4][0][1]=cube[4][1][1];
            cube[4][1][1]=cube[4][1][0];
            cube[4][1][0]=cube[4][0][0];
            cube[4][0][0]=s;

            cube[0][0][1]=cube[2][0][1];
            cube[0][1][1]=cube[2][1][1];

            cube[2][0][1]=cube[3][0][1];
            cube[2][1][1]=cube[3][1][1];

            cube[3][0][1]=cube[5][0][1];
            cube[3][1][1]=cube[5][1][1];

            cube[5][0][1]=g[0][1];
            cube[5][1][1]=g[1][1];

        }
    }
    return 0;
}