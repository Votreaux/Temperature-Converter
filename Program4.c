#include <stdio.h>
#include <string.h>

int main()
{
    printf("Temperature conversion\n");
    float temperature = 0.0f;
    char initialUnits[50] = "";
    char finalUnits[50] = "";

    printf("What units are you converting from?: ");
    fgets(initialUnits, sizeof(initialUnits), stdin);
    initialUnits[strcspn(initialUnits, "\n")] = '\0';

    printf("What units are you converting to?: ");
    fgets(finalUnits, sizeof(finalUnits), stdin);
    finalUnits[strcspn(finalUnits, "\n")] = '\0';

    if (strcmp(initialUnits, "celsius") == 0 && strcmp(finalUnits, "fahrenheit") == 0)
    {
        float celsius = 0.0f;
        float fahrenheit = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("%.1f in celsius is %.1f in fahrenheit", celsius, fahrenheit);
    }

    else if (strcmp(initialUnits, "celsius") == 0 && strcmp(finalUnits, "kelvin") == 0)
    {
        float celsius = 0.0f;
        float kelvin = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("%.1f in celsius is %.1f in kelvin", celsius, kelvin);
    }

    else if (strcmp(initialUnits, "celsius") == 0 && strcmp(finalUnits, "rankine") == 0)
    {
        float celsius = 0.0f;
        float rankine = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", celsius);
        rankine = (celsius * 1.8) + 491.67;
        printf("%.1f in celsius is %.1f in rankine", celsius, rankine);
    }

    else if (strcmp(initialUnits, "fahrenheit") == 0 && strcmp(finalUnits, "celsius") == 0)
    {
        float fahrenheit = 0.0f;
        float celsius = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", fahrenheit);
        celsius = (5/9) * (fahrenheit - 32);
        printf("%.1f in fahrenheit is %.1f in celsius", fahrenheit, celsius);
    }

    else if (strcmp(initialUnits, "fahrenheit") == 0 && strcmp(finalUnits, "kelvin") == 0)
    {
        float fahrenheit = 0.0f;
        float kelvin = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", fahrenheit);
        kelvin = (5/9) * (fahrenheit - 32 +273.15);
        printf("%.1f in fahrenheit is %.1f in kelvin", fahrenheit, kelvin);
    }

    else if (strcmp(initialUnits, "fahrenheit") == 0 && strcmp(finalUnits, "rankine") == 0)
    {
        float fahrenheit = 0.0f;
        float rankine = 0.0f;
        printf("Enter your temperature ");
        scanf("%f", fahrenheit);
        rankine = fahrenheit + 459.67;
        printf("%.1f in fahrenheit is %.1f in rankine", fahrenheit, rankine);
    }

    else if (strcamp(initialUnits, "kelvin") == 0 && strcmp(finalUnits, "celsius") == 0)
    {
        float kelvin = 0.0f;
        float celsius = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", kelvin);
        celsius = kelvin = 273.15;
        printf("%.1f kelvin is %.1f in celsius", kelvin, celsius);
    }

    else if (strcmp(initialUnits, "kelvin") == 0 && strcmp(finalUnits, "fahrenheit") == 0)
    {
        float kelvin = 0.0f;
        float fahrenheit = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", kelvin);
        fahrenheit = 1.8 * (kelvin - 273.15) + 32;
        printf(".1%f kelvin is %.1f in fahrenheit", kelvin, fahrenheit);
    }

    else if (strcmp(initialUnits, "kelvin") == 0 && strcmp(finalUnits, "rankine") == 0)
    {
        float kelvin = 0.0f;
        float rankine = 0.0f;
        printf("Enter your temperature: ");
        scanf("%f", kelvin);
        rankine = kelvin * (9 / 5);
        printf("%.1f in kelvin is %.1f in rankine", kelvin, rankine);
    }
}