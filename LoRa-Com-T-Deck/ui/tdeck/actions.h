#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_bt_menu(lv_event_t * e);
extern void action_bt_setup(lv_event_t * e);
extern void action_bt_messages(lv_event_t * e);
extern void action_bt_write(lv_event_t * e);
extern void action_bt_ping_pong(lv_event_t * e);
extern void action_bt_home(lv_event_t * e);
extern void action_bt_symbols(lv_event_t * e);
extern void action_bt_sen_dmsg(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/