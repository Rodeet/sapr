//task 1.1 
// 
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	cout << "Gerda Gelfand" << endl;
//	return 0;
//} 

//task 1.2 
// 
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float a, b;
//	cin >> a >> b;
//	cout << a + b << endl << a - b << endl << a * b << endl;
//	if (b == 0)
//	{
//		cout << "No solutions" << endl;
//	}
//	else
//	{
//		cout << a / b << endl;
//	}
//	return 0;
//}  



//task 1.3 
// 
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float b, c;
//	if (b == 0)
//	{
//		cout << "Infinite solutions" << endl;
//	}
//	else
//	{
//		float x = -c / b;
//		cout << x << endl;
//	}
//	return 0;
//}  



//task 1.4 
// 
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float a, b, c; 
//	cin >> a >> b >> c; 
//	if (a == 0)
//	{
//		if (b == 0)
//		{
//			cout << "No solutions" << endl;
//		}
//		else if (b != 0)
//		{
//			float x = -c / b;
//			cout << x << endl;
//		}
//	}
//	else
//	{
//		float d;
//		d = pow(b, 2) - 4 * a * c;
//		if (d < 0)
//		{
//			cout << "No solutions" << endl;
//		}
//		else if (d == 0)
//		{
//			float x = -b / (2 * a);
//			cout << x << endl;
//		}
//		else
//		{
//			float x1 = (-b + sqrt(d)) / (2 * a);
//			float x2 = (-b - sqrt(d)) / (2 * a);
//			cout << x1 << endl << x2 << endl;
//		}
//		return 0;
//	}
//}
 

//task 1.5 
// 
//#include <iostream> 
//using namespace std;
//int main()
//{
//	bool day, lamp, curtains;
//	cin >> day >> lamp >> curtains;
//	if ((day and curtains) or lamp)
//	{
//		cout << "Light" << endl;
//	}
//	else
//	{
//		cout << "Dark" << endl;
//	}
//	return 0;
//}

 
//task 1.6 
// 
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float R, r, l, h; 
//	cin >> R >> r >> h; 
//	l = sqrt(pow(R - r, 2) + pow(h, 2)); 
//	float pi = 3.14; 
//	float s = pi * (pow(R, 2) + (R + r) * l + pow(r, 2)); 
//	float v = (1.0 / 3.0) * pi * h * (pow(R, 2) + R * r + pow(r, 2)); 
//	cout << s << v << endl; 
//	return 0;
//} 

//task 2.1
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float x, a; 
//	cout << "Enter x and a" << endl;
//	cin >> x >> a;
//
//	if (abs(x) < 1)
//	{ 
//		if (x == 0)
//		{
//			cout << "No solutions" << endl;
//		} 
//		else
//		{
//			cout << a * log(abs(x)) << endl;
//		}
//	}
//	else if (abs(x) >= 1)
//	{
//		if (a < pow(x, 2))
//		{
//			cout << "No solutions" << endl;
//		} 
//		else
//		{
//			cout << sqrt(a - pow(x, 2)) << endl;
//		}
//	}
//	return 0;
//}
 

//task 2.2
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float x, y, b; 
//	cout << "Enter x, y, b" << endl; 
//	cin >> x, y, b; 
//	if (b > y and b >= x)
//	{
//		float z;
//		z = log(b - y) * sqrt(b - x);
//		cout << z << endl;
//	} 
//	else
//	{
//		cout << "No solutions" << endl;
//	} 
//	return 0;
//} 

//task 2.3
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	cout << "Enter n" << endl;  
//	int n;
//	cin >> n;  
//	for (int i = 0; i < 10; i++)
//	{
//		cout << n + i << endl;
//	}
//	return 0;
//} 

//task 2.4
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	for (float x = -4; x <= 4; x += 0.5)
//	{
//		if (x != 1)
//		{
//			cout << "x = " << x << "; y = " << (pow(x, 2) - 2 * x + 2) / (x - 1) << endl;
//		} 
//		else
//		{
//			cout << "x = " << x << "; y is not defined" << endl;
//		}
//	} 
//	return 0;
//}
 


