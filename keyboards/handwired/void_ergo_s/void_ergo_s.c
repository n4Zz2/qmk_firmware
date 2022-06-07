#include "void_ergo_s.h"

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    // disable pro micro LEDs
    DDRD &= ~(1<<5);
    PORTD &= ~(1<<5);

    DDRB &= ~(1<<0);
    PORTB &= ~(1<<0);

    matrix_init_user();
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}
