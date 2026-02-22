#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>

using namespace std;

class Node {
private:
  bool status;
  std::string name;

public:
  // constructor: initialize the wire and the initial status
  Node(std::string nodeName, bool initialstatus = false);

  // setters
  void setStatus(bool newstatus);

  // getters
  bool getStatus() const;
  std::string getName() const;
};

#endif // !NODE_HPP
