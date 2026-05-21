
#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{  
	int n;
	vector <string> vbooks;
	vector <string> vauthor;
	vector <string> vgenres;
	string s;
	setlocale(LC_ALL, "Ru");
	for (int i = 0; i < 1;)
	{
		
		cout << " _______________________________\n";
		cout << "| Добро пожаловать в библеотеку |\n";
		cout << "|  1. для добовления книги      |\n";
		cout << "|  2. для просмотра книг        |\n";
		cout << "|  3. для удаления книги        |\n";
		cout << "|  4. для редоктирования книги  |\n";
		cout << "|  5. для выхода из системы     |\n";
		cout << "|_______________________________|\n";
		cout << "Введите номер действия ,каторое вы хотите сделать: ";
		
		cin >>n;
	    if (cin.fail())
		{
			cin.clear();
			cin.ignore();
		}
		if (n == 5) { i++; cout << "\nВы вышли из системы."; }
		else if (n == 1)
		{
			cout << "Введите название книги: ";
			cin >> s;
			vbooks.push_back(s);
			cout << "Введите автора книги: ";
			vauthor.push_back(s);
			cin >> s;
			cout << "Введите жанр книги: ";
			cin >> s;
			vgenres.push_back(s);
		}
		else if (n == 2)
		{
			if (vbooks.size() > 0)
			{
				 int a = 1;
				for (int f = 0; f < vbooks.size(); f++)
				{
					cout << "\n";
					cout << a++ << ". ";
					cout << " Книга: " << vbooks[f];
					cout << " Автор: " << vauthor[f];
					cout << " Жанр: " << vgenres[f]<<"\n";
				}
			}
			else if (vbooks.size() == 0)
			{
				cout << "Нету книг";
			}


		}
		else if (n == 3)
		{
			string Book_name;
			cout << "Введите название книги, каторую хотите удалить: ";
			cin >> Book_name;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore();
			}
			for (int l = 0; l < vbooks.size(); l++)
			{

				if (Book_name == vbooks[l])
				{
					vbooks.erase(vbooks.begin()+l);
					vauthor.erase(vauthor.begin() + l);
					vgenres.erase(vgenres.begin() + l);
					cout << "Книга удалена\n";
				}
				
			}
		   
		}
		else if (n == 4)
		{ 
			string Book_name;
			cout << "Введите название книги, каторую хотите изменить: ";
			cin >> Book_name;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore();
			}
			for (int l = 0; l < vbooks.size(); l++)
			{
				
				if (Book_name == vbooks[l]) 
				{
					string New;
					cout << "Введите новое название книги :";
					cin>>New;
					vbooks[l] = New;
					cout << "\nВведите нового автора:";
					cin >> New;
					vauthor[l] = New;
					cout << "\nВведите новое название жанра :";
					cin >> New;
					vgenres[l]=New; 
					cout << "Изменения прошли успешно\n";
				}
				
			}
		}
		
	}
}
