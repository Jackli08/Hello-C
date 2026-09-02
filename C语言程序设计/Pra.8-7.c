#include<stdio.h>
#include<string.h>
#define MAXLINE 80
void bubble(char s[][MAXLINE]);
void swap(char *a, char *b);
int main()
{
    char a[5][MAXLINE];
    int i;
    for(i=0; i<5; i++){
        scanf("%s", a[i]);
    }
    bubble(a);
    printf("After sorted:\n");
    for(i=0; i<4; i++){
        printf("%s\n", a[i]);
    }
    printf("%s", a[4]);
    return 0;
}
void bubble(char s[][MAXLINE])
{
    int i, j;
    for(i=1; i<5; i++){
        for(j=0; j<5-i; j++){
            if(strcmp(s[j], s[j+1])>0){
                swap(s[j], s[j+1]);
            }
        }
    }
}
void swap(char *a, char *b)
{
    char t[MAXLINE];
    strcpy(t, a);
    strcpy(a, b);
    strcpy(b, t);
}


//wnanine buzhongyao ? caibuhui haishibiaomeizhongyao
// nawanyishiwoxiangnilene
// buxin gun
// gansha namingtianbiejianle
// shedema shede caiguai 
/// aojiao ! caimeiyou
// buailejidetongzhiwo haode kuku
// mougouzhamaole
// bugenniwanle  haoba keshijiejiezheyouhaochide
// shenmehaochide nidoubugenwowanlewoganmayaogaosuni
// nawoyaogenjiejiewan haoo haochidene youdeyoude
// shishenmene mingzhiguwen huaigougou xiangchishenmene
// xiangchicaihongruantang meinamekuaidaone nanibielaile 
// ???nixiangqingchu meiyoucaihongruantang laiganma
// haiyoubiedene biru chougou! bugenniwanle 
// buyao aojiao! meiyou! haosha haiyouenen haoo chuanshenmedaodi
// zheyewenwo diaodaiba liangkuai heihei zhendeyaburanshiweileshenme "fangbianbaeneng"
// haohuai! woshizheyangderenme  bushi shizheyangdeliumang ogou
// naworangnikankanshenmejiaozhenzhengdeliumang 
// ? xianglimingze
