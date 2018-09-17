# Handle calls in specific intervals after previous calls

# Methods:

EnoughTimePassed(unsigned long desired_intervall);  // setup object with desired intervall in ms

bool enough_time();       							// check if enough time has passed since last event

void event();             							// manually tell that an event has happened just now

void change_intervall(unsigned long desired_intervall);  //change intervall in ms
