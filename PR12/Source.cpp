#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;
    type4::type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void type4::Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "����� ���������: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "������ ���" << endl;
        }
    }
    void type4::show() {
        cout << "��������� " << A << "*x^2 + " << C << " = 0" << endl;
    }
    void type4::Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "������ ������� ������� ���" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }

    type5::type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void type5::Get_answer() {
        cout << "������ ���������: " << (-1) * (C / B) << endl;
    }
    void type5::show() {
        cout << "��������� " << B << "*x + " << C << " = 0" << endl;
    }
    void type5::Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }

    type6::type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void type6::Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "������ ���������: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "����� ���������: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void type6::show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    void type6::Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }

        type8::type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void type8::Get_answer() {
        double x = ((-1) * B) / A;
        cout << "����� ���������: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void type8::show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
    void type8::Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
