
#define DAYS 30
#define HOURS 24

int main(void) {
    double temperature_readings[DAYS][HOURS];

    double sum = 0;

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < HOURS; j++) {
            sum += temperature_readings[i][j];
        }
    }

    double average = sum / DAYS * HOURS;
}
