#include <stdio.h>
#include <string.h>

union SensorValue {
    int temperature;
    float pressure;
    char status;
};

struct SensorData {
    int sensorID;
    char sensorType[20];
    union SensorValue data;
};

void printSensorData(struct SensorData sensor) {
    printf("Sensor ID: %d\n", sensor.sensorID);
    printf("Sensor Type: %s\n", sensor.sensorType);

    if (strcmp(sensor.sensorType, "Temperature") == 0) {
        printf("Temperature: %d °C\n", sensor.data.temperature);
    } else if (strcmp(sensor.sensorType, "Pressure") == 0) {
        printf("Pressure: %.2f Pa\n", sensor.data.pressure);
    } else if (strcmp(sensor.sensorType, "Displacement") == 0) {
        printf("Status: %c\n", sensor.data.status);
    } else {
        printf("Unknown sensor type\n");
    }

    printf("------------------------\n");
}

int main() {
    struct SensorData s1, s2, s3;

    // Temperature sensor
    s1.sensorID = 1;
    strcpy(s1.sensorType, "Temperature");
    s1.data.temperature = 25;

    // Pressure sensor
    s2.sensorID = 2;
    strcpy(s2.sensorType, "Pressure");
    s2.data.pressure = 1013.25;

    // Displacement sensor (status char)
    s3.sensorID = 3;
    strcpy(s3.sensorType, "Displacement");
    s3.data.status = 'A';

    printSensorData(s1);
    printSensorData(s2);
    printSensorData(s3);

    return 0;
}
