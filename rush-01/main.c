#include <stdio.h>
#include <unistd.h>

void fill_boxes(char tab_modal[6][6], char tab_result[4][4])
{
	int i;
	int j;

	char pos_up;
	char pos_down;
	char pos_left;
	char pos_right;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			pos_up = tab_modal[i - 1][j];
			pos_down = tab_modal[i + 1][j];
			pos_left = tab_modal[i][j - 1];
			pos_right = tab_modal[i][j + 1];

			// fill corner of matrix
			if (pos_up == '4' && pos_left == '4')
			{
				tab_modal[i][j] = '1';
				tab_result[i - 1][j - 1] = '1';
			}
			else if (pos_up == '1' && pos_right == '1')
			{
				tab_modal[i][j] = '4';
				tab_result[i - 1][j - 1] = '4';
			}
			else if (pos_down == '1' && pos_left == '1')
			{
				tab_modal[i][j] = '4';
				tab_result[i - 1][j - 1] = '4';
			} // fill remainer of matrix
			else if (pos_up == pos_left && pos_up != '0')
			{
				if (pos_up == '4')
				{
					tab_modal[i][j] = '1';
					tab_result[i - 1][j - 1] = '1';
				}
				else
				{
					tab_modal[i][j] = pos_up + 1;
					tab_result[i - 1][j - 1] = pos_up + 1;
				}
			}
			else
			{
				if (pos_up > pos_left)
				{
					tab_modal[i][j] = pos_up - 1;
					tab_result[i - 1][j - 1] = pos_up - 1;
				}
				else
				{
					tab_modal[i][j] = pos_left - 1;
					tab_result[i - 1][j - 1] = pos_left - 1;
				}
			}
			j++;
		}
		i++;
	}
}

void draw_matrix(char **argv, char tab_modal[6][6], char tab_result[4][4])
{
	int i;
	int j;
	int up = 0;
	int down = 8;
	int left = 16;
	int right = 24;

	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == 5) || (i == 5 && j == 5) || (i == 5 && j == 0))
			{
				tab_modal[i][j] = '*';
			}
			else
			{
				if (i == 0 && j <= 5)
				{
					// col-up
					tab_modal[i][j] = argv[1][up];
					up += 2;
				}
				else if (i == 5 && j <= 5)
				{
					// col-down
					tab_modal[i][j] = argv[1][down];
					down += 2;
				}
				else if (j == 0 && i <= 5)
				{
					// row-left
					tab_modal[i][j] = argv[1][left];
					left += 2;
				}
				else if (j == 5 && i <= 5)
				{
					// row-right
					tab_modal[i][j] = argv[1][right];
					right += 2;
				}
				else
				{
					tab_modal[i][j] = '0';
					tab_result[i - 1][j - 1] = '0';
				}
			}
			j++;
		}
		i++;
	}
}

void write_matrix(char tab_result[4][4])
{
	int row, columns;
	for (row = 0; row <= 3; row++)
	{
		for (columns = 0; columns <= 3; columns++)
		{
			write(1, &tab_result[row][columns], 1);
			if (columns != 3)
			{
				write(1, " ", 1);
			}
		}
		write(1, "\n", 1);
	}
}

int ft_strlen(char *argv)
{
	int i;
	i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}

	return (i);
}

int main(int argc, char **argv)
{
	char tab_result[4][4];
	char tab_modal[6][6];
	if (argc != 2)
	{
		return (write(1, "Error syntax\n", 12));
	}
	else if (ft_strlen(argv[1]) != 31)
	{
		return (write(1, "Error value input\n", 18));
	}
	else
	{
		draw_matrix(argv, tab_modal, tab_result);
		fill_boxes(tab_modal, tab_result);
		write_matrix(tab_result);
	}

	// printf mmatrix
	// show_tab_modal
	// for (row = 0; row <= 5; row++)
	// {
	// 	for (columns = 0; columns <= 5; columns++)
	// 	{
	// 		printf("%c  ", tab_modal[row][columns]);
	// 	}
	// 	printf("\n");
	// }
	return (0);
}