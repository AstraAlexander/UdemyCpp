#include <iostream>
#include <numeric>
#include <vector>

void print_double_vector(const std::vector<double> &vec)
{
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << "Vec[" << i << "] = " << vec[i] << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<double> my_vector(10, 5.0);
    print_double_vector(my_vector);

    std::fill(my_vector.begin(), my_vector.end(), 4.5);
    print_double_vector(my_vector);

    std::iota(my_vector.begin(), my_vector.end(), 2.0);
    print_double_vector(my_vector);

    std::vector<double>::iterator it = my_vector.begin();
    std::cout << *it << std::endl;
    ++it;
    *it = -(*it);
    std::cout << *it << std::endl;

    return 0;
}