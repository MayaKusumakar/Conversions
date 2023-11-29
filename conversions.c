// Online C compiler to run C program online
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// this function checks if the input entered by the user is in the correct
// format. It takes in the number of arguments needed and the number of
// arguments read from the user. The function returns true or false depending on
// whether the format is valid or not.
bool isValidFormat(const int num_args_needed, const int num_args_read,
                   bool should_be_last_value_on_line) {
  bool format_is_correct = num_args_read == num_args_needed;
  if (should_be_last_value_on_line) {
    char should_be_newline = '?';
    scanf("%c", &should_be_newline);
    format_is_correct = format_is_correct && should_be_newline == '\n';
  }
  return format_is_correct;
}
// converts the temperature from degree kelvin or farenheit to celsius. Takes in
// the initial temperature, the temperature unit of the temperautre and the
// letter of the second temperature. The function returns final temp as a double
// which is the converted temperature in celsius.
double convertToCelsius(double initialTemp, char firstUnit, char secondUnit) {
  double finalTemp;
  if (firstUnit == 'K' && secondUnit == 'C') {
    finalTemp = initialTemp - 273.15;
  }
  if (firstUnit == 'F' && secondUnit == 'C') {
    finalTemp = (initialTemp - 32.0) * (5.0 / 9.0);
  }
  return finalTemp;
}
// This function converts the temperature from degree celsius or Kelvin to
// farenheit. This function takes in the initial temperature, the letter of the
// first unit and the letter of the second unit it needs to be changed to. The
// double value of the converted temperature in farenheit is returned
double convertToFahrenheit(double initialTemp, char firstUnit,
                           char secondUnit) {
  double finalTemp;
  if (firstUnit == 'K' && secondUnit == 'F') {
    finalTemp = (initialTemp - 273.15) * (9.0 / 5.0) + 32.0;
  }
  if (firstUnit == 'C' && secondUnit == 'F') {
    finalTemp = (initialTemp * (9.0 / 5.0)) + 32;
  }
  return finalTemp;
}
// This function converts the temperature from celsius or fareheit to kelvin.
// This function takes in the initial temperature, the letter of the first unit
// and the letter of the second unit it needs to be changed to. The double value
// of the converted temperature in kelvin is returned
double convertToKelvin(double initialTemp, char firstUnit, char secondUnit) {
  double finalTemp;
  if (firstUnit == 'F' && secondUnit == 'K') {
    finalTemp = (initialTemp - 32) * (5.0 / 9.0) + 273.15;
  } else if (firstUnit == 'C' && secondUnit == 'K') {
    finalTemp = initialTemp + 273.15;
  }
  return finalTemp;
}
// This function converts the distace from the given unit distance to inches.
// This function takes parameters for the initial distance, the letter of the
// first unit and the letter of the unit it needs to be changed to. The double
// value of the converted distance in inches is returned.
double convertToInches(double initialDistance, char firstUnit,
                       char secondUnit) {
  double finalDistance;
  if (firstUnit == 'F' && secondUnit == 'I') {
    finalDistance = initialDistance * 12;
  } else if (firstUnit == 'Y' && secondUnit == 'I') {
    finalDistance = initialDistance * 36;
  } else if (firstUnit == 'M' && secondUnit == 'I') {
    finalDistance = initialDistance * 63360;
  }
  return finalDistance;
}
// converts the distance from the given unit to feet. This function takes
// parameters for the initial distance, the letter of the first unit and the
// letter of the unit it needs to be changed to. The double value of the
// converted distance in feet is returned.
double convertToFeet(double initialDistance, char firstUnit, char secondUnit) {
  double finalDistance;
  if (firstUnit == 'I' && secondUnit == 'F') {
    finalDistance = initialDistance / 12;
  } else if (firstUnit == 'Y' && secondUnit == 'F') {
    finalDistance = initialDistance * 3;
  } else if (firstUnit == 'M' && secondUnit == 'F') {
    finalDistance = initialDistance * 5280;
  }
  return finalDistance;
}
// converts thhe distance from the given unit to Yards. This function takes
// parameters for the initial distance, the letter of the first unit and the
// letter of the unit it needs to be changed to. The double value of the
// converted distance in yards is returned.
double convertToYards(double initialDistance, char firstUnit, char secondUnit) {
  double finalDistance;
  if (firstUnit == 'I' && secondUnit == 'Y') {
    finalDistance = initialDistance / 36;
  } else if (firstUnit == 'F' && secondUnit == 'Y') {
    finalDistance = initialDistance / 3;
  } else if (firstUnit == 'M' && secondUnit == 'Y') {
    finalDistance = initialDistance * 1760;
  }
  return finalDistance;
}
// converts the distance from current unit to miles. This function takes in the
// initial distance, the letter of the first unit, and the letter of the second
// unit. The function returns the converted distance in miles.
double convertToMiles(double initialDistance, char firstUnit, char secondUnit) {
  double finalDistance;
  if (firstUnit == 'I' && secondUnit == 'M') {
    finalDistance = initialDistance / 63360;
  }

  else if (firstUnit == 'F' && secondUnit == 'M') {
    finalDistance = initialDistance / 5280;

  } else if (firstUnit == 'Y' && secondUnit == 'M') {
    finalDistance = initialDistance / 1760;
  }
  return finalDistance;
}
// Checks wheather the user wants to change distance or temperature and takes
// the input from the user accordingly. 0 is returned at the end of the program.
int main() {
  char choice;
  double initialTemp;
  char firstUnit;
  char secondUnit;
  printf("Pick the type of conversion that you would like to do.\n");
  printf("T or t for temperature\n");
  printf("D or d for distance\n");
  printf("Enter your choice:");
  scanf(" %c", &choice);
  if (!(isValidFormat(1, 1, true))) {
    printf("Invalid formatting. Ending program.");
    exit(0);
  }

  choice = toupper(choice);
  if (choice == 't' || choice == 'T') {
    printf("Enter the temperature followed by its suffix (F, C, or K):");
    scanf(" %lf %c", &initialTemp, &firstUnit);
    if (!(isValidFormat(2, 2, true))) {
      printf("Invalid formatting. Ending program.");
      exit(0);
    }

    firstUnit = toupper(firstUnit);
    if (firstUnit == 'F' || firstUnit == 'C' || firstUnit == 'K') {

    } else {
      printf("%c is not a valid temperature type. Ending program.", firstUnit);
      exit(0);
    }
    printf("Enter the new unit type (F, C, or K):");
    scanf(" %c", &secondUnit);
    if (!(isValidFormat(1, 1, true))) {
      printf("Invalid formatting. Ending program.");
      exit(0);
    }
    secondUnit = toupper(secondUnit);

    if (secondUnit == 'C' || secondUnit == 'F' || secondUnit == 'K') {

    } else {
      printf("%c is not a valid temperature type. Ending program.", secondUnit);
      exit(0);
    }
    // printf("%c %c", firstUnit, secondUnit);

    if (firstUnit == 'K' && secondUnit == 'C') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit,
             convertToCelsius(initialTemp, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'C') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit,
             convertToCelsius(initialTemp, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'K' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit,
             convertToFahrenheit(initialTemp, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'C' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit,
             convertToFahrenheit(initialTemp, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'C' && secondUnit == 'K') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit,
             convertToKelvin(initialTemp, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'K') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit,
             convertToKelvin(initialTemp, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'C' && secondUnit == 'C') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit, initialTemp,
             secondUnit);
    } else if (firstUnit == 'K' && secondUnit == 'K') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit, initialTemp,
             secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialTemp, firstUnit, initialTemp,
             secondUnit);
    }

  } else if (choice == 'd' || choice == 'D') {
    double initialDistance;
    char firstUnit;
    char secondUnit;
    printf("Enter the distance followed by its suffix (I,F,Y,M):");
    scanf(" %lf %c", &initialDistance, &firstUnit);
    if (!(isValidFormat(2, 2, true))) {
      printf("Invalid formatting. Ending program.");
      exit(0);
    }
    firstUnit = toupper(firstUnit);
    if (firstUnit == 'I' || firstUnit == 'F' || firstUnit == 'Y' ||
        firstUnit == 'M') {

    } else {
      printf("%c is not a valid distance type. Ending program.", firstUnit);
      exit(0);
    }
    printf("Enter the new unit type (I,F,Y,M):");
    scanf(" %c", &secondUnit);
    if (!(isValidFormat(1, 1, true))) {
      printf("Invalid formatting. Ending program.");
      exit(0);
    }

    secondUnit = toupper(secondUnit);

    if (secondUnit == 'I' || secondUnit == 'F' || secondUnit == 'Y' ||
        secondUnit == 'M') {

    } else {
      printf("%c is not a valid distance type. Ending program.", secondUnit);
      exit(0);
    }

    if (firstUnit == 'I' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToFeet(initialDistance, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'I' && secondUnit == 'Y') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToYards(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'I' && secondUnit == 'M') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToMiles(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'I') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToInches(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'Y') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToYards(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'M') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToMiles(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'Y' && secondUnit == 'I') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToInches(initialDistance, firstUnit, secondUnit),
             secondUnit);
    }

    else if (firstUnit == 'Y' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToFeet(initialDistance, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'Y' && secondUnit == 'M') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToMiles(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'M' && secondUnit == 'I') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToInches(initialDistance, firstUnit, secondUnit),
             secondUnit);
    }

    else if (firstUnit == 'M' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToFeet(initialDistance, firstUnit, secondUnit), secondUnit);
    } else if (firstUnit == 'M' && secondUnit == 'Y') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             convertToYards(initialDistance, firstUnit, secondUnit),
             secondUnit);
    } else if (firstUnit == 'I' && secondUnit == 'I') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             initialDistance, secondUnit);
    } else if (firstUnit == 'Y' && secondUnit == 'Y') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             initialDistance, secondUnit);
    } else if (firstUnit == 'F' && secondUnit == 'F') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             initialDistance, secondUnit);
    } else if (firstUnit == 'M' && secondUnit == 'M') {
      printf("%.2lf %c is %.2lf %c", initialDistance, firstUnit,
             initialDistance, secondUnit);
    }

  } else {
    printf("Unknown conversion type %c chosen. Ending program.", choice);
    exit(0);
  }

  return 0;
}
