#include<stdio.h>
struct friend{
    char name[11], number[18];
    int birth;
};
int main()
{
    int i, n, j;
    scanf("%d", &n);
    struct friend friends[n];
    getchar();
    for(i=0; i<n; i++){
        scanf("%s", friends[i].name);
        scanf("%d", &friends[i].birth);
        scanf("%s", friends[i].number);
    }
    int index;
    struct friend temp;
    for(i=0; i<n-1; i++){
        index = i;
        for(j=i+1; j<n; j++){
            if(friends[j].birth<friends[index].birth)
                index = j;
        }
        temp = friends[index];
        friends[index] = friends[i];
        friends[i] = temp;
    }
    printf("%s %d %s", friends[0].name, friends[0].birth, friends[0].number);
    for(i=1; i<n; i++){
        printf("\n%s %d %s", friends[i].name, friends[i].birth, friends[i].number);
    }
    return 0;
}