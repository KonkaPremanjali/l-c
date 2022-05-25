int main()
{
    float meter,feet,inches,centimeter,km;
    printf("enter no of km:");
    scanf("%f",&km);
    meter = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    centimeter = km * 100000;
    printf("Meter=%f\n",meter);
    printf("feet=%f\n",feet);
    printf("inches=%f\n",inches);
    printf("centimeter=%f\n",centimeter);
    return 0;
}