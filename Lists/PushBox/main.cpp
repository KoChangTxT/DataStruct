#include <iostream>
#include<vector>

using namespace std;

void getInput();
void updateGame();
void draw();
void initGame();
bool IsOver();
void checkAround(char ch);

const int width = 8;
const int length = 5;
char gameBais[length][width];
pair<int, int>Man = {1,5};
vector<pair<int, int>> Dot = { {1,2},{1,3} };


int main()
{
	initGame();
	while (true)
	{
		getInput();
		updateGame();
		draw();
		if (IsOver())
		{
			cout << "您已通关！！！" << endl;
			break;
		}
	}

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

	for (auto D:Dot)
	{
		gameBais[D.first][D.second] = '.';
	}
	//gameBais[1][2] = '.';
	//gameBais[1][3] = '.';
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

void updateGame()
{
	
}

void checkAround(char ch)
{
	switch (ch)
	{
	case 'a':
		if (gameBais[Man.first][Man.second - 1] == '#' || (gameBais[Man.first][Man.second - 1] == 'o' && gameBais[Man.first][Man.second - 2] == 'o') ||
			(gameBais[Man.first][Man.second - 1] == 'o' && gameBais[Man.first][Man.second - 2] == '#'))
		{

		}
		else if(gameBais[Man.first][Man.second - 1] == 'o')
		{
			gameBais[Man.first][Man.second - 2] = 'o';
			gameBais[Man.first][Man.second - 1] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.second--;
			
		}
		else
		{
			
			gameBais[Man.first][Man.second - 1] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.second--;
		}
		break;
	case 'd':
		if (gameBais[Man.first][Man.second + 1] == '#' || (gameBais[Man.first][Man.second + 1] == 'o' && gameBais[Man.first][Man.second + 2] == 'o') ||
			(gameBais[Man.first][Man.second + 1] == 'o' && gameBais[Man.first][Man.second + 2] == '#'))
		{

		}
		else if (gameBais[Man.first][Man.second + 1] == 'o')
		{
			gameBais[Man.first][Man.second + 2] = 'o';
			gameBais[Man.first][Man.second + 1] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.second++;
			
		}
		else
		{
			
			gameBais[Man.first][Man.second + 1] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.second++;
		}
		break;
	case 'w':
		if (gameBais[Man.first - 1][Man.second] == '#' || (gameBais[Man.first - 1][Man.second] == 'o' && gameBais[Man.first - 2][Man.second] == 'o') ||
			(gameBais[Man.first - 1][Man.second] == 'o' && gameBais[Man.first - 2][Man.second] == '#'))
		{

		}
		else if (gameBais[Man.first - 1][Man.second] == 'o')
		{
			gameBais[Man.first - 2][Man.second] = 'o';
			gameBais[Man.first - 1][Man.second] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.first--;
		}
		else
		{
			gameBais[Man.first - 1][Man.second] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.first--;
		}
		break;
	case 's':
		if (gameBais[Man.first + 1][Man.second] == '#' || (gameBais[Man.first + 1][Man.second] == 'o' && gameBais[Man.first + 2][Man.second] == 'o') ||
			(gameBais[Man.first + 1][Man.second] == 'o' && gameBais[Man.first + 2][Man.second] == '#'))
		{

		}
		else if (gameBais[Man.first + 1][Man.second] == 'o')
		{
			gameBais[Man.first + 2][Man.second] = 'o';
			gameBais[Man.first + 1][Man.second] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.first++;
		}
		else
		{
			gameBais[Man.first + 1][Man.second] = 'p';
			gameBais[Man.first][Man.second] = ' ';
			Man.first++;
		}
		break;
	}
}


void getInput()
{
	cout << "请输入移动方向：";
	char ch;
	cin >> ch;
	
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	checkAround(ch);
}

void draw()
{
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			cout << gameBais[i][j];
		}
		cout << endl;
	}
}

bool IsOver()
{
	for (auto D:Dot)
	{
		if (gameBais[D.first][D.second] != 'o')
		{
			return false;
		}
	}
	return true;
}