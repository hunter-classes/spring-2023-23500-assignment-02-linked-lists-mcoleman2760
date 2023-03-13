#include <iostream>
#include "List.h"
#include "OList.h"

int main()
{
  List *l = new List();
  std::cout << l->toString() << " " << l->length() << "\n";
  l->insert(0,"a");
  std::cout << l->toString() << " " << l->length() << "\n";
  l->insert(0,"b");
  l->insert(0,"c");
  l->insert(0,"d");
  try {
    l->insert(10,"x");
  } catch (std::exception e){
    std::cout << "Insert x didn't work\n";
  }
  std::cout << l->toString() << "\n";
  l->insert(2,"inserted at 2");
  std::cout << l->toString() << "\n";
  l->insert(5,"inserted at end");
  std::cout << l->toString() << " " << l->length() << "\n";
  
  
    std::cout << "Does it contain c: " << l->contains("c") << "\n";
	std::cout << "Does it contain z: " << l->contains("b") << "\n";
    std::cout << "Does it contain a: " << l->contains("a") << "\n";
	std::cout << "Does it contain q: " << l->contains("q") << "\n";
	l->remove(2);
	std::cout << l->toString() << " " << l->length() << "\n"; // length is now 5 since one item is removed
    l->remove(4);
    std::cout << l->toString() << " " << l->length() << "\n"; // length is now 4 since another item is removed from the end

// OList
std::cout << "---------" << std::endl;
std::cout << "OList" << std::endl;
std::cout << "---------" << std::endl;

OList *o = new OList();
o->insert("hi");
o->insert("bye");
o->insert("sad");
o->insert("mad");
o->insert("glad");
o->insert("father");

std::cout << "toString function" << std::endl;
std::cout << o->toString() << std::endl;

std::cout << "contains function" << std::endl;
std::cout << o -> contains("father") << "\n" << o-> contains("glad") << "\n" << o -> contains("mad") << "\n" << o -> contains("sad") << "\n" <<  o -> contains("bye") << "\n" << o -> contains("hi") << "\n" << o -> contains("money") << std::endl ;

std::cout << "get function" << std::endl;
std::cout << "Word at loc 4: " << o-> get(4) << std::endl; 

std::cout << "remove function " << std::endl;
std::cout << "removing data at loc 4 " << std::endl;
o->remove(4);
std::cout << o->toString() << std::endl;


std::cout << "reverse function" << std::endl;
o->reverse();
std::cout << o->toString() << "\n"; 

std::cout << "length function" << std::endl;
std::cout << o->length() << "\n";

std::cout << "Destructor" << std::endl;
delete o;
std::cout << o->toString() << "\n"; 


return 0;
}
