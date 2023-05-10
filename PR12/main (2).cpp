#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;



int main()
{

    setlocale(LC_ALL, "Russian");
    
    type4 equation1(-4, 5);
    equation1.Get_answer();
    equation1.show();
    equation1.Get_answer_podbor();

    type5 equation2(2, -6);
    equation2.Get_answer();
    equation2.show();
    equation2.Get_answer_podbor();

    
    type6 equation3(1, -5, 6);
    equation3.Get_answer();
    equation3.show();
    equation3.Get_answer_podbor();

    type8 equation4(3, -9);
    equation4.Get_answer();
    equation4.show();
    equation4.Get_answer_podbor();



    return 0;
}