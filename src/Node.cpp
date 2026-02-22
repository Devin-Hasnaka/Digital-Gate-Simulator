#include <Node.hpp>

// constructor implementation
Node::Node(std::string nodeName, bool initialstate)
    : state(initialstate), name(nodeName) {}

// update the logic level of the wire
void Node::setStatus(bool newState) { state = newState; }

// return logic value
bool getStatus() const { return state; }
std::string getName() const { return name; }