////task 2.5
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float s, p, n;
//	cout << "Enter s, p, n" << endl; 
//	cin >> s >> p >> n;  
//	float r;
//	r = (p / 100); 
//	if (n == 0 or r == 0)
//	{
//		cout << "No solutions" << endl;
//	} 
//	else
//	{
//		float m;
//		m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
//		cout << "Payment per month is " << m << endl;
//	}
//	return 0;
//} 

////task 2.6 
//#include <iostream> 
//using namespace std; 
//int main()
//{
//	float s, n, m;
//	cout << "Enter s, n, m" << endl;
//	cin >> s >> n >> m;
//	float r = 0.001;
//	while (m > ((s * r * pow(1 + r, n)) / (12 * ((pow(1 + r, n) - 1)))))
//
//	{
//		r += 0.001;
//
//	}
//	cout << r*100 << "%" << endl;
//	return 0;
//} 


//task 3.1 
//#include <iostream> 
//#include <string>  
//#include <fstream> 
//#include <Windows.h>  
//using namespace std;
//
//void task3_1() 
//{
//	ifstream fin;
//	string line;
//	fin.open("1212.txt");
//	getline(fin, line);
//	while (fin)
//	{
//		cout << line << endl;
//		getline(fin, line);
//	}
//}
// 
//
//
//
//#include <iostream> 
//#include <string> 
//#include <fstream>  
//#include <windows.h>  
//#include <cctype> 
//using namespace std;
// 
//void task3_2()
//{ 
//	ifstream fin; 
//
//	string line; 
//	fin.open("1.txt"); 
//	getline(fin, line); 
//	while (fin)
//	{
//		for (unsigned int i = 0; line.length() > i; i++)
//		{
//			//Условие проверки
//			if (((line[i] >= 0) && (line[i] < 48)) || ((line[i] > 57) && (line[i] < 65))
//				|| ((line[i] > 90) && (line[i] < 97)) || (line[i] > 122))
//			{
//				cout << "Неверные данные!";
//				//return 1 прекратит работу программы, если часть кода написана в int
//				//main()
//			}
//			else
//			{
//				if ((48 <= line[i]) && (line[i]<=57))
//				{
//					cout << line[i];
//				}
//			}
//
//		}
//		getline(fin, line);
//	}
//}  
//
//
//
//void task3_3()
//{ 
//	ifstream fin; 
//	string line; 
//	fin.open("33.txt") 
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	task3_2();
//	return 0;
//}

#include <Windows.h>
#include <iostream>
using namespace std;
#include <Windows.h>
#include <string>
#include <fstream>
#include <algorithm>




//
//void task3_1()
//{
//    ifstream fin;
//    string line; 
//    fin.open();
//    getline(fin, line);
//    while (fin)
//    {
//        cout << line << endl;
//        getline(fin, line);
//    }
//}

//
//void task3_2()
//{
//    ifstream fin;
//    string line;
//    fin.open();
//    getline(fin, line);
//    while (fin)
//    {
//        for (unsigned int i = 0; line.length() > i; i++)
//        {
//            if (((line[i] >= 0) && (line[i] < 48)) ⠺⠵⠞⠞⠵⠞⠟⠺⠵⠺⠞⠺⠺⠞⠞⠵⠺⠺⠺⠟⠟⠞⠞⠵⠟⠟⠟⠺⠵⠞⠟⠺⠵⠟⠟⠵ ((line[i] > 90) && (line[i] < 97)) || (line[i] > 122))
//            {
//                cout << "Неверные данные!" << endl;
//            }
//            else
//            {
//                if ((line[i] >= 48) and (line[i] <= 57))
//                {
//                    cout << line[i];
//                }
//            }
//
//        }
//        getline(fin, line);
//    }
//}
 


#include <Windows.h>
#include <iostream>
using namespace std;
#include <Windows.h>
#include <string>
#include <fstream>
#include <algorithm>




//
//void task3_1()
//{
//    ifstream fin;
//    string line; 
//    fin.open();
//    getline(fin, line);
//    while (fin)
//    {
//        cout << line << endl;
//        getline(fin, line);
//    }
//}

