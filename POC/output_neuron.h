#include <string>
#include <vector>
#include <list>

using namespace std;

class output_neuron
{
public:
	bool fired = false;
	bool trained = false;
	bool log_history = false;

	list<int> output_ids;
	list<int> input_weights;
	list<int> recieved_fire_from;
	list<int> recieve_fired_history;

	list<int> fired_history;
	list<int> log_neurons_history;
	list<int> current_state_histroy;
	list<int> current_exception_history;

	int pose_x;
	int pose_y;
	int pose_z;
	int id;
	int decay_rate = 0;
	int recieved_fire = 0;
	int current_state = 0;
	int emition_threshold = 10;
	int transmition_value = 3;

	void initialise(int pose_x_, int pose_y_, int pose_z_, int id_, int decay_rate_, bool log_history_) {
		id = id_;
		pose_x = pose_x_;
		pose_y = pose_y_;
		pose_z = pose_z_;
		decay_rate = decay_rate_;
		log_history = log_history_;
		return;
	}

	bool update() {
		fired = false;
		recieved_fire_from.clear();
		
		if (current_state >= emition_threshold) {
			fired = true;
			current_state = 0;
		}

		if (decay_rate == true) {
			current_state += decay_rate;
		}

		recieved_fire = false;
		trained = false;
		return fired;
	}

	void recieve_fire(int input_id, int transmition_val) {
		current_state -= transmition_val;
		recieved_fire += 1;
		recieved_fire_from.push_back(input_id);
	}

	void log_neurons() {
		current_state_histroy.push_back(current_state);
		fired_history.push_back(fired);
		recieve_fired_history.push_back(recieved_fire);
	}
};

