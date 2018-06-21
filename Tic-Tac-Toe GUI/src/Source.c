#include <Windows.h>
#include "Function and global variable declaration.h"

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_CREATE:
	{
		wchar_t buffer[128];
		wsprintf(buffer, L"Player X's turn :");

		stat_text = CreateWindow(L"Static", buffer,
			WS_CHILD | WS_VISIBLE | SS_CENTER,
			10, 10, 150, 50,
			hwnd, 0, 0, 0);

		hwnd_button_1 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER | SS_CENTER,
			10, 60, 50, 50, hwnd,
			(HMENU)button_1, NULL, NULL);

		hwnd_button_2 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			60, 60, 50, 50, hwnd,
			(HMENU)button_2, NULL, NULL);

		hwnd_button_3 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			110, 60, 50, 50, hwnd,
			(HMENU)button_3, NULL, NULL);

		hwnd_button_4 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			10, 110, 50, 50, hwnd,
			(HMENU)button_4, NULL, NULL);

		hwnd_button_5 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			60, 110, 50, 50, hwnd,
			(HMENU)button_5, NULL, NULL);

		hwnd_button_6 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			110, 110, 50, 50, hwnd,
			(HMENU)button_6, NULL, NULL);

		hwnd_button_7 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			10, 160, 50, 50, hwnd,
			(HMENU)button_7, NULL, NULL);

		hwnd_button_8 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			60, 160, 50, 50, hwnd,
			(HMENU)button_8, NULL, NULL);

		hwnd_button_9 = CreateWindow(L"Button", L"",
			WS_CHILD | WS_VISIBLE | WS_BORDER,
			110, 160, 50, 50, hwnd,
			(HMENU)button_9, NULL, NULL);
	}
	break;
	case WM_COMMAND:
	{
		if (turn <= 8)
		{
			if (LOWORD(wParam) == button_1)
			{
				if (GetWindowTextLength(hwnd_button_1) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_1, L"X");

						tic_tac_toe[0] = 'x';

						SetWindowText(stat_text, L"Player O's turn:");

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_1, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[0] = 'o';

						++turn;

						player_number = 'x';

					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_2)
			{
				if (GetWindowTextLength(hwnd_button_2) == 0)
				{
					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_2, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[1] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_2, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[1] = 'o';

						++turn;

						player_number = 'x';

					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_3)
			{
				if (GetWindowTextLength(hwnd_button_3) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_3, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[2] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_3, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[2] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_4)
			{
				if (GetWindowTextLength(hwnd_button_4) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_4, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[3] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_4, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[3] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_5)
			{
				if (GetWindowTextLength(hwnd_button_5) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_5, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[4] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_5, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[4] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);

				}
			}
			else if (LOWORD(wParam) == button_6)
			{
				if (GetWindowTextLength(hwnd_button_6) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_6, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[5] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_6, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[5] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_7)
			{
				if (GetWindowTextLength(hwnd_button_7) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_7, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[6] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_7, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[6] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_8)
			{
				if (GetWindowTextLength(hwnd_button_8) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_8, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[7] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_8, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[7] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			else if (LOWORD(wParam) == button_9)
			{
				if (GetWindowTextLength(hwnd_button_9) == 0)
				{

					if (player_number == 'x')
					{
						SetWindowText(hwnd_button_9, L"X");

						SetWindowText(stat_text, L"Player O's turn:");

						tic_tac_toe[8] = 'x';

						++turn;

						player_number = 'o';
					}
					else
					{
						SetWindowText(hwnd_button_9, L"O");

						SetWindowText(stat_text, L"Player X's turn:");

						tic_tac_toe[8] = 'o';

						++turn;

						player_number = 'x';
					}
				}
				else
				{
					MessageBox(NULL, L"This position has been choosen", L"Error", MB_OK);
				}
			}
			check_pattern();
		}
		else
		{
			MessageBox(NULL, L"It's a draw match", L"Result", MB_OK);
		}
	}break;

	case WM_CLOSE:
	{
		DestroyWindow(hwnd);
	}
	break;
	case WM_DESTROY:
	{
		PostQuitMessage(0);
	}
	break;
	default:
	{
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE h, HINSTANCE prev, LPSTR CmdLine, int Cmdshow)
{
	ZeroMemory(tic_tac_toe, 9);

	const wchar_t appName[] = L"Exercise";

	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbWndExtra = 0;
	wc.cbClsExtra = 0;
	wc.hInstance = h;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszClassName = appName;
	wc.lpszMenuName = NULL;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))
	{
		MessageBox(NULL, L"Error registering Window!", L"Error", MB_OK);

		return 0;
	}

	hwnd_app = CreateWindowEx(WS_EX_CLIENTEDGE,
		appName,
		L" tic tac toe",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 280, 260, NULL, NULL, h, NULL);

	if (NULL == hwnd_app)
	{
		MessageBox(NULL, L"Error creating Window!", L"Error", MB_OK);

		return 0;
	}

	ShowWindow(hwnd_app, Cmdshow);
	UpdateWindow(hwnd_app);

	MSG message;

	while (GetMessage(&message, NULL, 0, 0))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}
	return (int)message.wParam;

}

void check_pattern(void)
{
	char win_pattern = 0;

	check_horizontal_pattern(&win_pattern);
	check_vertical_pattern(&win_pattern);
	check_diagonal_left(&win_pattern);
	check_diagonal_right(&win_pattern);

	if (win_pattern)
	{
		pop_up_player_win(win_pattern);
	}
}

void checking_individual(int start_pos, int no_jump, char* result)
{
	char comparing_char = tic_tac_toe[start_pos];
	int similarity_counter = 0;
	int loop_break_value = start_pos + no_jump * 2;

	for (int pos = start_pos; pos <= loop_break_value; pos += no_jump)
	{
		if (comparing_char == tic_tac_toe[pos] && comparing_char != 0)
		{
			++similarity_counter;
		}
	}

	if (similarity_counter == 3)
	{
		(*result) = comparing_char;
	}
}

void check_horizontal_pattern(char* result)
{
	if ((*result) != 0)
	{
		return;
	}
	else
	{
		for (int start_pos = 0; start_pos < NUMBER_SQUARE; start_pos += 3)
		{
			checking_individual(start_pos, 1, result);
		}
	}
}

void check_vertical_pattern(char* result)
{
	if ((*result) != 0)
	{
		return;
	}
	else
	{
		for (int start_pos = 0; start_pos < NUMBER_SQUARE; ++start_pos)
		{
			checking_individual(start_pos, 3, result);
		}
	}
}

void check_diagonal_left(char* result)
{
	if ( (*result) != NULL)
	{
		return;
	}
	else
	{
		checking_individual(0, 4, result);
	}
}

void check_diagonal_right(char* result)
{
	if ((*result) != NULL)
	{
		return;
	}
	else
	{
		checking_individual(2, 2, result);
	}
}

void pop_up_player_win(char player_win)
{
	wchar_t convert = (wchar_t)player_win;

	wchar_t print_out_buffer[128];

	ZeroMemory(print_out_buffer, sizeof(wchar_t) * 128);

	wsprintf(print_out_buffer, L"The winner is player %c", convert);

	MessageBox(NULL, print_out_buffer, L"Result", MB_OK);

	DestroyWindow(hwnd_app);
}