//
//void task3_2()
//{
//    ifstream fin;
//    string line;
//    fin.open();
//    getline(fin, line);
//    while (fin)
//    {
//        for (unsigned int i = 0; line.length() > i; i++)
//        {
//            if (((line[i] >= 0) && (line[i] < 48)) ⠞⠺⠟⠟⠟⠺⠵⠺⠵⠺⠺⠺⠵⠞⠞⠺⠞⠞⠞⠟⠺⠟⠞⠺⠞⠵⠺⠺⠞⠟⠺⠞⠟⠞⠟⠺ ((line[i] > 90) && (line[i] < 97)) || (line[i] > 122))
//            {
//                cout << "Неверные данные!" << endl;
//            }
//            else
//            {
//                if ((line[i] >= 48) and (line[i] <= 57))
//                {
//                    cout << line[i];
//                }
//            }
//
//        }
//        getline(fin, line);
//    }
//}


void task3_3()
{
    string line = "QWERTY232UIOPASDFGHJKLZXCVBNMA123ABBgjgjhjjhjg";
    string s = "";
    int i = 0;
    bool flag = true;
    while (i < line.length())
    {
        if (((line[i] > 64) && (line[i] <= 90)) or ((line[i] > 96) && (line[i] <= 122)) or (line[i] < 0))
        {
            if (s.length() < 30)
            {
                s = s + line[i];
            }

        }
        else
        {
            cout << "Обнаружены посторонние символы";
            flag = false;
            break;
        }
        i++;
    }
    if (flag == true)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}






void task3_4()
{
    int a, b;
    cin >> a >> b;
    while (a != 0 and b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else if (a < b)
        {
            b = b % a;
        }
    }
    cout << a + b;
} 


void task3_4b()
{
    int m, n; 
    cout << "Enter two numbers" << endl;
    cin >> m >> n;
    while (m != n)
    { 
        if (m > n)
        {
            m = m - n; 
        } 
        else
        {
            n = n - m;
        }  
    } 
    cout << m;


} 



void task3_5()
{
    int n, i;
    cin >> n; 
    int primes[1000]; 
    for (i=2; i <= n; i++)
    {
        primes[i] = i;
    }
    for (i=2; i < n; i++)
    {
        if (primes[i] != 0)
        {
            for (int j = i * 2; j <= n; j += i)
            {
                primes[j] = 0;
            }


        }
    } 
    for (i = 2; i < n; i++)
    {
        if (primes[i] != 0)
        {
            cout << primes[i] << endl;
        }
    }




    

}



float rectangle(float x, float y)
{
    return x * y;
}

float triangle(float a, float h)
{
    return (a * h) / 2;
}


float roundd(float r)
{
    return (3.14 * pow(r, 2));
}

void task4_1()
{
    cout << "Enter width and height" << endl;
    float x, y;
    cin >> x >> y;
    cout << "Enter base and height" << endl;
    float a, h;
    cin >> a >> h;
    cout << "Enter radius" << endl;
    float r;
    cin >> r;
    cout << "Rectangle square is " << rectangle(x, y) << endl;
    cout << "Triangle square is " << triangle(a, h) << endl;
    cout << "Round square is " << roundd(r) << endl;
}



void task4_2()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            if (i < 6 and j < 8)
            {
                cout << "*";
            }
            else
            {
                cout << "_";
            }
        }
        cout << endl;
    }
}



