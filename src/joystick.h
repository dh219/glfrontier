#ifndef JOYSTICK_H
#define JOYSTICK_H

void Keymap_JoystickUpDown(unsigned int button, int pressed);
void joystick_mouse_motion(unsigned int axis, int value);
void joystick_read_config(const char *path);

#endif