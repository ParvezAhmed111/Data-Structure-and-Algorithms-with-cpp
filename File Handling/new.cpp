#include <Windows.h>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main(void) {
	HWND hd = GetDesktopWindow();
	RECT rect;
	 
    // Only get the size of the window client area
	GetClientRect(hd, &rect);
	int client_width = (rect.right - rect.left);
	int client_height = (rect.bottom - rect.top);
    

    //time stamp
    time_t my_time = time(NULL);
    string s= ctime(&my_time);

    //output to csv
    string filename("txt.csv");
    ofstream file_out;

    file_out.open("txt.csv", std::ios_base::app);

    file_out<<client_width<<" "<<client_height<<" "<<s<<endl;
    cout << "Done !" << endl;

    
	return 0;
}


