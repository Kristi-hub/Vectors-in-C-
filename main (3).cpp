#include <iostream>
#include <vector>
#include <algorithm>

int Random () { 
  return (std::rand()%100+1); 
}
int main() 
{ 
  
    // Get the vector
    for(int i=10;i<=100;i+=10){
        
    
        std::cout<<"Size of a vector is "<<i<<"  ";
        std::vector<int> v(i);
        std::generate(v.begin(), v.end(), Random);
    
    // Print the vector 
    // std::cout << "Vector: "; 
    // for (int i = 0; i < v.size(); i++) 
    //     std::cout << v[i] << " "; 
    // std::cout << std::endl; 
    // sort(v.begin(), v.end()); 
    // std::cout << "Sorted vector:  "; 
    // for (int x : v) 
    //     std::cout << x << " "; 

    // Find the min element 
    auto min = std::min_element(v.begin(), v.end());
    std::cout << "  Min element is " << *min << std::endl;
    
    // Find the average
    int sum=0,av;
    for (int i = 0; i < v.size(); i++) {
        sum+=v[i];
        av=sum/v.size();
    }
      std::cout << "  Average is " << av<< std::endl;
    }
  
    return 0; 
} 

