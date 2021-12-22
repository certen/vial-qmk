//Tap Dance Declarations

enum { ESC_GR = 0, 
, W_2, E_3, R_4, T_5, Y_6, U_7, I_8, O_9, P_0, J_MIN, K_EQU, L_LBRA, COL_RBRA, };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { [_BASE] = LAYOUT( TD(ESC_GR), TD(Q_1), TD(W_2), TD(E_3), TD(R_4), TD(T_5), TD(Y_6), TD(U_7), TD(I_8), TD(O_9), TD(P_0),QUOT,BSPC,
TABFN1, A, S, D, F, G, H, TD(J_MIN), TD(K_EQU), TD(L_LBRA), TD(COL_RBRA), ENTFN1,
LSPO, Z, X, C, V, B, N, M, COMM, DOT, UP, RSPC,
LCTL, LGUI, LALT, DEL, ENTFN2, SPACE, SLASH, LEFT, DOWN, RIGHT )

};

//Tap Dance Definitions

qk_tap_dance_action_t tap_dance_actions[] = { [ESC_GR] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_GRV), //Tap once for ESC, twice for `

[Q_1] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_1), //Tap once for Q, twice for 1/!

[W_2] = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_2), //Tap once for W, twice for 2/@

[E_3] = ACTION_TAP_DANCE_DOUBLE(KC_E, KC_3), //Tap once for E, twice for 3/#

[R_4] = ACTION_TAP_DANCE_DOUBLE(KC_R, KC_4), //Tap once for R, twice for 4/$

[T_5] = ACTION_TAP_DANCE_DOUBLE(KC_T, KC_5), //Tap once for T, twice for 5/%

[Y_6] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_6), //Tap once for Y, twice for 6/^

[U_7] = ACTION_TAP_DANCE_DOUBLE(KC_U, KC_7), //Tap once for U, twice for 7/&

[I_8] = ACTION_TAP_DANCE_DOUBLE(KC_I, KC_8), //Tap once for I, twice for 8/*

[O_9] = ACTION_TAP_DANCE_DOUBLE(KC_O, KC_9), //Tap once for O, twice for 9/)

[P_0] = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_0), //Tap once for P, twice for 0/)

[J_MIN] = ACTION_TAP_DANCE_DOUBLE(KC_J, KC_MINS), //Tap once for J, twice for -

[K_EQU] = ACTION_TAP_DANCE_DOUBLE(KC_K, KC_EQL), //Tap once for K, twice for =

[L_LBRA] = ACTION_TAP_DANCE_DOUBLE(KC_L, KC_LBRC), //Tap once for L, twice for [

[COL_RBRA] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_RBRC), //Tap once for ;, twice for ]

// Other declarations would go here, separated by commas, if you have them };