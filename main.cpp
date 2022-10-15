#include <iostream>
#include <cstdlib>

void showMenu() {
                    std::cout << "**********MENU**********\n";
                    std::cout << "1. Check Balance\n";
                    std::cout << "2. Deposit\n";
                    std::cout << "3. Withdraw\n";
                    std::cout << "4. Exit\n";
                    std::cout << "************************\n";
                }

int main()
{
    int pin;
    int password = 1234;
    int count = 0;
    bool isTrue = true;
    
    do {
        std::cout << "**********Welcome**********\n";
        std::cout << "Enter your PIN:\n";
        std::cin >> pin;

            if(pin == password)
            {
                
                int options;
                double balance = 0.0;
                system("cls");

                do {
                    showMenu();
                    std::cout << "Option: ";
                    std::cin >> options;
                    system("cls");

                    switch(options) {
                        case 1: 
                            std::cout << "Balance: $" << balance << "\n" << "\n";
                        break;

                        case 2: 
                            std::cout << "Deposit Amount: ";
                            double depositAmount;
                            std::cin >> depositAmount;
                            balance += depositAmount;
                        break;

                        case 3: 
                            std::cout << "Withdraw Amount: ";
                            double withdrawAmount;
                            std::cin >> withdrawAmount;
                            if(withdrawAmount <= balance)
                                balance -= withdrawAmount;
                            else 
                                std::cout << "Insufficient funds\n\n";
                        break;
                    }
                } while (options != 4);

            } else 
            {
                count++;
                if(count == 3)
                    isTrue = false;
                else
                    std::cout << "Invalid PIN\n\n";
            }
    } while (isTrue != false);
    
    return 0;
}