#ifndef VOIDCSFML_WINDOW_H
#define VOIDCSFML_WINDOW_H
#include <voidcsfml/system.h>
#include <voidcsfml/config.h>
VOIDCSFML_API sfml_window_version(int*, int*, int*);
VOIDCSFML_API contextsettings_initialize_emSemSemSemSemSemSGZq(void* self, unsigned int depth, unsigned int stencil, unsigned int antialiasing, unsigned int major, unsigned int minor, unsigned int attributes, unsigned char s_rgb);
VOIDCSFML_API contextsettings_setdepthbits_emS(void* self, unsigned int depth_bits);
VOIDCSFML_API contextsettings_setstencilbits_emS(void* self, unsigned int stencil_bits);
VOIDCSFML_API contextsettings_setantialiasinglevel_emS(void* self, unsigned int antialiasing_level);
VOIDCSFML_API contextsettings_setmajorversion_emS(void* self, unsigned int major_version);
VOIDCSFML_API contextsettings_setminorversion_emS(void* self, unsigned int minor_version);
VOIDCSFML_API contextsettings_setattributeflags_saL(void* self, uint32_t attribute_flags);
VOIDCSFML_API contextsettings_setsrgbcapable_GZq(void* self, unsigned char s_rgb_capable);
VOIDCSFML_API contextsettings_initialize_Fw4(void* self, void* copy);
VOIDCSFML_API context_initialize(void* self);
VOIDCSFML_API context_finalize(void* self);
VOIDCSFML_API context_setactive_GZq(void* self, unsigned char active, unsigned char* result);
VOIDCSFML_API context_getsettings(void* self, void* result);
VOIDCSFML_API context_isextensionavailable_Yy6(char* name, unsigned char* result);
VOIDCSFML_API context_getactivecontext(void** result);
VOIDCSFML_API context_initialize_Fw4emSemS(void* self, void* settings, unsigned int width, unsigned int height);
VOIDCSFML_API joystick_identification_initialize(void* self);
VOIDCSFML_API joystick_identification_getname(void* self, uint32_t** result);
VOIDCSFML_API joystick_identification_setname_Lnu(void* self, size_t name_size, uint32_t* name);
VOIDCSFML_API joystick_identification_getvendorid(void* self, unsigned int* result);
VOIDCSFML_API joystick_identification_setvendorid_emS(void* self, unsigned int vendor_id);
VOIDCSFML_API joystick_identification_getproductid(void* self, unsigned int* result);
VOIDCSFML_API joystick_identification_setproductid_emS(void* self, unsigned int product_id);
VOIDCSFML_API joystick_identification_initialize_ISj(void* self, void* copy);
VOIDCSFML_API joystick_isconnected_emS(unsigned int joystick, unsigned char* result);
VOIDCSFML_API joystick_getbuttoncount_emS(unsigned int joystick, unsigned int* result);
VOIDCSFML_API joystick_hasaxis_emSHdj(unsigned int joystick, int axis, unsigned char* result);
VOIDCSFML_API joystick_isbuttonpressed_emSemS(unsigned int joystick, unsigned int button, unsigned char* result);
VOIDCSFML_API joystick_getaxisposition_emSHdj(unsigned int joystick, int axis, float* result);
VOIDCSFML_API joystick_getidentification_emS(unsigned int joystick, void* result);
VOIDCSFML_API joystick_update();
VOIDCSFML_API keyboard_iskeypressed_cKW(int key, unsigned char* result);
VOIDCSFML_API keyboard_setvirtualkeyboardvisible_GZq(unsigned char visible);
VOIDCSFML_API mouse_isbuttonpressed_Zxg(int button, unsigned char* result);
VOIDCSFML_API mouse_getposition(void* result);
VOIDCSFML_API mouse_getposition_JRh(void* relative_to, void* result);
VOIDCSFML_API mouse_setposition_ufV(void* position);
VOIDCSFML_API mouse_setposition_ufVJRh(void* position, void* relative_to);
VOIDCSFML_API sensor_isavailable_jRE(int sensor, unsigned char* result);
VOIDCSFML_API sensor_setenabled_jREGZq(int sensor, unsigned char enabled);
VOIDCSFML_API sensor_getvalue_jRE(int sensor, void* result);
VOIDCSFML_API event_sizeevent_initialize(void* self);
VOIDCSFML_API event_sizeevent_setwidth_emS(void* self, unsigned int width);
VOIDCSFML_API event_sizeevent_setheight_emS(void* self, unsigned int height);
VOIDCSFML_API event_sizeevent_initialize_isq(void* self, void* copy);
VOIDCSFML_API event_keyevent_initialize(void* self);
VOIDCSFML_API event_keyevent_setcode_cKW(void* self, int code);
VOIDCSFML_API event_keyevent_setalt_GZq(void* self, unsigned char alt);
VOIDCSFML_API event_keyevent_setcontrol_GZq(void* self, unsigned char control);
VOIDCSFML_API event_keyevent_setshift_GZq(void* self, unsigned char shift);
VOIDCSFML_API event_keyevent_setsystem_GZq(void* self, unsigned char system);
VOIDCSFML_API event_keyevent_initialize_wJ8(void* self, void* copy);
VOIDCSFML_API event_textevent_initialize(void* self);
VOIDCSFML_API event_textevent_setunicode_saL(void* self, uint32_t unicode);
VOIDCSFML_API event_textevent_initialize_uku(void* self, void* copy);
VOIDCSFML_API event_mousemoveevent_initialize(void* self);
VOIDCSFML_API event_mousemoveevent_setx_2mh(void* self, int x);
VOIDCSFML_API event_mousemoveevent_sety_2mh(void* self, int y);
VOIDCSFML_API event_mousemoveevent_initialize_1i3(void* self, void* copy);
VOIDCSFML_API event_mousebuttonevent_initialize(void* self);
VOIDCSFML_API event_mousebuttonevent_setbutton_Zxg(void* self, int button);
VOIDCSFML_API event_mousebuttonevent_setx_2mh(void* self, int x);
VOIDCSFML_API event_mousebuttonevent_sety_2mh(void* self, int y);
VOIDCSFML_API event_mousebuttonevent_initialize_Tjo(void* self, void* copy);
VOIDCSFML_API event_mousewheelevent_initialize(void* self);
VOIDCSFML_API event_mousewheelevent_setdelta_2mh(void* self, int delta);
VOIDCSFML_API event_mousewheelevent_setx_2mh(void* self, int x);
VOIDCSFML_API event_mousewheelevent_sety_2mh(void* self, int y);
VOIDCSFML_API event_mousewheelevent_initialize_Wk7(void* self, void* copy);
VOIDCSFML_API event_mousewheelscrollevent_initialize(void* self);
VOIDCSFML_API event_mousewheelscrollevent_setwheel_yiC(void* self, int wheel);
VOIDCSFML_API event_mousewheelscrollevent_setdelta_Bw9(void* self, float delta);
VOIDCSFML_API event_mousewheelscrollevent_setx_2mh(void* self, int x);
VOIDCSFML_API event_mousewheelscrollevent_sety_2mh(void* self, int y);
VOIDCSFML_API event_mousewheelscrollevent_initialize_Am0(void* self, void* copy);
VOIDCSFML_API event_joystickconnectevent_initialize(void* self);
VOIDCSFML_API event_joystickconnectevent_setjoystickid_emS(void* self, unsigned int joystick_id);
VOIDCSFML_API event_joystickconnectevent_initialize_rYL(void* self, void* copy);
VOIDCSFML_API event_joystickmoveevent_initialize(void* self);
VOIDCSFML_API event_joystickmoveevent_setjoystickid_emS(void* self, unsigned int joystick_id);
VOIDCSFML_API event_joystickmoveevent_setaxis_Hdj(void* self, int axis);
VOIDCSFML_API event_joystickmoveevent_setposition_Bw9(void* self, float position);
VOIDCSFML_API event_joystickmoveevent_initialize_S8f(void* self, void* copy);
VOIDCSFML_API event_joystickbuttonevent_initialize(void* self);
VOIDCSFML_API event_joystickbuttonevent_setjoystickid_emS(void* self, unsigned int joystick_id);
VOIDCSFML_API event_joystickbuttonevent_setbutton_emS(void* self, unsigned int button);
VOIDCSFML_API event_joystickbuttonevent_initialize_V0a(void* self, void* copy);
VOIDCSFML_API event_touchevent_initialize(void* self);
VOIDCSFML_API event_touchevent_setfinger_emS(void* self, unsigned int finger);
VOIDCSFML_API event_touchevent_setx_2mh(void* self, int x);
VOIDCSFML_API event_touchevent_sety_2mh(void* self, int y);
VOIDCSFML_API event_touchevent_initialize_1F1(void* self, void* copy);
VOIDCSFML_API event_sensorevent_initialize(void* self);
VOIDCSFML_API event_sensorevent_settype_jRE(void* self, int type);
VOIDCSFML_API event_sensorevent_setx_Bw9(void* self, float x);
VOIDCSFML_API event_sensorevent_sety_Bw9(void* self, float y);
VOIDCSFML_API event_sensorevent_setz_Bw9(void* self, float z);
VOIDCSFML_API event_sensorevent_initialize_L9(void* self, void* copy);
VOIDCSFML_API touch_isdown_emS(unsigned int finger, unsigned char* result);
VOIDCSFML_API touch_getposition_emS(unsigned int finger, void* result);
VOIDCSFML_API touch_getposition_emSJRh(unsigned int finger, void* relative_to, void* result);
VOIDCSFML_API videomode_initialize(void* self);
VOIDCSFML_API videomode_initialize_emSemSemS(void* self, unsigned int width, unsigned int height, unsigned int bits_per_pixel);
VOIDCSFML_API videomode_getdesktopmode(void* result);
VOIDCSFML_API videomode_getfullscreenmodes(void** result, size_t* result_size);
VOIDCSFML_API videomode_isvalid(void* self, unsigned char* result);
VOIDCSFML_API videomode_setwidth_emS(void* self, unsigned int width);
VOIDCSFML_API videomode_setheight_emS(void* self, unsigned int height);
VOIDCSFML_API videomode_setbitsperpixel_emS(void* self, unsigned int bits_per_pixel);
VOIDCSFML_API operator_eq_asWasW(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_ne_asWasW(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_lt_asWasW(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_gt_asWasW(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_le_asWasW(void* left, void* right, unsigned char* result);
VOIDCSFML_API operator_ge_asWasW(void* left, void* right, unsigned char* result);
VOIDCSFML_API videomode_initialize_asW(void* self, void* copy);
VOIDCSFML_API window_initialize(void* self);
VOIDCSFML_API window_initialize_wg0bQssaLFw4(void* self, void* mode, size_t title_size, uint32_t* title, uint32_t style, void* settings);
VOIDCSFML_API window_initialize_rLQFw4(void* self, WindowHandle handle, void* settings);
VOIDCSFML_API window_finalize(void* self);
VOIDCSFML_API window_create_wg0bQssaLFw4(void* self, void* mode, size_t title_size, uint32_t* title, uint32_t style, void* settings);
VOIDCSFML_API window_create_rLQFw4(void* self, WindowHandle handle, void* settings);
VOIDCSFML_API window_close(void* self);
VOIDCSFML_API window_isopen(void* self, unsigned char* result);
VOIDCSFML_API window_getsettings(void* self, void* result);
VOIDCSFML_API window_pollevent_YJW(void* self, void* event, unsigned char* result);
VOIDCSFML_API window_waitevent_YJW(void* self, void* event, unsigned char* result);
VOIDCSFML_API window_getposition(void* self, void* result);
VOIDCSFML_API window_setposition_ufV(void* self, void* position);
VOIDCSFML_API window_getsize(void* self, void* result);
VOIDCSFML_API window_setsize_DXO(void* self, void* size);
VOIDCSFML_API window_settitle_bQs(void* self, size_t title_size, uint32_t* title);
VOIDCSFML_API window_seticon_emSemS843(void* self, unsigned int width, unsigned int height, uint8_t* pixels);
VOIDCSFML_API window_setvisible_GZq(void* self, unsigned char visible);
VOIDCSFML_API window_setverticalsyncenabled_GZq(void* self, unsigned char enabled);
VOIDCSFML_API window_setmousecursorvisible_GZq(void* self, unsigned char visible);
VOIDCSFML_API window_setmousecursorgrabbed_GZq(void* self, unsigned char grabbed);
VOIDCSFML_API window_setkeyrepeatenabled_GZq(void* self, unsigned char enabled);
VOIDCSFML_API window_setframeratelimit_emS(void* self, unsigned int limit);
VOIDCSFML_API window_setjoystickthreshold_Bw9(void* self, float threshold);
VOIDCSFML_API window_setactive_GZq(void* self, unsigned char active, unsigned char* result);
VOIDCSFML_API window_requestfocus(void* self);
VOIDCSFML_API window_hasfocus(void* self, unsigned char* result);
VOIDCSFML_API window_display(void* self);
VOIDCSFML_API window_getsystemhandle(void* self, WindowHandle* result);
#endif