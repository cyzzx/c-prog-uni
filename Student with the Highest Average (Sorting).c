#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBER_OF_STUDENTS 100
#define MAX_LEGTH_OF_NAME 16
#define MAX_NUMBER_OF_GRADES 50

double getAverage(int marks[MAX_NUMBER_OF_GRADES])
{
    double sum=0,average;
    int nog=0;

    for (int i=0;marks[i]!=-999;i++)
    {
        sum+=marks[i];
        nog++;
    }

    average=(double)sum/nog;

    return average;
}


void getData (int n, double avg[MAX_NUMBER_OF_STUDENTS], char names[MAX_NUMBER_OF_STUDENTS][MAX_LEGTH_OF_NAME])
{
    for (int i=0;i<n;i++)
    {
        printf("Enter the name: ");
        scanf("%s",names[i]);
        int marks[MAX_NUMBER_OF_GRADES];
        int grade, indexOfGrade = 0;
        printf("Enter the grades: ");
        while (1)
        {
            scanf("%d",&grade);
            if (grade==-999)
                break;
            else
            {
                marks[indexOfGrade++]=grade;
            }

        }

        marks[indexOfGrade] = -999;

        avg[i]= getAverage(marks);

            }
}

void sortAverages (int n, char names[MAX_NUMBER_OF_STUDENTS][MAX_LEGTH_OF_NAME],double avg[MAX_NUMBER_OF_STUDENTS])
{
       for (int i=0;i<n-1;i++)
       {
           double temp;
           char tempStudentName[MAX_LEGTH_OF_NAME];
           for (int j=i+1;j<n-1-i;j++)
           {
               if (avg[j]>avg[j+1])
               {
                   temp=avg[j];
                   avg[j]=avg[j+1];
                   avg[j+1]=temp;
                   strcpy (tempStudentName,names[j]);
                   strcpy(names[j],names[j+1]);
                   strcpy (names[j+1],tempStudentName);
               }

           }
       }

}


int main()
{

    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    char names[MAX_NUMBER_OF_STUDENTS][MAX_LEGTH_OF_NAME];
    double averages[MAX_NUMBER_OF_STUDENTS];

    getData(n,averages,names);
    sortAverages(n,names,averages);
    printf("The student with the highest average is %s with avg %.3lf.",names[4],averages[4]);

    return 0;
}
