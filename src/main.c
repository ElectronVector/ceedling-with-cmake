#include "ui.h"
#include "state.h"

static void update_ui(state_t state) {
    if (state == STATE_READY) {
        ui_set_status_good();
    }
    else {
        ui_set_status_fail();
    }
}

int main(void) {
    state_t state = STATE_NOT_SET;

    for (int i = 0; i < 5; i++){
        state = get_next_state(state);
        update_ui(state);
    }

    return 0;
}
