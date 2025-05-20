# Code Here
from abc import ABC, abstractmethod
class BankAccount(ABC):
    def __init__(self,account_number, account_holder, balance):
        self._account_number = account_number
        self._account_holder = account_holder
        self._balance = balance
        if self._balance<0:
            print("Invalid Balance")
    @abstractmethod
    def deposit(self,amount):
        pass 
    @abstractmethod
    def withdraw(self,amount):
        pass
class SavingsAccount(BankAccount):
    def __init__(self,account_number, account_holder, balance,interest_rate):
        super().__init__(account_number, account_holder, balance)
        self._interest_rate = interest_rate
        if self._interest_rate<0:
            print("Invalid Interest Rate")
    def deposit(self,amount):
        self._balance+=amount 
        print(f"Savings Account {self._account_number}: Deposited ${amount}. Current Balance: ${self._balance}.")
    def withdraw(self,amount):
        if amount<=self._balance:
            self._balance -= amount 
            print(f"Savings Account {self._account_number}: Withdrawn ${amount}. Remaining Balance: ${self._balance}.")
        else:
            print("Insufficient balance")
class CurrentAccount(BankAccount):
    def __init__(self,account_number, account_holder, balance,overdraft_limit):
        super().__init__(account_number, account_holder, balance)
        self._overdraft_limit = overdraft_limit
        if self._overdraft_limit<0:
            print("Invalid Overdraft Limit")
    def deposit(self,amount):
        self._balance += amount 
        print(f"Current Account {self._account_number}: Deposited ${amount}. Current Balance: ${self._balance}.")
    def withdraw(self,amount):
        if self._balance-amount>=-self._overdraft_limit:
            self._balance -= amount
            print(f"Current Account {self._account_number}: Withdrawn ${amount}. Remaining Balance: ${self._balance}.")
        else:
            print("Exceeded overdraft limit.")
    
    
    