/**
 * learn about arrays
 */
#include <iostream>
#include <array> // c++ 11 or greater
using namespace std;

// Main Function
int main()
{

  // Arrays: type name[elements];
  //int students[5] = {1, 5, 9, 3,6};
  //int students[] = {1, 5, 9, 3,6}; //compiler calculates array size

  // to initialize an array do not use =, only {}
  array<int,5> students{3,7,9,2,4};

  cout <<  "First member " << students[0] << endl;
  for(int index = 0; index < students.size(); ++index)
  {
      cout << index + 1 << " member " << students[index] << endl;
  }

  //"for each" loop
  for(auto value : students)
  {
      cout << "Container member " << value << endl;
  }

  //multidimensional array
  // Arrays: type name[row][columns];
  //int bi_array[3][5] = {{3,5,7,1,9},{8,3,5,1,2},{12,9,45,23,12}};

  //for(int x = 0; x < 3; ++x)
  //{
   //   cout << "Iterating over " << x << " row" << endl;
   //   for(int y = 0; y < 5; ++y)
   //   {
   //       cout << x << " " << y << " value is " << bi_array[x][y] << endl;
   //   }
  //}
    return 0;
}