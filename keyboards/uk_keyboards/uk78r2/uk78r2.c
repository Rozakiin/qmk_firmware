#include "uk78r2.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.


void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
  setPinOutput(D5);
  setPinOutput(D0);
	matrix_init_user();
}

bool led_update_kb(led_t led_state) {
    if(led_update_user(led_state)) {
        writePin(D5, led_state.caps_lock);
        writePin(D0, led_state.scroll_lock);
    }
    return true;
}