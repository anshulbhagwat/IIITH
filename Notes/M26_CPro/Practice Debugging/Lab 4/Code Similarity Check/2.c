#include <stdio.h>
#include <string.h>

int main(){
    char sec[100005], guess[100005];
    fgets(sec, sizeof(sec), stdin);
    fgets(guess, sizeof(guess), stdin);
    int l = strlen(guess) - 1, dir = 0, dis = 0,f[128]={0}, f2[128]={0};
    for (int i = 0; i < l; i++) {
        if (sec[i] == guess[i]) {dir++;}
        else {
            f[sec[i]]++;
            f2[guess[i]]++;
        }
    }
for (int i = 0; i < 128; i++){
    if (f[i] > f2[i]){
        dis += f[i];
    } else {
        dis += f2[i];
    }
}
dis-= dir+1;


    printf("%d %d\n", dir, dis);
    return 0;
}