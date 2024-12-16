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
        cout << "请输入第 " << (i + 1) << " 个学生的学号: ";
        cin >> num;
        cout << "请输入第 " << (i + 1) << " 个学生的成绩: ";
        cin >> score;
        students[i] = new Student(num, score);
    }
    Student* highestStudent = max(students, 5);
    cout << "成绩最高的学生学号是: " << highestStudent->getID() << endl;
    for (int i = 0; i < 5; ++i) 
    {
        delete students[i];
    }
	return 0;
}