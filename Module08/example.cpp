#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <map>

void displayInt(int i)
{
    std::cout << i << std::endl;
}


int main(void)
{
    
    int numbers[5] = {1, 2, 34, 22, 6};
    //int numLen = numbers.size(); //error 
    std::vector<int>	v;
    std::vector<int>	v1(1, 2);
    std::list<int>		l;
    std::deque<int>		d;  

    //vector
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(1);
    v.pop_back();

    //lista
    l.push_back(1);
    l.push_back(3);
    l.push_back(2);
    l.push_back(33);
    l.push_front(10);


    for (int i = 0; i < v.size(); i++)
        std::cout << "pos[" << i << "] " << v[i] << std::endl;

    std::cout << "--- reverse ---" << std::endl;
    for (int i = v.size() -1; i >= 0; i--)
        std::cout << "pos[" << i << "] " << v[i] << std::endl;

    /* std::list<int>::const_iterator  it;
    std::list<int>::const_iterator  ite = l.end();

    std::cout << "lista" << std::endl;
    for (it = l.begin(); it != ite; it++)
        std::cout << *it << std::endl; */

    for_each(l.back(), l.end(), displayInt);
    return (0);
}