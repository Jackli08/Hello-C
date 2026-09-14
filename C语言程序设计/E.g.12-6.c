/* cashbox.dat 是随机文件, 记录资金账户消费流水信息 */
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
long size;
struct LogData{
    long logid;
    char logdate[11];
    char lognote[15];
    double charge;
    double balance;
};

int inputchoice()
{
    int mychoice;
    printf("\nEnter your choice:\n");
    printf("1-Add a new cash LOG.\n2-List All Cash LOG.\n");
    printf("3-Query Last Cash LOG.\n0-End Program.\n");
    scanf("%d", &mychoice);
    return mychoice;
}

long getLogcount(FILE *cfptr)
{
    long begin, end, logcount;
    fseek(cfptr, 0L, SEEK_SET);
    begin = ftell(cfptr);
    fseek(cfptr, size, SEEK_END);
    end = ftell(cfptr);
    logcount = (end - begin) / size;
    return logcount;
}

void ListAllLog(FILE *cfptr)
{
    struct LogData log;
    fseek(cfptr, 0L, SEEK_SET);
    fread(&log, size, 1, cfptr);
    printf("logid  logdata lognote charge balance\n");
    while(!feof(cfptr)){
        printf("%6ld %-11s %-15s %10.2lf %10.2lf\n", log.logid, 
           log.logdate, log.lognote, log.charge, log.balance);
        fread(&log, size, 1, cfptr);
    }
}

void QueryLastLog(FILE *cfptr)
{
    struct LogData log;
    long logcount;
    logcount = getLogcount(cfptr);
    if(logcount>0){
        fseek(cfptr, size*(logcount-1), SEEK_SET);
        fread(&log, size, 1, cfptr);
        printf("The last log is:\n");
        printf("logid:%-6ld\nlogdata:%-11s\nlognote:%-15s\n", 
           log.logid, log.logdate, log.lognote);
        printf("charge:%-10.2lf\nbalance:%-10.2lf\n", 
           log.charge, log.balance);
    }
    else{
        printf("no logs in file!\n");
    }
}

void AddNewLog(FILE *cfptr)
{
    struct LogData log, lastlog;
    long logcount;
    printf("Input logdata(format: 2008-12-27):");
    scanf("%s", log.logdate);
    printf("Input lognote:"); scanf("%s", log.lognote);
    printf("Input Charge: Income+and expand-:");
    scanf("%lf", &log.charge);
    logcount = getLogcount(cfptr);
    
}