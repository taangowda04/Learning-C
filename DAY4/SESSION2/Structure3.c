#include <stdio.h>
#include <stdlib.h>
union Value
{
    float temperature;
    char door;
    long pulses;
};
typedef struct
{
    int sensor_id;
    char kind;
    union Value value;
} Reading;
struct AllValues
{
    int sensor_id;
    char kind;
    float temperature;
    char door;
    long pulses;
};
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 1000)
    {
        printf("INVALID COUNT\n");
        return 0;
    }
    Reading *r = malloc(n * sizeof(Reading));
    if (r == NULL)
    {
        return 1;
    }
    // Read and validate sensor readings
    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &r[i].sensor_id, &r[i].kind);
        switch (r[i].kind)
        {
            case 'T':
                scanf("%f", &r[i].value.temperature);
                break;
            case 'D':
                scanf(" %c", &r[i].value.door);

                if (r[i].value.door != 'O' &&
                    r[i].value.door != 'C')
                {
                    printf("INVALID KIND\n");
                    free(r);
                    return 0;
                }
                break;
            case 'P':
                scanf("%ld", &r[i].value.pulses);
                break;
            default:
                printf("INVALID KIND\n");
                free(r);
                return 0;
        }
    }
    printf("SENSOR REPORT\n");
    // Print sensor readings
    for (int i = 0; i < n; i++)
    {
        switch (r[i].kind)
        {
            case 'T':
                printf("Sensor %d temperature %.2f C\n",
                       r[i].sensor_id,
                       r[i].value.temperature);
                break;

            case 'D':
                if (r[i].value.door == 'O')
                {
                    printf("Sensor %d door OPEN\n",
                           r[i].sensor_id);
                }
                else
                {
                    printf("Sensor %d door CLOSED\n",
                           r[i].sensor_id);
                }
                break;

            case 'P':
                printf("Sensor %d pulses %ld\n",
                       r[i].sensor_id,
                       r[i].value.pulses);
                break;
        }
    }

    // Memory footprint comparison
    size_t union_size = sizeof(union Value);
    size_t reading_size = sizeof(Reading);
    size_t all_fields_size = sizeof(struct AllValues);

    printf("sizeof(union Value): %zu\n", union_size);
    printf("sizeof(Reading) with union: %zu\n", reading_size);
    printf("sizeof(Reading) with all fields: %zu\n",
           all_fields_size);
    printf("Bytes saved per record: %zu\n",
           all_fields_size - reading_size);

    free(r);

    return 0;
}