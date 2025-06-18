#include <iostream>
#include <memory>


int main() {
    // smart pointer .. prevent memory leak
    // unique pointer 
    // =============================================
    // =============================================
    int x = 22;
    std::unique_ptr<int> age = std::make_unique<int>(x);
    std::cout << "value is .." << (*age) << std::endl;
    // =============================================
    // =============================================
    // shared pointer
    // =============================================
    // =============================================
    int y = 22;
    std::shared_ptr<int> ageShared = std::make_shared<int>(y);
    std::cout << ageShared.use_count() << std::endl;
    std::shared_ptr<int> nextShared = ageShared;
    std::cout << ageShared.use_count() << std::endl;
    // =============================================
    // =============================================
    // weak pointer
    // =============================================
    // =============================================
    
    // =============================================
    // =============================================
    return 0;
}