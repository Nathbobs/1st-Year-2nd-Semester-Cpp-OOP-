#include <iostream>
#include <string>

int main() {
   std::string str;
   std::getline(std::cin, str);
   
   int num = str.size();
   int a=0;
   while(a<num) {

      int i = str.find(',');
      if(i==std::string::npos) {
         if(str.size()==0) {
            return 0;
         }
         std::cout << str << std::endl;
         return 0;
      }else{
         std::cout << str.substr(a, i-a) << std::endl;
         str=str.substr(i+1, num-i);
      }
   }
   return 0;
}
