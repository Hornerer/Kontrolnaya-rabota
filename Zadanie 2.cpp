#include <iostream>


int main(){
    setlocale(LC_ALL,"rus");
    int n, x, result = 0;
    std::cout << "������� ����������� ������ :";
    std::cin >> n;
    int coloumn_lenth[n];
    for (int i=0; i<n; ++i){
        std::cout<<"����� "<<i+1<<"-�� "<<"�������: ";
        std::cin >> coloumn_lenth[i];
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (coloumn_lenth[j] < coloumn_lenth[i]){
                x = coloumn_lenth[j];
            } else {
                x = coloumn_lenth[i];
            }
            if (x * (j - i) >= result){
               result = x * (j - i);
            }
        }
    }
    std::cout << result;
    return 0;
}
