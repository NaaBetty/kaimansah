#include<iostream>

int main(){
	
	std::cout<<"Enter your name: \n";
	std::string name;
	std::getline(std::cin,name);
	std::cout <<"Your name is: " <<name << std::endl;
	
	std::cout<<"Welcome to the statistics program \n";
	std::cout<<"Please enter the first number \n";
	int a;
	std::cin>>a;
	std::cout<<"You entered: "<<a<<std::endl;

        std::cout<<"Please enter the second number \n";
        int b;
        std::cin>>b;
        std::cout<<"You entered: "<<b<<std::endl;

        std::cout<<"Please enter the third number \n";
        int c;
        std::cin>>c;
        std::cout<<"You entered: "<<c<<std::endl;
                                                                                      std::cout<<"Please enter the fourth number \n";                               int d;                                                                        std::cin>>d;                                                                  std::cout<<"You entered: "<<d<<std::endl;
										      std::cout<<"Please enter the fifth number \n";                                int e;                                                                        std::cin>>e;                                                                  std::cout<<"You entered: "<<e<<std::endl;

	double mean =(a + b + c + d +e)/2;
	std::cout<<"The mode of the numbers are: " <<mean<<std::endl;	
}