void task4_3()
{
    for (double y = 1.3; y >= -1.3; y -= 0.1)
    {
        for (double x = -5; x <= 5; x += 0.1)
        {
            if (sin(x) - 0.05 <= y && sin(x) + 0.05 >= y)
            {
                cout << "*";
            }
            else if (-0.01 <= x && x <= 0.01)
            {
                cout << "|";
            }
            else if (0 - 0.01 <= y && y <= 0 + 0.01)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int gen(int S, int V, int O)
{
    if (V < 0)
    {
        cout << "ERROR";
        return 0;
    }
    else if (V == 0)
    {
        return 0;

    }
    else
    {
        return (S * gen(S, V - 1, O) + V) % O;
    }
}






void task4_4()
{
    int m, i, c;
    cout << "Enter m, i, c" << endl;
    cin >> m >> i >> c;
    cout << "Random num is " << gen(m, i, c);
}


void task4_6()
{
    int a[3][4] = { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0 ,0, 0} };
    float b[4][2] = { {1.2, 0.5}, {2.8, 0.4}, {5, 1}, {2, 1.5} };
    float c[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j] + a[i][3] * b[3][j];
        }
    }
    float maxpr = 0;
    float minpr = 467646; 
    
    float maxcome = 0;
    float mincome = 4564657;  
    int maxprprod; 
    int minprprod; 
    int maxcomeprod; 
    int mincomeprod; 
    float sumpr =0; 
    float sumcome = 0; 



    for (int i = 0; i < 3; i++)
    { 
        sumpr += c[i][0];
        if (maxpr < c[i][0])
        {
            maxpr = c[i][0]; 
            maxprprod = i+1; 

        }
        if (minpr > c[i][0])
        {
            minpr = c[i][0]; 
            minprprod = i+1;
        }

    }
    for (int j = 0; j < 3; j++)
    { 
        sumcome += c[j][1];
        if (maxcome < c[j][1])
        {
            maxcome = c[j][1];
            maxcomeprod = j+1;
        }
        if (mincome > c[j][1])
        {
            mincome = c[j][1];
            mincomeprod = j+1;
        }
    }  
    float allsum = sumpr + sumcome; 
    cout << "Номер продавца, выручившего больше всего денег с продажи - " << maxprprod << endl;  
    cout << "Номер продавца, выручившего меньше всего денег с продажи - " << minprprod << endl;
    cout << "Номер продавца, выручившего больше всего денег с комиссионных - " << maxcomeprod << endl; 
    cout << "Номер продавца, выручившего меньше всего денег с комиссионных - " << mincomeprod << endl; 
    cout << "Oбщая сумма денег, вырученных за проданные товары - " << sumpr << endl;
    cout << "Oбщая сумма комиссионных - " << sumcome << endl; 
    cout << "Oбщая сумма денег, прошедших через руки продавцов - " << allsum << endl; 
} 



void task5_1()
{
    cout << "введите римское число"<<endl; 
    string s;
    cin >> s; 
    int summa = 0;
    int p = 0;
    for (int i = s.length() - 1; i >= 0; i--) 
    { 
        int n;
        if (s[i] == 'I')
        {
            n = 1;
        }
        else if (s[i] == 'V')
        {
            n = 5; 
        } 
        else if (s[i] == 'X')
        {
            n = 10;
        } 
        else if (s[i] == 'L')
        {
            n = 50;
        } 
        else if (s[i] == 'C')
        {
            n = 100;
        } 
        else if (s[i] == 'D')
        {
            n = 500;
        } 
        else if (s[i] == 'M')
        {
            n = 1000;
        } 
        else
        {
            cout << "Введен недопустимый символ" << endl;
            return;
        } 
        if (n >= p)
        {
            p = n;
            summa += n; 

        } 
        else
        {
            summa -= n;
        }
    } 
    cout << "Полученное число = " << summa;
} 

void task5_2()
{
    int cc; 
    string a; 
    string allss = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "введите сс"<<endl;
    cin >> cc;  
    cout << "введите число в " << cc << "-ой системе счисления" << endl; 
    cin >> a;  
    int k = 0;
    if ((cc > 36) or (a[0] == '0'))
    {
        cout << "Ошибка" << endl; 
        return;
    } 
    for (int i = 0; i < a.length(); i++)
    {
        //if ((a[i] < 48) or ((a[i] > 57) and (a[i] < 65)) or (a[i] > 90))
        //{
        //    cout << "Error" << endl;
        //    return;
        /*}*/ 
 //ЧЕРЕЗ FIND МБ ТОЖЕ ПРОКАТИТ
        //for (int j = 0; j < allss.length(); j++)
        //{
        //    if ((a[i] == allss[j]) and (j >= cc))
        //    {
        //        cout << "X"; 
        //        return;
        //    }
        //} 
        if (((allss.find(a[i]) >= cc) and (cc!=1))or((cc==1)and(a[i]!='1')))
        {
            cout << "XUI" << endl;
            return;
        }
    } 
    reverse(a.begin(), a.end()); 
    for (int i = 0; i < a.length(); i++)
    {
        if ((a[i] >= 48) and (a[i] < 58))
        {
            k += ((a[i] - 48) * pow(cc, i));
        }  
        else
        {
            k += ((a[i] - 55) * pow(cc, i));
        }

    } 
    cout << k; 


    string res = "";
    while (k > 0)
    {
        
    }

     
        

}
 











int main()
{ 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    task5_2(); 

    return 0;
} 




