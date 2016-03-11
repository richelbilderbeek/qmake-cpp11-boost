#include <cassert>
#include <boost/graph/adjacency_list.hpp>

//C++11: cannot use auto as a return type
int f() noexcept { return 42; }

int main()
{
  //C++ 11
  const auto x = f();
  assert(x == 42);

  //Boost
  boost::adjacency_list<> g;
  assert(boost::num_vertices(g) == 0);
}

