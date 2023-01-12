#include <stdlib.h>
#include <stdio.h>
/* Function prototypes */
double cm_to_inches(double cm);
double inches_to_cm(double inches);
double meters_to_feet(double meters);
double feet_to_meters(double feet);
double kg_to_lbs(double kg);
double lbs_to_kg(double lbs);
double seconds_to_minutes(double seconds);
double minutes_to_seconds(double minutes);
double celsius_to_fahrenheit(double celsius);
double fahrenheit_to_celsius(double fahrenheit);
double km_to_miles(double km);
double miles_to_km(double miles);
double meters_to_yards(double meters);
double yards_to_meters(double yards);
double grams_to_ounces(double grams);
double ounces_to_grams(double ounces);
double hours_to_days(double hours);
double days_to_hours(double days);
double gallons_to_liters(double gallons);
double liters_to_gallons(double liters);
double miles_to_nautical_miles(double miles);
double nautical_miles_to_miles(double nautical_miles);

int main() {
    int choice;
    double input, output;

    printf("Welcome to the unit converter!\n\n");
    printf("Please select a conversion option:\n");
    printf("1. Centimeters to inches\n");
    printf("2. Inches to centimeters\n");
    printf("3. Meters to feet\n");
    printf("4. Feet to meters\n");
    printf("5. Kilograms to pounds\n");
    printf("6. Pounds to kilograms\n");
    printf("7. Seconds to minutes\n");
    printf("8. Minutes to seconds\n");
    printf("9. Celsius to Fahrenheit\n");
    printf("10. Fahrenheit to Celsius\n");
    printf("11. Kilometers to miles\n");
    printf("12. Miles to kilometers\n");
    printf("13. Meters to yards\n");
    printf("14. Yards to meters\n");
    printf("15. Grams to ounces\n");
    printf("16. Ounces to grams\n");
    printf("17. Hours to days\n");
    printf("18. Days to hours\n");
    printf("19. Gallons to liters\n");
    printf("20. Liters to gallons\n");
    printf("21. Miles to nautical miles\n");
    printf("22. Nautical miles to miles\n");
    scanf("%d", &choice);

    printf("\nEnter the value to convert: ");
    scanf("%lf", &input);

    switch(choice) {
        case 1:
            output = cm_to_inches(input);
            printf("%lf centimeters is equivalent to %lf inches\n", input, output);
            break;
        case 2:
            output = inches_to_cm(input);
            printf("%lf inches is equivalent to %lf centimeters\n", input, output);
            break;
        case 3:
            output         = meters_to_feet(input);
            printf("%lf meters is equivalent to %lf feet\n", input, output);
            break;
        case 4:
            output = feet_to_meters(input);
            printf("%lf feet is equivalent to %lf meters\n", input, output);
            break;
        case 5:
            output = kg_to_lbs(input);
            printf("%lf kilograms is equivalent to %lf pounds\n", input, output);
            break;
        case 6:
            output = lbs_to_kg(input);
            printf("%lf pounds is equivalent to %lf kilograms\n", input, output);
            break;
        case 7:
            output = seconds_to_minutes(input);
            printf("%lf seconds is equivalent to %lf minutes\n", input, output);
            break;
        case 8:
            output = minutes_to_seconds(input);
            printf("%lf minutes is equivalent to %lf seconds\n", input, output);
            break;
        case 9:
            output = celsius_to_fahrenheit(input);
            printf("%lf degrees Celsius is equivalent to %lf degrees Fahrenheit\n", input, output);
            break;
        case 10:
            output = fahrenheit_to_celsius(input);
            printf("%lf degrees Fahrenheit is equivalent to %lf degrees Celsius\n", input, output);
            break;
        case 11:
            output = km_to_miles(input);
            printf("%lf kilometers is equivalent to %lf miles\n", input, output);
            break;
        case 12:
            output = miles_to_km(input);
            printf("%lf miles is equivalent to %lf kilometers\n", input, output);
            break;
        case 13:
            output = meters_to_yards(input);
            printf("%lf meters is equivalent to %lf yards\n", input, output);
            break;
        case 14:
            output = yards_to_meters(input);
            printf("%lf yards is equivalent to %lf meters\n", input, output);
            break;
        case 15:
            output = grams_to_ounces(input);
            printf("%lf grams is equivalent to %lf ounces\n", input, output);
            break;
        case 16:
            output = ounces_to_grams(input);
            printf("%lf ounces is equivalent to %lf grams\n", input, output);
            break;
        case 17:
            output = hours_to_days(input);
            printf("%lf hours is equivalent to %lf days\n", input, output);
            break;
        case 18:
            output = days_to_hours(input);
            printf("%lf days is equivalent to %lf hours\n", input, output);
            break;
        case 19:
            output = gallons_to_liters(input);
            printf("%lf gallons is equivalent to %lf liters\n", input, output);
            break;
        case 20:
            output = liters_to_gallons(input);
            printf("%lf liters is equivalent to %lf gallons\n", input, output);
            break;
        case 21:
            output = miles_to_nautical_miles(input);
            printf("%lf miles is equivalent to %lf nautical miles\n", input, output);
            break;
        case 22:
            output = nautical_miles_to_miles(input);
            printf("%lf nautical miles is equivalent to %lf miles\n", input, output);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    return 0;
}

/* Function definitions */
double cm_to_inches(double cm) {
    return cm / 2.54;
}

double inches_to_cm(double inches) {
    return inches * 2.54;
}

double meters_to_feet(double meters) {
    return meters * 3.2808;
}

double feet_to_meters(double feet) {
    return feet / 3.2808;
}

double kg_to_lbs(double kg) {
    return kg * 2.20462;
}

double lbs_to_kg(double lbs) {
    return lbs / 2.20462;
}

double seconds_to_minutes(double seconds) {
    return seconds / 60;
}

double minutes_to_seconds(double minutes) {
    return minutes * 60;
}

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

double km_to_miles(double km) {
    return km / 1.609;
}

double miles_to_km(double miles) {
    return miles * 1.609;
}

double meters_to_yards(double meters) {
    return meters * 1.094;
}

double yards_to_meters(double yards) {
    return yards / 1.094;
}

double grams_to_ounces(double grams) {
    return grams / 28.3495;
}

double ounces_to_grams(double ounces) {
    return ounces * 28.3495;
}

double hours_to_days(double hours) {
    return hours / 24;
}

double days_to_hours(double days) {
    return days * 24;
}

double gallons_to_liters(double gallons) {
    return gallons * 3.785;
}

double liters_to_gallons(double liters) {
    return liters / 3.785;
}

double miles_to_nautical_miles(double miles) {
    return miles * 0.868976;
}

double nautical_miles_to_miles(double nautical_miles) {
    return nautical_miles / 0.868976;
}

