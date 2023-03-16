#include <iostream>

using namespace std;

int main()
{
    int data[]={1,2,3,4,5};
    int total=0;
    double rata;

    int length = (sizeof(data)/sizeof(*data));
    std::cout << "Data\t\t: ";
    for(int i=0; i<length; i++){
        std::cout << data[i] << " ";
    }
    std::cout <<"\n" << std::endl;
    for(int i=0; i<length; i++){
        total+=data[i];
    }
    rata=((double)total)/length;
    std::cout << "Total\t\t: " << total << std::endl;
    std::cout << "Rata - rata\t: "<< rata << std::endl;

    return 0;
}
