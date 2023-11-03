#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void main() 
{
	char* obstacle_Location;
	bool dust_Existence;

	Move_Foward();
	Cleaner("on");

	while (true)
	{
		obstacle_Location = Det_OL();	//FLR
		dust_Existence = Det_DE();

		if(obstacle_Location=="100"||obstacle_Location=="101")
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
			Move_Foward();
		}
		wait(200);
	}

}

char* Det_OL()
{
	return (char)Det_OL_F() + (char)Det_OL_L() + (char)Det_OL_R();
}
int Det_OL_F()	// 
{
	int F;
	return F;
}
int Det_OL_L()	// 
{
	int L;
	return L;
}
int Det_OL_R()	// 
{
	int R;
	return R;
}

bool Det_DE()
{
	bool de;
	return de;
}

void Cleaner(char* command)
{
	if (command == "on")
	{

	}
	else if (command == "off")
	{

	}
	else if (command == "up")
	{

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
	while (true)
	{
		if(obstacle_Location=="000"||obstacle_Location=="001")
		{
			Turn_Left();
			break;
		}
		if(obstacle_Location=="010")
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
