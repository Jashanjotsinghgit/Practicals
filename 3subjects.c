#include<stdio.h>
void cal(float e,float p,float s,float *avg,float *per);
int main()
{
    float pun,eng,sci;
    float avg,per;
    //Punjabi, English, Science
    printf("Enter the Marks Obtained in Punjabi: ");
    scanf("%f",&pun);
    printf("Enter the Marks Obtained in English: ");
    scanf("%f",&eng);
    printf("Enter the Marks Obtained in Science: ");
    scanf("%f",&sci);
    cal(eng,pun,sci,&avg,&per);
    printf("Average Marks= %5.2f\n Percentage Marks=%5.2f%%",avg,per);
    return 0;
}
void cal(float e,float p,float s,float *avg,float *per)
{
    *avg=(e+p+s)/3;
    *per=((e+p+s)/300)*100;
}