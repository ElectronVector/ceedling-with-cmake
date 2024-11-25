//
// Created by mchernosky on 11/24/24.
//

#include "state.h"

static state_t current_state = STATE_NOT_SET;

state_t get_next_state(state_t current_state) {
    switch (current_state) {
        case STATE_NOT_SET:
            current_state = STATE_INIT;
            break;
        case STATE_INIT:
            current_state = STATE_READY;
            break;
        case STATE_READY:
            current_state = STATE_READY;
            break;
        default:
            current_state = STATE_NOT_SET;
    }
    return current_state;
}