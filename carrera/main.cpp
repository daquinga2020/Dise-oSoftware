#include <iostream>
#include <math.h>

using namespace std;

typedef enum{F16, FORMULA1, MOTOGP} t_racer;

int get_race_distance(void)
{
    const int MIN_DISTANCE = 100;
    const int MAX_DISTANCE = 2000;
    const int STEP_DISTANCE = 100;
    int race_distance;
    bool incorrect_distance;

    do
    {
        cout<<"Please enter race distance: ";
        cin >> race_distance;

        incorrect_distance = (race_distance < MIN_DISTANCE) ||
                             (race_distance > MAX_DISTANCE) ||
                             (race_distance % STEP_DISTANCE != 0);

        if (incorrect_distance == true)
            cout << "ERROR: Invalid distance!" << endl;

    } while( incorrect_distance == true );

    return race_distance;
}

float get_race_time(const float race_distance, const float accel, const float vmax)
{
    float race_time;

    // MRUA: v*v=2*a*d -> d = (v*v) / (2*a)
    float cross_distance = (vmax * vmax) / (2 *accel);

    if (cross_distance > race_distance)
    {
        // only MRUA
        // d = 0.5*a*t*t -> t=sqrt(2*d/a)
        race_time = sqrt( 2 * race_distance / accel);
    }
    else
    {
        //MRUA and MRU
        //MRUA
        race_time = sqrt( 2* cross_distance / accel);
        //MRU : d = v*t -> t = d/v
        race_time += (race_distance - cross_distance) / vmax;


    }

    return race_time;
}
void print_race_times(const float time_f16, const float time_formula1, const float time_motogp);
t_racer get_race_winner(const float time_f16, const float time_formula1, const float time_motogp, float& time_winner);
void print_race_winner(const t_racer winner, const float time_winner);


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

void print_race_times(const float time_f16, const float time_formula1, const float time_motogp)
{
    cout << "Time F16:"<< time_f16 << "sec" << endl;
    cout << "Time F1:"<< time_formula1 << "sec" <<endl;
    cout << "Time motoGP:" << time_motogp << "sec" << endl;
}

t_racer get_race_winner(const float time_f16, const float time_formula1, const float time_motogp, float& time_winner)
{
    t_racer winner;
    if( ( time_f16 < time_formula1) && (time_f16 < time_motogp) )
    {
        winner = F16;
        time_winner = time_f16;
    }
    else if ( (time_formula1 < time_f16) && (time_formula1 < time_motogp) )
    {
        winner = F16;
        time_winner = time_formula1;
    }
    else
    {
        winner = MOTOGP;
        time_winner = time_motogp;
    }
    return winner;
}
void print_race_winner(const t_racer winner, const float time_winner)
{

    cout << "Winner; ";
    switch (winner)
    {
        case F16:
            cout << "F16 (" << time_winner << ")" << endl;
            break;
        case FORMULA1:
            cout << "F1 (" << time_winner << ")" << endl;
            break;
        case MOTOGP:
            cout << "motoGP (" << time_winner << ")" << endl;
            break;
    }
}
