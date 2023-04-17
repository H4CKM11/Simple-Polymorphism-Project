#ifndef ACCOUNTS_H
#define ACCOUNTS_H

class accounts
{
protected:
    double totalAmount;
public:
    virtual void withdraw() = 0;
    virtual void checkBalance() = 0;

    virtual ~accounts();

};

class checkingAccount : public accounts
{
public: 
    checkingAccount();
    virtual void withdraw() override;
    virtual void checkBalance() override;
    virtual ~checkingAccount() override;
};

class savingsAccount : public accounts
{
public: 
    savingsAccount();
    virtual void withdraw() override;
    virtual void checkBalance() override;
    virtual ~savingsAccount() override;
};

class trustAccount : public accounts
{
public: 
    trustAccount();
    virtual void withdraw() override;
    virtual void checkBalance() override;
    virtual ~trustAccount() override; 
};



#endif