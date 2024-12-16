#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    Student(string num, int score) : id(num), grade(score) {}
    string getID() const { return id; }
    friend Student* max(Student* arr[], int n);  
private:
    string id;  
    int grade;  
};
Student* max(Student* arr[], int n) {
    Student* maxStudent = arr[0];
    for (int i = 1; i < n; ++i) 
    {
        if (arr[i]->grade > maxStudent->grade) 
        { 
            maxStudent = arr[i];
        }
    }
    return maxStudent;
}
	
int main()
{
    Student* students[5];
    string num;
    int score;
    for (int i = 0; i < 5; ++i) 
    {
        cout << "������� " << (i + 1) << " ��ѧ����ѧ��: ";
        cin >> num;
        cout << "������� " << (i + 1) << " ��ѧ���ĳɼ�: ";
        cin >> score;
        students[i] = new Student(num, score);
    }
    Student* highestStudent = max(students, 5);
    cout << "�ɼ���ߵ�ѧ��ѧ����: " << highestStudent->getID() << endl;
    for (int i = 0; i < 5; ++i) 
    {
        delete students[i];
    }
	return 0;
}