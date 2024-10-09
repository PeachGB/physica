#include "physica.h"
#include <vector>
#include <iostream>
namespace physica{

  //physica Vector should be 1,2 or 3D
template<typename T>
struct vector{
 T x;
 T y;
 T z;
  vector(int x, int y, int z):x{x},y{y},z{z}{}
  vector(float x, float y, float z):x{x},y{y},z{z}{}

};

//define a vector space of until 3 Dimensions
class VectorSpace{
  int Dimensions;

  std::vector<std::vector<std::vector<int>>> Space3d;
  std::vector<std::vector<int>> Space2d;
  std::vector<int> Space1d;
public:
  VectorSpace(int Dim):Dimensions{Dim}{}

};

}
int main(void){

  return 0;
}

