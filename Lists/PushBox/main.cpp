#include <iostream>
using namespace std;

void getInput();
void updateGame();
void draw();
void initGame();
void checkAround(char ch);

const int width = 8;
const int length = 5;
char gameBais[length][width];

int main()
{
	initGame();
	/*while (true)
	{
		getInput();
		updateGame();
		draw();
	}*/

	system("pause");
	return 0;
}

void initGame()
{
	// 初始化数组元素为空格
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			gameBais[i][j] = ' ';
		}
	}

	for (int i = 0;i < width;i++)	//上下两行初始化
	{
		gameBais[0][i] = '#';
		gameBais[length - 1][i] = '#';
	}
	for (int i = 0;i < length;i++)	//左右两列初始化
	{
		gameBais[i][0] = '#';
		gameBais[i][width - 1] = '#';
	}

	gameBais[1][2] = '.';
	gameBais[1][3] = '.';
	gameBais[1][5] = 'p';
	gameBais[2][2] = 'o';
	gameBais[2][3] = 'o';

	for (int i = 0;i < length;i++)
	{
		for (int j = 0;j < width;j++)
		{
			cout << gameBais[i][j];
		}
		cout << endl;
	}
}

void checkAround(char ch)
{
	switch (ch)
	{
	case 'a':
		break;
	case 'd':
		break;
	case 'w':
		break;
	case 's':
		break;
	}
}

void getInput()
{
	cout << "请输入移动方向：";
	char ch;
	cin >> ch;
	checkAround(ch);
}