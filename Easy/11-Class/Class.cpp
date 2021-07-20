#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age;
        int standard;
        string name;
        string last_name;
    public:
    
    void set_age        (int age_p)         {age = age_p;}
    void set_standard   (int standard_p)    {standard = standard_p;}
    void set_first_name (string n)          {name = n;}
    void set_last_name  (string ln)         {last_name = ln;}
    
    int get_age()           { return age;}
    int get_standard()      { return standard;}
    string get_first_name() { return name;}
    string get_last_name()  { return last_name;}
    
    string to_string()      
    {
        string data = std::to_string(age) + "," + 
        name + "," + last_name + "," + std::to_string(standard);
        return data;    
    }
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
