//
// Created by mchernosky on 11/24/24.
//

#ifndef CMAKE_UNIT_TEST_STATE_H
#define CMAKE_UNIT_TEST_STATE_H

typedef enum state {
    STATE_NOT_SET,
    STATE_INIT,
    STATE_READY
} state_t;

state_t get_next_state(state_t current_state);

#endif //CMAKE_UNIT_TEST_STATE_H
