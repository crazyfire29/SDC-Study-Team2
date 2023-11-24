#ifndef __INPUT_DATA_H__
#define __INPUT_DATA_H__


#define MAX_NUMBER_KEYBOARD_INPUT       32
#define MAX_TITLE_KEYBOARD_INPUT        32
#define MAX_AUTHOR_KEYBOARD_INPUT       32
#define MAX_CONTENTS_KEYBOARD_INPUT     4096

#define MAX_POST_READ_KEYBOARD_INPUT    32

void get_number_keyboard_input(char *number_keyboard_input);
void get_title_keyboard_input(char *title_keyboard_input);
void get_author_keyboard_input(char *author_keyboard_input);
void get_contents_keyboard_input(char *contents_keyboard_input);

// 내용 보기용 입력 데이터
void get_post_read_keyboard_input(char *post_read_keyboard_input);




#endif

