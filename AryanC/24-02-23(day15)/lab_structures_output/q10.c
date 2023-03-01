#include<stdio.h>
struct team{
    int wickets;
    int score;
}ts={2,325};
struct country{
    char *name;

}coun={"india"};
int main(){
    struct team tcon=ts;
    printf("%d %s %d",tcon.score,ts.wickets,coun.name);
}