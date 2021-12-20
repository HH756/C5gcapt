#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int main() {
        printf("\n");
        printf("C5gcapt\n");
        printf("\n");
        srand(time(NULL));
        float i = 1;
        float count = 1;
        FILE *fpSample;
        fpSample = fopen("persist.txt", "w");
        fprintf(fpSample, "");
        while(1) {
                FILE *f = fopen("persist.txt", "r");
                int number = 0;
                int sum = 0;
                while( fscanf(f, "%d,", &number) > 0 ){
                        sum += number;
                }
                fclose(f);
                int l = rand() % 100 + 50;
                int m = rand() % 100 + 50;
                float n = rand() % 100 + 50;
                float o = n/100;
                int k = rand() % 3 + 0;
                fpSample = fopen("persist.txt", "a");
                fprintf(fpSample, "%d,", l);
                fclose(fpSample);
                printf("Searching for Packets...\n");
                if (k == 2) {
                        printf("Packets Found & Destroyed: %d | Size: %dMB | Last packet Time: %fms\n",l,m,o);
                }
                if (i == 15) {
                        printf("----------------------\n|  TOTAL PACKETS: %d  \n|  UPTIME: %fH    \n----------------------\n",sum,count/3600);
                        i = 1;
                }
                i++;
                count++;
                sleep(1.5);
        }
}