#include <stdio.h>

float calculateBMI(float weight, float height)
{
    return  weight / (height * height);
}

void healthCondition(float bmi)
{
    if (bmi < 18.5)
    {
        printf("Your BMI is %f, That is Underweight.", bmi);
    }
    else if (bmi >= 18.5 & bmi <= 24.9)
    {
        printf("Your BMI is %f, That is Healthy Weight.", bmi);
    }
    else
    {
        printf("Your BMI is %f, That is Overweight.", bmi);
    }
}

int main()
{
    float weight, height;
    // float result = 0;
    printf("Enter your weight(kg) : ");
    scanf("%f", &weight);
    if (weight <= 0)
    {
        printf("Weight cannot be %f.", weight);
        return 0;
    }
    printf("Enter your height(m) : ");
    scanf("%f", &height);
    if (height <= 0)
    {
        printf("height cannot be %f.", height);
        return 0;
    }

    // result = calculateBMI(weight, height);
    healthCondition(calculateBMI(weight, height));

    return 0;
}
