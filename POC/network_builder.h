#include <string>
#include <vector>
#include <list>
#include "neuron.h"

using namespace std;


class network_builder
{
public:
	int in;
	int st;
	int out;
	bool log_history;

	int neuron_range = 5;
	list<neuron> input_neurons;
	list<neuron> standard_neurons;
	list<neuron> output_neurons;
	list<int> input_ids;
	list<int> standard_ids;
	list<int> output_ids;

	void initialise(int in_, int st_, int out_, bool log_history_) {
		in = in_;
		st = st_;
		out = out_;
		log_history = log_history_;
		return;
	}



};

