// #include <iostream>
// #include <string>

// int main()
// {
//     int n;
//     int e_star = 4;
//     std::cin >> n;
//     // std::cout << n << std::endl;
//     // std::cout << "*" << std::string(e_star," *") << std::endl;
//     std::cout << 2*n+1 << std::endl;
//     std::cout << "*" <<std::string(e_star,'*') << std::endl;

//     // for (int i=(2*n+1);i>=1;i--)
//     // {
//     //     if (i>3)  // if true, add spaces
//     //     {
//     //         std::cout << std::string(i,' ') << std::endl;
//     //     }
//     //     else // last three rows of every pattern 
//     //     {

//     //     }

//     // }



    
//     return 0;
    
// }
// // Example program
// #include <iostream>
// #include <string>

// int main()
// {
//   int o = 3;
//   int e = 1;
//   int n;
//   std::cin >> n;
  
//   class repeat{ 
  
//     public: 
//         repeat(){ 
//             std::cout<<" *"; 
//         } 
         
// }; 
//   for (int i=n;i>=1;i--)
//   {
//       if (i==1) { 
//           std::cout<< std::string(o,"*") << std::endl;
//           std::cout<<"*";
//           repeat obj[e];
//           std::endl;
//           std::cout<< std::string(o,"*") << std::endl;
//       }
//       else
//       {
//           std::cout<< std::string(o,"*") << std::endl;
//           std::cout<<"*"; 
//           repeat obj[e];
//           std::endl;
//           o += 2;
//           e +=1;
//       }
//   }
//   return 0;


#include <iostream>
#include <string>

void Printer(int times)
{
    std::cout << "*";
    for (int i=times;i>=1;i--)
    {
        std::cout << " *";
        

    }
    std::cout<< std::endl;
}

// int main(){
//     int n;
//     std::cin>>n;
//     // std::cout << std::string(100, '*') << std::endl;
//     // std::cout << std::string(7,'*') << std::endl;
//     Printer(n);
//     return 0;
// }

int main(){
    int odd = 3;
    int even = 1;
    int n;
    std::cin>>n;
    // std::cout << std::string(100, '*') << std::endl;
    // std::cout << std::string(7,'*') << std::endl;
    for (int i=n;i>=1;i--)
    {
        if (i==1) // if reaches the base of pyramid
        {
            std::cout<< std::string(odd,'*') << std::endl;
            Printer(even);
            std::cout<< std::string(odd,'*') << std::endl;
        }
        else
        {
            std::cout << std::string(odd,'*') << std::endl;
            Printer(even);
            odd+=2;
            even+=1;
        }
    }
    // Printer(n);
    return 0;
}