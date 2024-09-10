#include <iostream>
		#include "myclass.h"
		using namespace std;

		int main()
		{
		    CMyClass* p = new CMyClass;
		    delete p;
		    #ifdef _DEBUG
			cout << "Press ENTER key to continue..." << endl;
			cin.get();
		    #endif
		    return 0;
		}