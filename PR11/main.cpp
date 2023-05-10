#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;



int main()
{

    setlocale(LC_ALL, "Russian");
    type7 equation1(-4);
    equation1.Get_answer();
    equation1.show();




    type8 equation2(1, 6);
    equation2.Get_answer();
    equation2.show();



    return 0;
}