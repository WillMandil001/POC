#include <iostream>
#include <vector>
#include <string>
#include "neuron.h"
#include "network_builder.h"


using namespace std;

int main()
{
    neuron detNeuron;
    detNeuron.initialise(10, 10, 10, 0, 1.0, false);

    cout << detNeuron.decay_rate;
    
    return 0;
}