#include <stdio.h>
#include <string.h>
// stucture of each student
typedef struct students
{
    char name[30];
    float score;
} student;

float sum = 0.0f; 
int size = 4; // number of students
int main(int argc, char const *argv[])
{
    student std[size]; // object of structure
    for (int i = 0; i < size; i++)
    {
        printf("Student name[%d]: ", i + 1); //get names
        gets(std[i].name);
        printf("Score: ");
        scanf("%f", &std[i].score); // get scores
        fflush(stdin); // for buffer error
        sum += std[i].score;
    }
    printf("================== Final Result ==================\n");
    //1) The Average Score
    float Average = sum / size; 
    printf("Average Score = %.2f\n", Average);

    //2) Names of all the students whose test scores are below the average.
    printf("Underachiever: ");
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if (std[i].score < Average)
        {
            printf("%s", std[i].name);
            if (i != size - 1)
                printf(", ");
        }
        if (i == size - 1)
            printf("]\n");
    }
    printf("\n");
    //an appropriate warning message.
    printf("Dear underachiever students\n\"Take this as an opportunity to reflect, seek support, and improve your performance. Keep up the hard work!\"\n");
    printf("\n");
    //3) Highest test score
    float max = std[0].score;
    char top_std[30];
    for (int i = 0; i < size; i++)
    {
        if (max < std[i].score)
        {
            max = std[i].score;
            strcpy(top_std, std[i].name);
        }
    }
    printf("Highest test score: %.2f\n", max);

    //4) Name of the top student, with an appreciation message.
    printf("The Top Student: %s\n", top_std);
    printf("Congratulations %s !! ^_^\n", top_std);

    return 0;
}
