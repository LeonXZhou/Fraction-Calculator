#include <iostream>
#include "GUI.h"
using namespace GUI123;
int main(int argc, char** argv)
{
	GUI^ g = gcnew GUI();
	Application::Run(g);
	return 0;
}