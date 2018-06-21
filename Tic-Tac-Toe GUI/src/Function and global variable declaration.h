#pragma once
#include <Windows.h>
#ifndef _checking_who_win
#define _checking_who_win
#define NUMBER_SQUARE 9
#define NUMBER_PATTERN_CHECK 10
#define MAX_JUMP 5

enum button
{
	button_1 = 1000,
	button_2 = 1001,
	button_3 = 1002,
	button_4 = 1003,
	button_5 = 1004,
	button_6 = 1005,
	button_7 = 1006,
	button_8 = 1007,
	button_9 = 1008
};

typedef enum _Boolean
{
	false,
	true
} Bool;

HWND stat_text = 0;
HWND hwnd_app = 0;
HWND hwnd_button_1 = 0;
HWND hwnd_button_2 = 0;
HWND hwnd_button_3 = 0;
HWND hwnd_button_4 = 0;
HWND hwnd_button_5 = 0;
HWND hwnd_button_6 = 0;
HWND hwnd_button_7 = 0;
HWND hwnd_button_8 = 0;
HWND hwnd_button_9 = 0;

char tic_tac_toe[9]; 
int player_number = 'x';
int turn = 0;

void check_pattern(void);
void checking_individual(int start_pos, int no_jump, char* result);
void pop_up_player_win(char player_win);
void check_horizontal_pattern(char* result);
void check_vertical_pattern(char* result);
void check_diagonal_left(char* result);
void check_diagonal_right(char* result);

#endif // !_checking_who_win
 
