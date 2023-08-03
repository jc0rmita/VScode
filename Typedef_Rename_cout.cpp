#include <iostream>
using namespace std;

struct gecilie_stream {
  template<typename T>
  gecilie_stream& operator<<(const T& value) {
    std::cout << value;
    return *this;
  }
};

typedef gecilie_stream gecilie;

int main() {
  gecilie g;
  g << "Hello, World!\n";//<<endl;// di nagana pag may endl kaya nilagyan nlng ng "\n"
  return 0;
}

/*
//ibang way para gumana kapag may "endl" 

#include <iostream>

struct gecilie_stream {
  template<typename T>
  gecilie_stream& operator<<(const T& value) {
    std::cout << value;
    return *this;
  }
};

typedef gecilie_stream gecilie;

int main() {
  gecilie g;
  g << "Hello, World!" << static_cast<std::ostream& (*)(std::ostream&)>(&std::endl); //eto yung nabago para gumana
  return 0;
}

*/