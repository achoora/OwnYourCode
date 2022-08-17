#include <iostream>
#include <array> 
int main()
{
  std::string Fruit1 = "Apple ";
  std::string Fruit2 = "orange ";

  std::swap(Fruit1, Fruit2);

  std::cout << Fruit1 << Fruit2 << '\n';

  std::array<int, 2> a1{{1,2}};
  std::array<int,2> a2{{4,5}};

  std::swap(a1, a2);

  std::cout << a1[1] << a2[1] << '\n';
}