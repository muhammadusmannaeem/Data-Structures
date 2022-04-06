#include "LinkedList.cpp"
using namespace std;

int main() {
    auto *list = new LinkedList<int>();
    list->display_all(false);
    list->prepend(12);
    list->prepend(10);
    list->prepend(9);
    list->prepend(8);
    list->display_all(false);
    list->add(2, 100);
    list->display_all(false);
    list->remove(2);
    list->display_all(false);
}
