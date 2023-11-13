
#include "race.h"

int main()
{
    const float F16_ACCEL = 7;
    const float F16_VMAX = 2400;
    const float FORMULA1_ACCEL = 9;
    const float FORMULA1_VMAX = 380;
    const float MOTOGP_ACCEL = 10;
    const float MOTOGP_VMAX = 350;
    const float KMH_TO_MTS = (1000.0 / 3600.0);

    int distance = get_race_distance();
    float time_f16 = get_race_time(distance, F16_ACCEL, F16_VMAX * KMH_TO_MTS);
    float time_formula1 = get_race_time(distance, FORMULA1_ACCEL, FORMULA1_VMAX * KMH_TO_MTS);
    float time_motogp = get_race_time(distance, MOTOGP_ACCEL, MOTOGP_VMAX * KMH_TO_MTS);


    print_race_times(time_f16, time_formula1, time_motogp);
    float time_winner;
    t_racer winner = get_race_winner(time_f16, time_formula1, time_motogp, time_winner);
    print_race_winner(winner, time_winner);

    return 0;
}
