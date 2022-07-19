#include <string>
#include <vector>
#include <list>
#include "neuron.h"

using namespace std; 
class input_neuron
{
public:
	bool fired = false;
	bool trained = false;

	list<int> output_ids;
	list<int> input_weights;
	list<int> fired_to_ids;
	list<int> output_transmition_values;
	list<int> dummy;


	int id;
	int pose_x;
	int pose_y;
	int pose_z;
	int emition_threshold = 10;
	int starting_transmition_value = 1;

	void update(int frequency, list<neuron>) {
		fired = false;
	}

};

