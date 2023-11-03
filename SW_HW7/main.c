#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char* Det_OL()
{
	char* result = (char*)malloc(4); // 메모리 할당
	snprintf(result, 4, "%d%d%d", Det_OL_F(), Det_OL_L(), Det_OL_R());
	return result;
}
int Det_OL_F()	// 
{
	int F = 0;
	bool front_obstacle;
	if (front_obstacle)
	{
		F = 1;
	}
	return F;
}
int Det_OL_L()	// 
{
	int L = 0;
	bool left_obstacle;
	if (left_obstacle)
	{
		L = 1;
	}
	return L;
}
int Det_OL_R()	// 
{
	int R = 0;
	bool right_obstacle;
	if (right_obstacle)
	{
		R = 1;
	}
	return R;
}

bool Det_DE()
{
	bool de;
	return de;
}

void Cleaner(char* command)
{
	if (strcmp(command, "on") == 0)
	{
		// "on"일 때의 동작 정의
	}
	else if (strcmp(command, "off") == 0)
	{
		// "off"일 때의 동작 정의
	}
	else if (strcmp(command, "up") == 0)
	{
		// "up"일 때의 동작 정의
	}
}

void Move_Foward()
{

}

void Turn_Left()
{

}

void Turn_Right()
{

}

void Move_Backward()
{
	char* obstacle_Location;
	while (true)
	{
		obstacle_Location = Det_OL();
		if (obstacle_Location == "000" || obstacle_Location == "001")
		{
			Turn_Left();
			break;
		}
		if (obstacle_Location == "010")
		{
			Turn_Right();
			break;
		}
	}
	wait(200);
}

void Stop()
{

}

int main()
{
	char* obstacle_Location;
	bool dust_Existence;

	Move_Foward();
	Cleaner("on");

	while (true)
	{
		obstacle_Location = Det_OL();	//FLR
		dust_Existence = Det_DE();

		if (obstacle_Location == "100" || obstacle_Location == "101")
		{
			Cleaner("off");
			Turn_Left();
		}
		else if (obstacle_Location == "110")
		{
			Cleaner("off");
			Turn_Right();
		}
		else if (obstacle_Location == "111")
		{
			Stop();
			Cleaner("off");
			Move_Backward();
		}
		else
		{
			if (dust_Existence)
			{
				Cleaner("up");
			}
			else
			{
				Cleaner("on");
			}
		}
		wait(200);
	}

}
