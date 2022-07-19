#pragma once
#include <string>
#include <vector>
#include <list>

using namespace std;

class neuron
{
public:
	int id;
	int pose_x;
	int pose_y;
	int pose_z;
	int decay_rate;
	int emition_threshold = 10;

	float starting_transmition_value = 1.0;
	float current_state = 0.0;

	bool trained;
	bool recieved_fire = false;
	bool log_history = false;
	bool fired = false;

	list<int> recieved_fire_from;
	list<int> output_transmition_values;
	list<int> fired_to_ids;
	list<int> recieve_fired_history;
	list<int> output_ids;

	void initialise(int pose_x_, int pose_y_, int pose_z_, int id_, int decay_rate_, bool log_history_) {
		id = id_;
		pose_x = pose_x_;
		pose_y = pose_y_;
		pose_z = pose_z_;
		decay_rate = decay_rate_;
		log_history = log_history_;
		return;
	}

	void update_neuron(list<neuron> standard_neurons, list<neuron> output_neurons) {
		fired = false;
		list<int> fired_to_ids;
		list<int> recieved_fire_from;

		if (current_state >= emition_threshold) {
			fire(standard_neurons, output_neurons);
			fired = true;
			current_state = 0;
		}
		
		if (decay_rate != 0 && current_state < emition_threshold) {
			current_state += decay_rate;
		}
		recieved_fire = false;
		return;
	}

	void fire(list<neuron> standard_neurons, list<neuron> output_neurons) {
		/*for (int i = 0; i < output_ids.size(); i++) {
			for (int j = 0; j < standard_neurons.size(); j++) {
				if (output_ids[i][1] == standard_neurons[j].id && output_id[0] == "s") { // s == standard 
					}
				}
			{
		*/
		return;
	}



};


/*
def fire(self, standard_neurons, output_neurons) :
	for index, output_id in enumerate(self.output_ids) :
		for st_neuron in standard_neurons :
			if output_id[1] == st_neuron.id and output_id[0] == "standard" :
				st_neuron.recieve_fire(self.output_transmition_values[index], self.id)
				self.fired_to_ids.append(st_neuron.id)
				for out_neuron in output_neurons :
			if output_id[1] == out_neuron.id and output_id[0] == "output" :
				out_neuron.recieve_fire(self.output_transmition_values[index], self.id)
				self.fired_to_ids.append(out_neuron.id)

def update(self, standard_neurons, output_neurons) :
	self.fired = False
	self.fired_to_ids = []
	self.recieved_fire_from = []

	if self.current_state >= 10 :
		self.fire(standard_neurons, output_neurons)
		self.fired = True
		self.value = 0
		self.current_state = 0

	if self.decay_rate:
		self.current_state += self.decay_rate

	if self.current_state > 10:
		self.current_state = 10

	if self.log_history :
		self.log_neurons_history()
		self.recieved_fire = 0
		self.trained = False */